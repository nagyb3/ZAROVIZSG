```
Statisztikai minta és becslések, átlag és szórás. Konfidenciaintervallumok. Az u-próba.

Az informatikai biztonság fogalma, legfontosabb biztonsági célok. Fizikai védelem, kártékony programok, osztályozásuk terjedési módjuk és büntető rutinjuk szerint. Algoritmikus védelem eszközei: titkosítás, digitális aláírás, hash függvények. Az AES és RSA algoritmusok.
```

# alkstat (3)
[[10 - StatSample10.pdf]]
### Statisztikai minta
![[Pasted image 20250319230957.png]]

### Becslések
(Fazekas I 117. oldal)
- torzítatlan becslés
- konzisztens becslés
- maximum likelihood becslés

### Átlag
(átlag - empirikus közép)
[[10 - StatSample10.pdf]] 27. oldal

### Szórás
Fazekas I: 33. oldal
variancia === szórásnégyzet
- empirikus szórásnégyzet (variancia)
[[10 - StatSample10.pdf]] 29. oldal
- steiner formula
- korrigált empirikus variancia

### Konfidenciaintervallumok.
Fazekas I: 119. oldal

### Az u-próba
Fazekas I: 120. oldal

-----------
# ibiza
### Az informatikai biztonság fogalma
[[alapfogalmak.pdf]] 6. oldal
### Legfontosabb biztonsági célok
[[alapfogalmak.pdf]] 8. oldal
CIA hármas:
- Confidentiality (Bizalmasság)
- Integrity (Sértetlenség)
- Availability (Rendelkezésre állás)
- Accountability (Nyomonkövethetőség)
- Assurance (Biztosíték / garancia)

### Fizikai védelem
[[ibiza_fizikai_védelem.pdf]]

### Kártékony programok:
[[9_Kártékony programok.pdf]]
### Osztályozásuk terjedési módjuk és büntető rutinjuk szerint.

### Algoritmikus védelem eszközei:
- titkosítás
[[titkosítások.pdf]]
- digitális aláírás
[[ibiza_hash_aláírás.pdf]]
- hash függvények
[[ibiza_hash_aláírás.pdf]]

### AES titkosítás
(Advanced Encryption Standard)
Szimmetrikus titkosítási séma, vagyis a titkosító és a visszafejtő kulcs egyezik egymással
### RSA titkosítás
Asszimmetrikus titkosítási séma, vagyis a két kulcs nem kapható meg egymásból polinomiális időben
[[rsa.pdf]]
(Rivest-Shamir-Adleman)
jellemzői:
- TODO

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