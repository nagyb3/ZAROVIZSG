//Készítette: Harsányi Gábor
//Tutor: Holozsnyák Nándor Kristóf
//2015-05-16
//fordítani - g++ tcpp.cpp -o tcpp -O3 -std=c++11 -lpthread
#include <iostream>
#include <unistd.h>
#include <string>
#include <atomic>
#include <thread>
#include <fstream>
#include <string.h>


static const int MAX_TITKOS = 4096;
static const int OLVASAS_BUFFER = 256;
static const int KULCS_MERET = 6;
static const int SZALL_SZAM = std::thread::hardware_concurrency();


double atlagos_szohossz (const char *titkos, int titkos_meret)
{
  int sz = 0;
  for (int i = 0; i < titkos_meret; ++i)
    if (titkos[i] == ' ')
      ++sz;

  return (double) titkos_meret / sz;
}

int tiszta_lehet (const char *titkos, int titkos_meret)
{
  // a tiszta szoveg valszeg tartalmazza a gyakori magyar szavakat
  // illetve az átlagos szóhossz vizsgálatával csökkentjük a
  // potenciális töréseket

  double szohossz = atlagos_szohossz (titkos, titkos_meret);

  return szohossz > 5.0 && strcasestr (titkos, "Copyright");

}

void exor (const char kulcs[], int kulcs_meret, char titkos[], int titkos_meret, char post_buffer[])
{

  int kulcs_index = 0;

  for (int i = 0; i < titkos_meret; ++i)
    {     

      post_buffer[i] = titkos[i] ^ kulcs[kulcs_index];
      kulcs_index = (kulcs_index + 1) % kulcs_meret;

    }

   

}

int
exor_tores (const char kulcs[], int kulcs_meret, char *titkos,int titkos_meret,char post_buffer[])
{
 
  exor (kulcs, kulcs_meret, titkos, titkos_meret, post_buffer);
  return tiszta_lehet (post_buffer, titkos_meret);

}

void Kulcs_Tores(int i,char * titkos, int length, int Hoss)
{
  
  char kulcs[KULCS_MERET];
  int temp;
  int k = i;

 
  int Lepeskoz = Hoss / SZALL_SZAM;
  char *post_buffer = new char[length];
  int from, to;

  for (int w = 0; w < SZALL_SZAM; w++){

    from = w*Lepeskoz;
    to = (w+1)*Lepeskoz;
    
    if(w == i) {
      break;
    }

  }
  std::cout << i << " - megyek " << from << " ide:" << to << std::endl;

 

  for(; from < to ;from++)
    {

      temp = from;

      for(int l = KULCS_MERET-1; l >= 0; l--)
      {
         
          kulcs[l] = ( temp % 10 )+48;
          temp /= 10;
          
      }
    
      if (exor_tores (kulcs, KULCS_MERET, titkos, length, post_buffer)){
          std::cout << "Egy esetleges kulcs: " << kulcs <<  std::endl;
          std::cout << post_buffer << std::endl;

      }
    
    }

}

int main (int argc, char ** argv) {


  std::cout << "Program indul..." << std::endl;
  
  std::string beFile = *++argv;
  std::thread t[SZALL_SZAM];
  std::fstream bemenet(beFile,std::ios_base::in);
 
  std::cout << "Szálaid száma: " << SZALL_SZAM << std::endl;

  bemenet.seekg (0, bemenet.end);

  int length = bemenet.tellg();

  bemenet.seekg (0, bemenet.beg);

  char *c = new char[length];

  bemenet.read(c,length);

  unsigned int Hoss = 10;

  for(int m = 1; m < KULCS_MERET; m++){ 

      Hoss *= 10;
  }


  for (int i = 0; i < SZALL_SZAM; i++) {
              t[i] = std::thread(Kulcs_Tores,i,c,length,Hoss);
  }
  std::cout << "Kulcsok készülőben..." << std::endl;

 for (int i = 0; i < SZALL_SZAM; ++i) {

             t[i].join();
  }
  

  return 0;
}
