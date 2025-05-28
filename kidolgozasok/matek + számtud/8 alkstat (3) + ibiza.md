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

megj matekingről: ebben a tételben FAE mintáról van szó (Független Azonos Eloszlású) ?

-----------
# ibiza
### Az informatikai biztonság fogalma
[[alapfogalmak.pdf]] 6. oldal

![[Pasted image 20250526185203.png]]
Az informatikai biztonság az informatikai rendszer olyan, a védő számára kielégítő mértékű állapota, amely az informatkai rendszerben kezelt **adatok** bizalmassága, sértetlensége és rendelkezésre állása, illetve a rendszerelemek sértetlensége és rendelkezésre állása szempontjából zárt, teljes körű, folytonos és kockázatokkal arányos.

adatok bizalmassága, sértetlensége, rendelkezésre állása (**BSR**)
ÉS
rendszerelemek sértetlensége és rendelkezésre állása (**S és R**) 
=>
szempontjából zárt, teljes körű, folytonos és a kockázatokkal arányos (**ZTFK**)

### Legfontosabb biztonsági célok
[[alapfogalmak.pdf]] 8. oldal
CIA hármas + AA: (**BSR**)
- **Confidentiality (Bizalmasság)**: Titkos vagy személyes információkat (privacy) jogosulatlanok nem ismerhetik meg. A bizalmasságot az adatok tárolásánál, feldolgozásánál és továbbításánál is garantálni kell.
- **Integrity (Sértetlenség)**: a sértetleség alá két fogalom tartozik:
	- Adatintegritás (data integrity): Teljesülésekor az adat jogosulatlanul nem módosult tárolása, feldolgozása vagy küldése során
	- Rendszer sértetlensége (system integrity): A rendszer működése az elvártnak megfelelő, jogosulatlan módosításoktól mentes
- **Availability (Rendelkezésre állás)**:  Biztosítja, hogy a szolgáltatás az arra jogosultak számára a szükséges időben és időtartamra használható

- **Accountability (Nyomonkövethetőség)**: Az a tulajdonság, hogy egy entitás által végrehajtott tevékenység visszakövethető legyen az entitáshoz. A tevékenységek ellenőrzés céljára rögzítésre kerülnek azért, hogy visszakövethetőek legyenek, bizonyíték álljon rendelkezésre. Ez a tulajdonság lehetővé teszi a letagadhatatlanságot (non-repudiation), a behatolások (intrusion) detektálását, megelőzését.
- **Assurance (Biztosíték / garancia)**:  A bizalom abban, hogy a négy másik biztonsági célt (bizalmasság, sértetlenség, rendelkezésre állás, nyomonkövethet®ség) a biztonsági alrendszer megfelelően ellátja/eléri

- **Hitelesség (Authenticity)**: Valaminek az a forrása, ami megvan jelölve és a tartalma az eredeti
- (megj: a következő kettő mechanizmust használhatjuk fel a hitelesség megteremtéséhez:)
	- **Felhasználó hitelesítése (Entity Authentication)**: Az a folyamat, amikor egy entitás meggyőződik egy másik entitás identitásáról.
	- **Üzenet hitelesítéső kód (Message Authentication Code)**: Egy rövid, x hosszúságú érték, mely lehetővé teszi az üzenet sértetlenségének és forrásának ellenőrzését, de nem biztosítja a letagadhatatlanságot
	
##### A különböző biztonsági célok közötti kapcsolat:
![[Pasted image 20250528092729.png]]

megj: ahonnan a nyíl mutat az a dependency (amitől valami függ vmi), és ahova mutat az lesz a depdendant (vagyis ami függ a dependency-től)

1, A **bizalmasság (confidentiality) függ a sértetlenségtől (integrity)**: mivel ha egy rendszer sértetlensége nem áll fenn, akkor nem biztosítható a rendszerben eltárolt adatok és a rendszerelemek bizalmassága.

Naivan: Ha bárki beléphet (nem áll fenn a sértetlenség), akkor a rendszerben eltárolt információk *bárki* számára elérhető.

2, **A sértetlenség (integrity) függ a bizalmasságtól (confidentiality)**: Ha bizonyos információk bizalmassága (pl. jelszó) bizalmassága sérül, akkor a sértetlenséget biztosító mechanizmus (pl authentication) kikerülhető.

Naivan: ha feltörik az adatbázist és kileakelik a jelszavakat akkor bárki beléphet.

3, A Rendelkezésre állás (**availability**) és nyomonkövethetőség (Accountability) függ a bizalmasságtól (confidentiality): Ha bizonyos információk (pl jelszó) bizalmassága sérült, akkor a rendelkezésre állást és a nyomonkövethetőséget biztosító mechanizmusok kikerülhetőek.

Naivan: ha kikerül a jelszó és azzal valaki betud lépni akkor a rendszer lehet nem lesz elérhető (valaki leállítja), vagy a nyomonkövethetőséget biztosító mechanizmusokat leállíthatja/kikerülheti (pl logging, audit naplók stb)

4, **A rendelkezésre állás (availability) és a nyomonkövethetőség (accountability) függ sértetlenségtől (integrity)**, mivel ha a rendszer sértetlensége sérült, akkor a rendszer rendelkezésre állását és nyomonkövethetőségét biztosító mechanizmusok és sérülhettek 

(megj: továbbá minden függ az assurance-től (de szerintem ez benne van az assurance fogalmában is)

### Fizikai védelem
[[ibiza_fizikai_védelem.pdf]]

A fizikai védelem feladata azon fizikai erőforrások védelme, melyek az adatok tárolását, feldolgozását, továbbítását biztosítják. A védelmi intézkedések többsége preventív vagy detektív. (?)

**Fizikai infrastruktúra** (általános fogalom):
- **Informatikai rendszer hardver elemei**: Adatfeldolgozó és tároló eszközök, adatátviteli és hálózati elemek és offline tároló eszközök. Ide soroljuk az informatikai rendszer dokumentációit is.
- **Épületek**: Épületek, ahol az informatikai rendszer zikai elemei megtalálhatóak
- **Kiszolgáló rendszerek**: Elektromos vezetékek, kommunikációs hálózatok,víz- és gázvezetékek.
- **Személyzet**: Azon személyek, melyek az informatikai rendszer használói, fenntartói vagy működtetői.


#### A fizikai védelem kategóriái:
##### Természeti csapások
Tornádó és földrengés *lehet* nem jó a fizikai infrastruktúnák....
Megj: A diák csak kontextként vannak ennyi biztos nem kell... 

![[Pasted image 20250528101132.png]]
![[Pasted image 20250528101148.png]]
![[Pasted image 20250528101219.png]]

Környezeti csapások

Technikai fenyegetések

Emberi fenyegetések

### Kártékony programok:
[[9_Kártékony programok.pdf]]

=> Olyan program, amely valamilyen rendszerbe beépülve az áldozat adatainak, szoftvereinek bizalmasságát, integritását, rendelkezésre állását veszélyezteti, vagy erkölcsi károkat okoznak, mert pénz, időt, embert kötnek le.

Fogalma:
![[Pasted image 20250527203130.png]]
### Kártékony programok osztályozásuk terjedési módjuk és büntető rutinjuk szerint

TODO: APT: Fejlesztett perzisztens fenyegetés

TODO példák apt-re
### Terjedési módjuk szerint: 
##### Vírus
-> Program, amely saját másolatait helyezi el (megfertőzi) más, végrehajtható programokban vagy dokumentumokban.

A vírus kód megfertőzhet alkalmazásokat, vagy rendszerfájlokat, vagy programkódokat, melyeket rendszerbetöltnél futtat a rendszer.

Megj: mostanában script kód formájában gyakoriak, melyek pl Microsoft Word dokumentumok, Excel táblá, vagy Adobe PDF dokumentumok aktív tartalmát adják.

A vírus kód lefutásával valamilyen kárt okoz, pl. törli az adatokat, programokat, melyet az aktuális felhasználó jogosultsága enged.

###### A vírusok 3 része:
- FERTŐZŐ MECHANIZMUS (infection vector): mechanizmus mellyel a vírus terjed, sokszorozódik
- INDÍTÉK: esemény vagy feltétel, mely meghatározza mikor aktiválódik a büntető rutin. Az ilyen a programokat logikai bombának is hívják
- BÜNTETŐ RUTIN: kárt okozó tevékenység (pl törlés)

###### A vírusok célpont szerinti csoportosítása
- **BOOT VÍRUSOK**: A merevlemez boot szektorába ágyazódik be, így még az operációs rendszer betöltése előtt aktiválódik. Ennek hatására a fertőzött merevlemez az össze meghajtóba helyezett lemezt megfertőzi.
- **ALKALMAZÁS VÍRUSOK**: a megfertőzött állományokba beírják a saját kódjukat. Két fajáját különböztetjük meg:
	- Hozzáfűződő (append): az alkalmazások végéhez fűződnek, elhelyeznek azonban a program elején egy kódot, hogy az alkalmazás indulásakor előbb ők töltődjenek be
	- felülírő (replace) vírusokat: az alkalmazás elejét írják felül saját kódjukkal, így a fertőzött állomány adatot veszít, az eredeti állapot nem állítható helyre.
	- => amennyiben egy fertőzött fájlt elindítunk, a vírus betöltődik a memóriába és megfertőzi az összes többi elindított programokat
- MACROVÍRUSOK: 
- ÖSSZETETT VÍRUSOK: többféle módon, többféle állományt képesek megfertőzni (?)

##### Vírusok csoportosítási rejtezkedési stratégiájuk szerint


#### Worm (férgek)
-> 

#### Trójai
#### Büntető rutin szerint
- botnet
- adathalász
- kémprogram
- gyökércsomagok (rootkit)
## Algoritmikus védelem eszközei:
## titkosítás
[[titkosítások.pdf]]

Általában a titkosításról:
![[Pasted image 20250528102118.png]]
Itt a lényeg, hogy az üzenetet egy nyílt csatornán szeretnénk elküldni egy cél számára, de ahhoz, hogy ezt az üzenetet csak a célszemély tudja elolvasni ezért titkosítjuk...

### Szimmetrikus titkosítás
A titkosító és a visszafejtő kulcsok, **megegyeznek** vagy a **visszafejtő a titkosítóból könnyen kiszámítható**, polinomiális időn belül.
![[Pasted image 20250528102243.png]]
![[Pasted image 20250528102511.png]]
![[Pasted image 20250528102528.png]]

### Asszimmetrikus titkosítás

![[Pasted image 20250528102420.png]]
![[Pasted image 20250528102545.png]]
![[Pasted image 20250528102609.png]]

Asszimmetrikus és szimmetrikus titkosítási sémák összehasonlítása:
![[Pasted image 20250528102451.png]]
## digitális aláírás
[[ibiza_hash_aláírás.pdf]]

A digitális aláírás használatával képesek vagyunk például egy dokumentum hitelességét és letagadhatatlanságát biztosítani.
![[Pasted image 20250528105358.png]]
![[Pasted image 20250528112516.png]]


## hash függvények
[[ibiza_hash_aláírás.pdf]]

Tetszőleges véges hosszú üzenethez egy n hosszú üzenetet rendelünk.

=> A hash függvény nem injektív függvény, vagyis lehet, hogy 

A hash függvények képes teljesíteni számunkra az adatintegritást (CIA-ból I), mivel egy adott adatok halmazról elkészített hash értéket elküldjük az adathalmazzal együtt, és az adathalmaz fogadója képes a hash függvény segítségével ellenőrzni, hogy a megkapott adathalmaz hash érték tényleg megegyezik-e azzal amit megkapott.

másnéven a hash értéket hívjhatjuk: LENYOMAT / FINGERPRINT

Lavina-hatás

Hash függvény tulajdonság: 
- **Első ősképellenálló**
	- form: y-hoz nehéz olyan x értéket találni, hogy y = H(x) tejesüljön
	- magyarul: egy hash értékhez nehéz megtalálni a "bemeneti értéket"
- **Második ősképellenálló** (másnéven gyengén ütközésmentes)
	- form: egy x értékhez NEHÉZ egy olyan x' értéket találni, hogy x != x' és H(x) = H(x')
	- magyarul: nehéz egy bemeneti értékhez egy másik bemeneti értéket találni, hogy ez a kettő bemeneti érték különböző legyen és a hash értékük azonos legyen
- **Ütközésmentes**: nehéz (gyakorlatilag lehetetlen) olyan x, x' eleme X értékeket találni, hogy H(x) = H(x')
	- az ütközés azt jelentené, hogy 2 különböző bemenetre ugyanazt a hash értéket adj meg a függvény/algoritmus
	- magyarul: nehéz két olyan értéket találni amelyeknek hash értékekük megegyezne
	- (megj: ez részben összefügg az injektívitás hiányával is)
	- Ez azt jelenti, hogy még ha léteznek matemaitkai értelemben ütközések (az injektívitás hiánya miatt) akkor is ezek megtalálásához nem tudunk polinomiális időben lévő algoritmust (hogy találjunk 2 ilyen bemenetet)

### AES titkosítás
(Advanced Encryption Standard)
Szimmetrikus titkosítási séma, vagyis a titkosító és a visszafejtő kulcs egyezik egymással. ... ?

![[Pasted image 20250527220148.png]]
![[Pasted image 20250527220228.png]]

k a kulcs

128bit (16 byte) információt tudunk titkosítani ezen algoritmussal

ezen 16 byte információt feloszjtuk egy 4x4-es gridbe

Az AES titkosítási folyamata a következő módon néz ki:

![[Pasted image 20250527220412.png]]
### RSA titkosítás
Asszimmetrikus titkosítási séma, vagyis a két kulcs nem kapható meg egymásból polinomiális időben
[[rsa.pdf]]
(Rivest-Shamir-Adleman)
jellemzői:
- ? prím faktorizáció miatt biztonságos ?

=> **kulcsgenerálás lépései:**
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

==> Ekkor megkaptuk a visszafejtő és a titkosító kulcsot
titkosító: (e, n) = PK
visszafejtő: (d, n) = SK

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
![[Pasted image 20250527224847.png]]
![[Pasted image 20250527224906.png]]

