```
Statisztikai minta és becslések, átlag és szórás. Konfidenciaintervallumok. Az u-próba.

Az informatikai biztonság fogalma, legfontosabb biztonsági célok. Fizikai védelem, kártékony programok, osztályozásuk terjedési módjuk és büntető rutinjuk szerint. Algoritmikus védelem eszközei: titkosítás, digitális aláírás, hash függvények. Az AES és RSA algoritmusok.
```

# alkstat (3)
[[10 - StatSample10.pdf]]


### Statisztikai minta
![[Pasted image 20250319230957.png]]
![[Pasted image 20250526184931.png]]

naivan: egy valószínűségi változót megfigyelünk n-szer, egymástól függetlenül. Ezek lesznek X1, X2, ..., Xn a megfigyelés eredményei. => Ezek megfigyelési eredmények lesznek a minta

A gyakorlatban mindig minta realizációt figyelünk meg ??

Minta realizáció ???

### Becslések
(Fazekas I 117. oldal)

CÉLJA: a becslések segítségével tudunk egy minta alapján a fontosabb statisztikai mutatókra következtetést tenni. (a teljes sokasságra tekintve)

A minta átlaga a sokasági átlag körül fog ingadozni.
A minta átlaga jele: μ (mű)


![[Pasted image 20250526184949.png]]


![[Pasted image 20250526185005.png]]

### Átlag
(átlag - empirikus közép)
[[10 - StatSample10.pdf]] 27. oldal
(E kidolgozásból:)
Számtani vagy aritmetikai középértéken n darab szám átlagát, azaz a számok összegének n-ed részét értjük. A számtani közepet általában A betűvel jelöljük:
![[Pasted image 20250526185045.png]]



### Szórás
Fazekas I: 33. oldal
variancia === szórásnégyzet
- empirikus szórásnégyzet (variancia)
[[10 - StatSample10.pdf]] 29. oldal
- steiner formula
- korrigált empirikus variancia

### Konfidenciaintervallumok.
Fazekas I: 119. oldal

A konfidencia intervallumot becslések megbízhatóságához használjuk fel. 
	konfidencia szint === megbízhatósági szint (ez lesz, hogy 1-ből mennyit von ki alpha, vagyis hogy a sokasági átlag mekkora eséllyel esik az intervallumba)
	jelölése: 1 - alpha
	VAGYIS: alpha azt jelöli, hogy a "haranggörbének" mekkora százalékát nem fogadjuk el

Innentől az a célunk, hogy a minta átlag beleessen a sokasági átlag konfidencia intervallumába.
![[Pasted image 20250526190328.png]]

![[Pasted image 20250526185038.png]]


### Az u-próba
Fazekas I: 120. oldal

[[11 - Hypotheses11.pdf]]

![[Pasted image 20250526185120.png]]
![[Pasted image 20250526185124.png]]

Fentiben m0 jelöli a sokasági átlagot (aka mű)


![[Pasted image 20250526185126.png]]




megj: FAE minta (független azonos eloszlású) ?

-----------
# ibiza
### Az informatikai biztonság fogalma
[[alapfogalmak.pdf]] 6. oldal

![[Pasted image 20250526185203.png]]
adatok bizalmassága, sértetlensége, rendelkezésre állása (**BSR**)
rendszerelemek sértetlensége és rendelkezésre állása (**S és R**) szempontjából zárt, teljes körű, folytonos és a kockázatokkal arányos (**ZTFK**)

### Legfontosabb biztonsági célok
[[alapfogalmak.pdf]] 8. oldal
CIA hármas: (**BSR**)
- **Confidentiality (Bizalmasság)**
- **Integrity (Sértetlenség)**
	- Fajtái:
		- adatok sértetlensége (data integrity)
		- rendszer sértetlenség (system integrity)
- **Availability (Rendelkezésre állás)**
- Accountability (Nyomonkövethetőség)
- Assurance (Biztosíték / garancia)

### Fizikai védelem
[[ibiza_fizikai_védelem.pdf]]

?A fizikai infrastruktúra védelme fontos. A fizikai infrastruktúrába bele tartozik azon hardver elem, amely a bizalmas adatokat tárolja, feldolgozza vagy továbbítja. Illetve a fizikai infrastruktúrába beletartozik az épület is, amely a hardvereket "tárolja".

?Mitől kell fizikailag védeni a fizikai infrastruktúrát?
- környezete tényezők
- technikai veszélyek
- Emberek
### Kártékony programok:
[[9_Kártékony programok.pdf]]
### Osztályozásuk terjedési módjuk és büntető rutinjuk szerint.

#### Terjedési módjuk szerint: 
- vírus
- worm (férgek)
- trójai
#### Büntető rutin szerint
- botnet
- adathalász
- kémprogram
- gyökércsomagok (rootkit)
## Algoritmikus védelem eszközei:
## titkosítás
[[titkosítások.pdf]]

## digitális aláírás
[[ibiza_hash_aláírás.pdf]]


## hash függvények
[[ibiza_hash_aláírás.pdf]]
TODO hashfüggvény tulajdonságai

### AES titkosítás
(Advanced Encryption Standard)
Szimmetrikus titkosítási séma, vagyis a titkosító és a visszafejtő kulcs egyezik egymással
### RSA titkosítás
Asszimmetrikus titkosítási séma, vagyis a két kulcs nem kapható meg egymásból polinomiális időben
[[rsa.pdf]]
(Rivest-Shamir-Adleman)
jellemzői:
- ? prím faktorizáció miatt biztonságos ?

=>**kulcsgenerálás lépései:**
#### 1, keressünk 2db prím számot: p, q

Ezeket a számokat a Miller-rabin prímteszt segítségével ellenőrizzük le, hogy tényleg prímek-e

#### 2, adjuk meg az RSA modulust (n = p * q)

#### 3, számoljuk ki az Euler féle phi függvény értékét
$$
\phi(n) = (p-1)(q-1)
$$

Megjegyzés: az Eurler-féle phi függvény jelentése:
![[Pasted image 20250518100012.png]]

#### 4, választunk egy véletlen `e` egészet úgy, hogy:
$$
1 < e < \phi(n)
$$
ÉS
$$
(e, \phi(n)) = 1
$$
(e-nek és az phi(n)-nek legnagyobb közös osztója: 1)

-> Ez az `e` érték lesz az RSA titkosítási sémában a nyilvános kulcs része lesz, hiszen:
$$
PK = (e, n)
$$
Ezt a nyilvános kulcsot fogjuk felhasználni a TIKTOSÍTÁSHOZ (megj: e mint encryption)

#### 5, kiszámítjuk `d`-t úgy, hogy:
$$
1 < d < \phi(n)
$$
ÉS
$$
e * d \equiv 1 \space (mod \space \phi (n))
$$
Az RSA titkosítási sémában a d szám a privát kulcs (visszafejtő kulcs) részét fogja képezni, hiszen:
$$
SK: (n, d)
$$

## Titkosítás RSA-val:

$$
Enc _{PK} (m) = m ^ e \space (mod \space n)
$$
### Titkosított üzenet vissafejtése RSA-val:
$$
Dec _{SK} = c ^ d \space (mod \space n)
$$

## Digitális aláírás RSA-val:
$$
Sign _{PK} (m) = m ^ d \space (mod \space n) = S
$$
#### Digitális aláírás ellenőrzése RSA-val:s
$$
Ver _{SK} = S ^ e \space (mod \space n) 
$$
-> ez akkor lesz igaz ha:
$$
S^e \equiv m \space (mod \space n)
$$
egyébként hamis

-> **RSA titkosítási séma által használt algoritmusok:**
prímek generálása:
- Miller-Rabin prímteszt
e, d vizsgálata:
- kibővített euklideszi algoritmus
titkosítás, aláírás ellenőrzése:
- gyorshatványozás
visszafejtés, aláírás ??
- kínai maradék tétel