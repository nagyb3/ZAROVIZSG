#define MAX_TITKOS 4096
#define OLVASAS_BUFFER 256
#define KULCS_MERET 8
#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <omp.h>
#include <string.h>

double
atlagos_szohossz (const char *titkos, int titkos_meret)
{
  int sz = 0;
  for (int i = 0; i < titkos_meret; ++i)
    if (titkos[i] == ' ')
      ++sz;

  return (double) titkos_meret / sz;
}

int
tiszta_lehet (const char *original, int titkos_meret)
{
  // a tiszta szoveg valszeg tartalmazza a gyakori magyar szavakat
  // illetve az átlagos szóhossz vizsgálatával csökkentjük a
  // potenciális töréseket

  double szohossz = atlagos_szohossz (original, titkos_meret);

  return szohossz > 6.0 && szohossz < 9.0
    && strcasestr (original, "hogy") && strcasestr (original, "nem")
    && strcasestr (original, "az") && strcasestr (original, "ha");

}

void
exor (const char kulcs[], int kulcs_meret, char titkos[], char original[], int titkos_meret)
{

  for (int i = 0; i < titkos_meret; ++i)
    {
		
      original[i] = titkos[i]^ kulcs[i%kulcs_meret];

    }

}

int
exor_tores (const char kulcs[], int kulcs_meret, char titkos[], char original[],
	    int titkos_meret)
{

  exor (kulcs, kulcs_meret, titkos, original, titkos_meret);

  return tiszta_lehet (original, titkos_meret);

}

int
main (void)
{
  int key=0;
  char kulcs[KULCS_MERET];
  char titkos[MAX_TITKOS];
  char *p = titkos;
  char original[MAX_TITKOS];
  char *q = original;
  int olvasott_bajtok;

  // titkos fajt berantasa
  while ((olvasott_bajtok =
	  read (0, (void *) p,
		(p - titkos + OLVASAS_BUFFER <
		 MAX_TITKOS) ? OLVASAS_BUFFER : titkos + MAX_TITKOS - p)))
    p += olvasott_bajtok;
	q=p;
    
  // maradek hely nullazasa a titkos bufferben  
  for (int i = 0; i < MAX_TITKOS - (p - titkos); ++i)
{
    titkos[p - titkos + i] = '\0';
    original[q - titkos + i] = '\0';
}
  // osszes kulcs eloallitasa
  // kulcs elore nullazasa
  for(int i=0;i<KULCS_MERET;i++)
	kulcs[i]='0';
//kulcs eloallitasa es parhuzamositas
int max = pow(10,KULCS_MERET);
#pragma omp parallel for private(kulcs,key,original)
  for(int i=0;i<max;i++)
  {
	key=i;
	for(int j=KULCS_MERET-1;j>-1;j--)
	{
		kulcs[j]=key%10+'0';
		key=key/10;
	}
	if (exor_tores (kulcs, KULCS_MERET, titkos,original, p - titkos))
		      printf
			("Kulcs: [%c%c%c%c%c%c%c%c]\nTiszta szoveg: [%s]\n",
				kulcs[0],kulcs[1],kulcs[2],kulcs[3],kulcs[4],kulcs[5],kulcs[6],kulcs[7], original);
	
			   //exor (kulcs, KULCS_MERET, titkos, p - titkos); // ujra EXOR-ozunk, igy nem kell egy masodik buffer
  }  
		 
  return 0;
}
