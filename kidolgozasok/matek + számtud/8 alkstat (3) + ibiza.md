```
Statisztikai minta és becslések, átlag és szórás. Konfidenciaintervallumok. Az u-próba.

Az informatikai biztonság fogalma, legfontosabb biztonsági célok. Fizikai védelem, kártékony programok, osztályozásuk terjedési módjuk és büntető rutinjuk szerint. Algoritmikus védelem eszközei: titkosítás, digitális aláírás, hash függvények. Az AES és RSA algoritmusok.
```

# alkstat (3)
[[10 - StatSample10.pdf]]
### Statisztikai minta
![[Pasted image 20250319230957.png]]
! [[Pasted image 20250526184931.png]]
5.1.1 A minta és minta realizáció
A matematikai statisztika szemléletmódja szerint a megfigyelendő mennyiség valószínűségi változó. *(szóval amit mérni fogunk pl egy ember magassága az nem egy fix szám, hanem egy valószínűségi változó, amit bizonyos valószínűséggel különböző értékeket vehet fel.)* Jelöljük ezt a valószínűségi változót X-szel. Figyeljük meg X-et *n-szer*, egymástól függetlenül. Jelölje
$$
X_1, X_2 \dots X_n
$$
a megfigyelési eredményeket. Ezeket a megfigyelési eredményeket nevezzük mintának. Azonban
$$
X_1, X_2 \dots X_n-et
$$
sem egy szám n-esnek tekintjük, hanem olyan objektumoknak, amely magába sűrítik a megfigyelések eredményeként adódó összes lehetséges szám n-est. Így az
$$
X_1, X_2 \dots X_n
$$
mennyiségeket is valószínűségi változóknak tekintjük.

Az
$$
X_1, X_2 \dots X_n
$$
FÜGGETLEN, AZONOS ELOSZLÁSÚ VALÓSZÍNÁSÉGI VÁLTOZÓKAT MINTÁNAK (ezt nevezzük FAE mintának) nevezzük. Rögzített
$$
\omega \in \Omega
$$
esetén a
$$
x_1 = X_1(\omega), x_2 = X_2(\omega), \dots x_n = X_n(\omega)  
$$
szám n-est MINTA REALIZÁCIÓnak nevezzük. (itt nagy omega az eseménytér)

Notes
A gyakorlatban mindig minta realizációt figyelünk meg. Ezek azonban megfigyeléssorozatonként különböznek egymástól (TODO). A minta elméleti fogalma minden lehetséges minta realizációt magába foglalja. ->

Előzőhöz magarázat: amikor matemaikai szempontból tekintjük a mintát (X_1, X_2 .. X_n) akkor ezek nem konkrét számokat jelölnek, hanem n darab valószínűségi változóból álló rendszert. Ezek nem konkrét értékek, hanem lehetséges értékeket modellező változók.

Kontext: A minta fontossága: van egy nagyon nagy sokaság (pl az összes magyar egyetemista), de mi nem tudjuk az egész sokaságot megvizsgálni. A populáció megszámlálható, de túl nagy ehhez, hogy mindenet megvizsgáljuk. Ezért mi csak egy kis mintát nézünk meg belőle, és ABBÓL AKARUNK KÖVETKEZTETÉSEKET TENNI A TELJES SOKASÁG TULAJDONSÁGAIRA.

naivan: egy valószínűségi változót megfigyelünk n-szer, egymástól függetlenül. Ezek lesznek X_1, X_2, ..., X_n a megfigyelés eredményei. => Ezek megfigyelési eredmények lesznek a minta

A gyakorlatban mindig minta realizációt figyelünk meg. A minta realizáció lesz valódi, konkrét adat, amiket a gyakorlatban megfigyelünk.

MAGYARÁZAT EHHEZ:
Legyen X az a valószínűségi változó, amely egy dobókocka dobásához hozzárendeli a dobókocka dobás eredményét.

Tegyük fel, hogy háromszor dobunk az adott kockával, ekkor
X_1: első dobás eredménye
X_2: második dobás eredménye
X_3: harmadik dobás eredménye

=> ekkor X_1 .. X_n, ig mindegyik azonos eloszlású (ugyanugy a kockadobással azonos eloszlásúak) és függetlenek egymástól.

Ekkor a minta realizáció lesz a konkrét megfigyelt érték, vagyis a dobások kimeneteli (magyarul milyen számokat dobtunk konkrétan a dobókockánkkal)
### Becslések
(Fazekas I 117. oldal)

A becslés egy statisztikai eljárás, amely segítségével a minta alapján tudunk következtetéseket tenni a populációra. (pl átlagot, szórást stb)

#### Becslések lehetséges tulajdonságai
##### Torzítatlan becslés
(ez egy tulajdonsága lehet a becsléseknek !!)

A torzítlanság azt mondja meg, hogy a becslés a becsült érték körül ingadozik.

DEFINÍCIÓ: A T statisztikát a t paraméter torzítatlan becslésének nevezzük, ha E(T) = t

A T statisztika általános módon a mintából számított érték, ami a minta valamilyen tulajdonságát írja le (például a minta átlagot vagy a minta szórását)

Megj: a T statisztika ebben az esetben egy valószínűségi változó (mivel minden minta realizációnál más lesz a T statisztika értéke, gondoljunk bele, ha más mintát veszünk egy populációbal akkor annak más lesz a minta átlaga például)

#### (Erősen) konzisztens becslés
(Ez is egy tulajdonsága lehet a becsléseknek)

!! MINÉL NAGYOBB MINTÁRA VESSZÜK A BECSLÉST ANNÁL JOBBAN KÖZELÍTI MEG A t PARAMÉTERT

DEFINITION:
6.1.2. Definition. A T_n sorozatot a t paraméter konzisztens (erősen konzisztens) becslésének nevezzük, ha Tn → t sztochasztikusan (majdnem biztosan)

![[Pasted image 20250526185005.png]]

### Átlag
empirikus közép - minta átlag
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
Az u-próba angolul: z-test
[[11 - Hypotheses11.pdf]]

A statisztikai hipotézisek vizsgálatára próbálat (teszteket) alkalmazunk. A legegyszerűbb próba az u-próba.



![[Pasted image 20250526185120.png]]
![[Pasted image 20250526185124.png]]


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
- **Assurance (Biztosíték / garancia)**: A bizalom abban, hogy a négy másik biztonsági célt (bizalmasság, sértetlenség, rendelkezésre állás, nyomonkövethetőség) a biztonsági alrendszer megfelelően ellátja/eléri
	- megj: a többi biztonsági cél inkább csak célok (másnéven elvárások), de a garancia annak a bizonyítéka, hogy ezek az elvárások ténylegesen teljesülnek is.


- **Hitelesség (Authenticity)**: Valaminek az a forrása, ami megvan jelölve és a tartalma az eredeti
- (megj: a következő kettő mechanizmust használhatjuk fel a hitelesség megteremtéséhez:)
	- **Felhasználó hitelesítése (Entity Authentication)**: Az a folyamat, amikor egy entitás meggyőződik egy másik entitás identitásáról.
	- **Üzenet hitelesítéső kód (Message Authentication Code)**: Egy rövid, x hosszúságú érték, mely lehetővé teszi az üzenet sértetlenségének és forrásának ellenőrzését, de nem biztosítja a letagadhatatlanságot
	
##### A különböző biztonsági célok közötti kapcsolat:
![[Pasted image 20250528092729.png]]

megj: ahonnan a nyíl mutat az a dependency (amitől valami függ vmi), és ahova mutat az lesz a dependant (vagyis ami függ a dependency-től)

1, A **bizalmasság (confidentiality) függ a sértetlenségtől (integrity)**: mivel ha egy rendszer sértetlensége nem áll fenn, akkor nem biztosítható a rendszerben eltárolt adatok és a rendszerelemek bizalmassága.

Naivan: Ha bárki beléphet (nem áll fenn a sértetlenség), akkor a rendszerben eltárolt információk *bárki* számára elérhető.

2, **A sértetlenség (integrity) függ a bizalmasságtól (confidentiality)**: Ha bizonyos információk bizalmassága (pl. jelszó) bizalmassága sérül, akkor a sértetlenséget biztosító mechanizmus (pl authentication) kikerülhető.

Naivan: ha feltörik az adatbázist és kileakelik a jelszavakat akkor bárki beléphet.

3, A Rendelkezésre állás (**availability**) és nyomonkövethetőség (Accountability) függ a bizalmasságtól (confidentiality): Ha bizonyos információk (pl jelszó) bizalmassága sérült, akkor a rendelkezésre állást és a nyomonkövethetőséget biztosító mechanizmusok kikerülhetőek.

Naivan: ha kikerül a jelszó és azzal valaki betud lépni akkor a rendszer lehet nem lesz elérhető (valaki leállítja), vagy a nyomonkövethetőséget biztosító mechanizmusokat leállíthatja/kikerülheti (pl logging, audit naplók stb)

4, **A rendelkezésre állás (availability) és a nyomonkövethetőség (accountability) függ sértetlenségtől (integrity)**, mivel ha a rendszer sértetlensége sérült, akkor a rendszer rendelkezésre állását és nyomonkövethetőségét biztosító mechanizmusok is sérülhettek 

5, Minden függ az assurance-től (vagyis a garanciától).

### Fizikai védelem
[[ibiza_fizikai_védelem.pdf]]

A fizikai védelem feladata azon fizikai erőforrások védelme, melyek az adatok tárolását, feldolgozását, továbbítását biztosítják. A védelmi intézkedések többsége preventív vagy detektív. (?)

**Fizikai infrastruktúra** (általános fogalom):
- **Informatikai rendszer hardver elemei**: Adatfeldolgozó és tároló eszközök, adatátviteli és hálózati elemek és offline tároló eszközök. Ide soroljuk az informatikai rendszer dokumentációit is.
- **Épületek**: Épületek, ahol az informatikai rendszer zikai elemei megtalálhatóak
- **Kiszolgáló rendszerek**: Elektromos vezetékek, kommunikációs hálózatok,víz- és gázvezetékek.
- **Személyzet**: Azon személyek, melyek az informatikai rendszer használói, fenntartói vagy működtetői.

preventatív kontroll:
- használjunk felhőt
- legyenek tűz, víz, por érzékelők
- UPS: uninterrupted power supply

#### A fizikai védelem kategóriái:
##### Természeti csapások
Tornádó és földrengés *lehet* nem jó a fizikai infrastruktrúnák....
Megj: A diák csak kontextként vannak ennyi biztos nem kell... 

![[Pasted image 20250528101132.png]]
![[Pasted image 20250528101148.png]]
![[Pasted image 20250528101219.png]]

Környezeti csapások: not good

Technikai fenyegetések
- feszültséghiány
- túlfeszültség
- elektromágneses interferencia

Emberi fenyegetések:
- jogosulatlan hozzáférés
- lopás

### Kártékony programok:
[[9_Kártékony programok.pdf]]

=> Olyan program, amely valamilyen rendszerbe beépülve az áldozat adatainak, szoftvereinek bizalmasságát, integritását, rendelkezésre állását veszélyezteti, vagy erkölcsi károkat okoznak, mert pénz, időt, embert kötnek le.

Fogalma:
![[Pasted image 20250527203130.png]]
![[Pasted image 20250529134905.png]]
TÁMADÓI ESZKÖZTÁR (attack toolkit):
-> mostanra a kártékony programok terjedési módok és bünteti rutinok széles skálájával rendelkeznek.
==> Mivel az a céljuk, hogy maximalizálják a fertőzés sebességét, ezért többféle terjedési módot és bünteti rutint is alkalmaznak. !!


APT: Advanced Persistant Threat: FEJLETT PERZISZTENS FENYEGETÉS:
-> kiberbűnözés, amely üzleti és politikai célpontokat céloznak meg, többféle behatoló technológia és kártékony program alkalmazásával.

-> FEJLETT: A támadók számos eszközt használnak fel céljuk eléréséhez.
-> PERZISZTENS: A támadók egy jól meghatározott céllal tevékenykednek, és nem véletlenszerű találgatás során próbálnak rájönni, hogy milyen sebezhetőségeket tudnak kihasználni, hanem már felkészülten, alapos felderítőmunka után lépnek akcióba. Ameddig el nem érik a céljukat, nem hagyják el a rendszert. Gondoskodnak arról, hogy HOZZÁFÉRÉSÜK FENNTARTHATÓ legyen.
-> FENYEGETÉS: célzott, irányított és komplex akciókról beszélünk, amelyek komoly fenyegetést jelenthetnek az informatikai rendszerekre és az adatokra. 

### Kártékony programok osztályozásuk terjedési módjuk és büntető rutinjuk szerint

kártékony programok osztályozása lerövidítva SUM:
->TERJEDÉS SZERINT:
- VÍRUS: Fertőzött fájl futtatása. Program, amely saját másolatait helyezi el (megfertőzi) más, végrehajtható programokban vagy dokumentumokban.
- FÉREG (worm): 
- PSZICHOLÓGIAI TÁMADÁS
	- SPAM EMAIL-EK: felhasználó aktív részvétele szükséges
	- TRÓJAI LOVAK

->BÜNTETŐ RUTIN SZERINT:
- RENDSZER KÁROSÍTÁS: 
	- ADATOK MEGSEMMISÍTÉSE
	- RANSOMWARE: Lezárja a felhasználó fájljait, blokkolja az áldozat hozzáférését a számítógéphez, az okozott károk visszafordításáért minden esetben váltságdíjat követel, képesek lehetnek az áldozat érzékeny személyes adatainak megszerzésére (pl jelszavak), védelmi szoftverek (pl antivírusok) leállítására, és más kéretlen tevékenységekre
	- FIZIKAI, HARDVER, SZINTŰ SÉRÜLÉS: pl stuxnet
	- logkai bomba ?
- TÁMADÓ ÜGYNÖK: A támadó módosítja úgy a rendszert, hogy a támadó irányítása alá tudja venni, használhassa az erőforrásait => ZOMBIE ÉS BOTNET
- INFORMÁCIÓ SZERZÉS: fertőzött gépeken tárolt adatok összegyűjtése ()
	- Hitelesítési adatok (credential) ellopása, billentyűzetfigyelés (keylogger), kémprogramok
	- adathalászat, személyazonosság ellopása
	- felderítés, kémkedés
- LOPAKODÁS: A kártékony programok azon rutinja, melyekkel elrejtik jelenlétüket és hozzáférésüket a fertőzött gépeken (integritást sérti)
	- HÁTSÓAJTÓ (backdoor): Program titkos belépési pontja, ennek ismeretével tud a kártékony program átlépni a rendszer biztonsági hitelesítésén, ezzel hozzáférést kapva a renszerhez
	- GYÖKÉRCSOMAG (rootkit): egy programcsomag, mely installálása után fedett hozzáférést biztosít, tart fent a már fertőzött géphez adminisztrátori (ROOT) jogosultsággal. A feladata, hogy elrejtse a kártékony program jelenlétét a rendszerben.
		- szintjei: kernel módú és felhasználói módú

### Terjedési módjuk szerint: 
##### Vírus
-> Program, amely saját másolatait helyezi el (megfertőzi) más, végrehajtható programokban vagy dokumentumokban.

A vírus kód megfertőzhet alkalmazásokat, vagy rendszerfájlokat, vagy programkódokat, melyeket rendszer betöltésnél futtat a rendszer.

Megj: mostanában script kód formájában gyakoriak, melyek pl Microsoft Word dokumentumok, Excel táblá, vagy Adobe PDF dokumentumok aktív tartalmát adják.

A vírus kód lefutásával valamilyen kárt okoz, pl. törli az adatokat, programokat, melyet az aktuális felhasználó jogosultsága enged.

[[virusok extra]]
#### Worm (férgek)
-> Sebezhetőség kihasználása

Kliens és szerver oldali szoftver sebezhetőségének kiaknázásával férnek hozzá más számítógépekhez

Használhatnak hálózati kapcsolatokat, hogy rendszerről rendszerre terjedjenek.

Terjedhetnek megosztott médián keresztül, pl USB drive, CD, DVD lemezek.

E-mail vagy üzenőfal férgek: makrók és script kódok segítségével terjednek e-mail csatolmány vagy Instant Messenger csatolmányain keresztül.

**Önsokszorozók**, mivel nincsen szükségük gazdaprogramra.

A modern férgek:
- multiplatform: többféle platformot is támadnak, főleg népszerű UNIX variánsokat, illetve többféle népszerű dokumentumok makró és script kódjait.
- multi-kihasználás: többféle módú behatolási rendszer (Web szerverek, böngészők, e-amail, fájl megosztás, egyéb hálózati alkalmazások stb.)
- Ultragyors terjedés: optimalizálják terjedésüket, hogy rövid idő alatt minél nagyobb valószínűséggel minél több sebezehtő gépet próbáljanak.
- Poliform/metamorf
- szállítási eszközei: ideális többféle bünteti rutin terjesztésére => DDOS, rootkit, spyware

Drive-by-Downloads: 
-> célja: felhasználói alkalmazások hibáinak (bug) kihasználása
- Böngésző sebezhetőségét használja ki.
- A felhasználó egy a támadó által kontrollált weboldalt megnéz, a felhasználó tudta nélkül a böngésző bug-ját kihasználva letölt és installál egy kártékony programot.

Kliens-oldali sebezhetőség:
- malvertising: a támadó fizet, hogy hírdetések jelenjenek meg a célpont weboldalakon. A hírdetések kártékony programot tartalmaznak.
- email kliensek bug-jainak kihasználása
- PDF-olvasó bug: pdf olvasó kártékony programot installál amikor PDF dokumentumot nézünk.

Clickjacking:
-> A támadó célja, hogy összegyűjtsön a fertőzött felhasználóktól klikkeket.
"akaratlan lájkolás"-> a böngészőben a kattintást átirányítja a támadó számára ideális helyre. Akár keylogger

#### Pszichológiai támadás

1, Spam-email:
-> célja: átverni a felhasználókat, hogy saját rendszerüket veszélyeztessék vagy kiadjanak személyes információkat.
A felhasználó aktív részvétele szükséges

2, Trójai lovak:
A trójai ló egy olyan program, mely magukat hasznos programnak álcázzák de képesek a háttérben segíteni egyéb ártó szándékú programok bejutását és működtetését a számítógépen.
=> nem szokszorozódnak
=> általában tartalmazzák a hátsó kapu telepítését: fertőzés után hozzáférést biztosít az eszközhöz

3 db modell szerint működhetnek a trójai lovak:
- az eredeti program továbbra is folytatja eredeti funkcióját, de rajta kívül még valamilyen BÜNTETŐ RUTINt IS FUTTAT.
- A program továbbra is folytatja eredeti funkcióját de MÓDOSÍTJA ANNAK MŰKÖDÉSÉT, hogy végrehajtsa a büntető rutint
- TELJES MÉRTÉKBEN LECSERÉLI az eredeti program funckióját

#### Büntető rutin szerint
Büntető rutin: tevékenységek, melyek végrehajtódnak a fertőzött rendszeren
A kártékony programoknak általában van bünteti rutinjuk, de vannak olyanak is amelyeknek nincs és céljük csak a terjedés

- 1, Rendszer károsítás
	- Adatok megsemmisítése:
		- pl 1998 Csernobil vírus: Windows 98 és 98-at támadva, az indítási feltétel teljesülésekor törli az adatokat a merevlemezről => kárt okozva a fájlrendszerben
		- pl 2001 Klez mass-levelező féreg: Windows 98 és XP. Másolatokat készít és küld önmagáról a címtárban lévő email címekre. A merevlemezen lévő antivírus programot és fájlokat törli.
	- Ransomware:
		- Lezárja a felhasználó fájljait, blokkolja az áldozat hozzáférését a számítógéphez, az okozott károk visszafordításáért minden esetben váltságdíjat követel, képesek lehetnek az áldozat érzékeny személyes adatainak megszerzésére (pl jelszavak), védelmi szoftverek (pl antivírusok) leállítására, és más kéretlen tevékenységekre
			- gyakran drive-by-downloads során terjed
		- Ransomware példák
			- **Wannacry féreg**: 2017 május: Windows operációs rendszer EternalBlue biztonsági résén keresztül támad. Titkosítja az adatokat, Bitcoin-ban kéri a váltságdíjat. Shadowbrokers hackercsoport csinálta. Microsoft MS17-010 javítócsomag részeként javította. Első jelek szerint spear-phishing kampányra utalnak, amelyben JavaScript és Powershell kódot alkalmazó makrókkal ellátott MS Office dokumentumot terjesztenek csatolmányként.
			- Petya: 2016 március: támadó egy hitelesnek tűnő emailt küld, ami állásra való jelentkezésnek tűnik. -> Ez az önéletrajz Ransomware, ez azonnal tönkreteszi a bootrekordot és kikényszeríti az összeomlást. Az újrainduláskor egy üzenet jelenik meg, maley szerint "hibajavításra" van szükség -> ez a hibajavítás titkosítja a merevelemezt -> TOR-on keresztül váltságdíjat követel
		- Ransomware fajtái:
			- 1, Fájltitkosító ransomware: gyakran trójai vírusok, email mellékletek, népszerű programok sebezhetőségeit kihasználva terjed és a rendszerbe jutva gyors sebességgel megkeresi és TITKOSÍTJA A SZEMÉLYES FÁJLOKAT.
			- 2, Nem titkosító: A TELJES RENDSZERT LEZÁRJA. Valamilyen bűnüldöző hatóság üzenetének adja ki magát (fbi, cia...) és a számítógépen lévő illegális fájlokta megkeresi (pl torrentezett fájlok) és ezeket mint "bizonyíték" sorolja fel. Azt mondja a felhasználónak, hogy ha nem fizeti ki követelt büntetést akkor az áldozat börtönbe is kerülhet
			- 3, Böngészőlezáró: Javascript segítségével blokkolja a felhasználó böngészőjét, és figyelmeztető üzenetet jelenít meg. Illegális tevékenységgel gyanusítja a felhasználót és börtönbüntetéssel fenyegetőzik, ha nem fizeti ki a felhasználó a "büntetést".
	- Fizikai, hardver, szintű sérülés: a büntető rutin fizikai eszközöket károsít meg
		- pl Csernobil vírus: nem csak adatokat károsít, hanem megpróbálja újraírni a BIOS kódot. => használhatatlanná teszi a rendszert ameddig a BIOS chip nincs újraprogramozva vagy kicserélve
		- pl: Stuxnet => Uránium finomító gyár a célpont és a rendszert kódját módosítva, a berendezés meghibásodását eredményezi.
	- Logikai bomba: olyan büntető rutin, amely egy adott feltétel teljesülésével vagy valamely esemény bekövetekeztével "robban" -> aka hajtja végre a rutinját.
		- **indíték**: bizonyos fájlok megléte vagy hiánya, valamely dátum vagy a hét valamely napjának bekövetkezte, vagy egy szoftver verrzió konfigurálása, vagy valamely speciális felasználó belépése stb.
		- **"robbanás"**: adatok vagy teljes fájlok módosítása vagy törlése, rendszer leállása, illetve más károk okozása

- 2, Támadó ügynök
	- A támadó módosítja úgy a rendszert, hogy a támadó irányítása alá tudja venni, használhassa az erőforrásait
	- Ilyen módon megfertőzött gépek zombie gépeknek nevezzük -> ezek a zombie gépek összekötött, egymüttműködő hálózatát pedig botnet-nek nevezzük
	- => Ilyen módon a rendszer INTEGRITÁSA és RENDELKEZÉSRE ÁLLÁSA SÉRÜL
	- A támadó miután megszerezte ezeket a zombie-kat a következő tevékenységekre használhatja fel:
		- DDOS (Distributed denial-of-service) támadás (elosztott szolgáltatásmegtagadással járó támadás): A DDoS támadás számítógépes rendsazerekre vagy azok hálózatára irányul, azzal a céllal, hogy azok szolgáltatását teljesen vagy részlegesen megbénítse, eltérítse a helyes működés módjától.
		- spam-ek küldése: botnet - zombik ezrei - segítségével komoly mennyiségű kéretlen e-mailt lehet kiküldeni.
		- forgalomfigyelés: zombikat a hálózati forgalom megfigyelésére is használhatjuk. Figyelik a rajtuk átmenő ÉRDEKSE NYÍLT ÜZENETEKET. Érzékeny információk megszerzése a cél (pl. felhasználói nevek és jelszavak)
		- keylogging (billentyűzet megfigyelés): A fertőzött gépek figyelik a billentyűzet hasznlatát és kinyerik az érzékeny adatokat.
		- Kártékony programok (malware-ek) terjesztése: Botnetek alkalmasak új botok terjesztésére, melyek képesek valamely új fájl HTTP-n, FTP-n keresztül történő letöltésére, majd futtatására.
		- Adware (reklámok elhelyezése): botnet-ek alkalmasak pénzszerzésre is. A támadók a zombi gépekkel olyan oldalakat látogatnak meg, amelyek hirdetések szerepelnek. A cégek fizetnek a hirdetés megtekintéséért és rájuk való kattintásért.
			- Fejlett váltózat: a bot eltéríti a böngésző kezdőoldalát, így minden egyes alkalommal, ha böngészőt megnyitják, gyűjtik a látogatottságot, klikkeket.
		- Online szavazások, játékok manipulálása
		- Crypto bányászat

- 3, Információszerzés:
	- A kártékony programok, a fertőzött gépeken tárolt adatokat gyűjtik össze. ==> adatok BIZALMASSÁGÁT támadja.

Kategóriái:
- Hitelesítési adatok (credential) ellopása, billentyűzetfigyelés (keylogger), kémprogramok:
	- keylogger összegyűtji a a billentyűlenyomásokat, hogy a támadó érzékeny adatokat szerezzen be. => "ezek célja, hogy megszerezzék a hitelesítési adatok amikor a felhasználó beírja azokat"
	- arra válaszként a fejlesztők grafikus appletek hoztak létre (ezeken lehet grafikusan megadni a jelszót) ==> erre válaszul a támadók általánosabb kémprogram büntető rutint használatát vezették be:
		- böngésző előzmények figyelése, weboldalak eltérítése <- ezekkel képesek a grafikus appletekbe bevitt információt is megszerezni
- Adathalászat, Személyazonosság ellopása
	- a felhasználó adatainak megszerzésére irányuló másik megoldás, egy a támadó által kontrollált web oldalra mutató link elhelyezése egy kéretlen e-mailben
	- adathalászat: pszichológiai támadással kihasználják a felhasználók bizalmát úgy, hogy valamely megbízható felet személyesítenek meg.
- Felderítés, kémkedés:
	- A támadó bizonyos ("specfikis") típusú információt szeretne megtudni
	- pl Operation Aura: 2009: trójait használt, hogy hozzáférjen (esetlegesen módosítsa is) high tech és biztonság cégek forráskódját.
	- pl Stuxnet féreg 2010ben: összegyűjtött számos hardver és szoftver konfigurációs részletet, hogy meghatározza hogy tudná-e a célpontot támadni
	- => célzott adathalászat (spear-phishing attack):
		- leveket küldenek egy olyan cég/személy nevében, akiben megbíznak (a támadók tanulmányozzák a célpontokat és csak limit pl 5-10 embernek küldik el a az adathalász levelet). Nagyon testreszabott levelet készítenek, amely az érintett célpontok számár relevánsnak tűnhet. => támadó specifikusan azt a személyt vagy céget akarja támadni
		- ipari kémkedést végeznek vagy más felderítéseket végeznek.

- 4, Lopakodás
	- A kártékony programok azon rutinja, melyekkel elrejtik jelenlétüket és hozzáférésüket a fertőzött gépeken
	- => ez a rutin a renszer INTEGRITÁSÁT célozza.

Kategóriái:
- Hátsóajtó: Program titkos belépési pontja, ennek ismeretével tud a kártékony program átlépni a rendszer biztonsági hitelesítésén, ezzel hozzáférést kapva a renszerhez
	- Ezt a hátsóajtót lehet, hogy csak fejlesztők hagyták benne tesztelés miatt, de "nem megfelelően lett kezelve"...
- Gyökércsomag (Rootkit): egy programcsomag, mely installálása után fedett hozzáférést biztosít, tart fent a már fertőzött géphez adminisztrátori (ROOT) jogosultsággal. => hátsóajtó hozzáférést biztosítanak trójaiak számára (?). Az operációs rendszer valamennyi funkciójához és szolgáltatásához hozzáférést ad. A támadónak adminisztrátori jogosultsága van, vagyis teljes kontrollja van a rendszer felett. Felrakhat, módosíthat programokat. Fájlokat processzeket monitorozhat. ==> A gyökércsomag elrejti ezeket a mechanizmusokat.



A gyökércsomagokat összehasonlíthatjuk az alapján, hogy perzisztensek-e:
- PERZISZTENS: a gyökércsomag perzisztens helyen (pl registry) tárol kódot és a kódot a felhasználó részvétele nélkül futtatja le.
- MEMÓRIA ALAPÚ: nincs perzisztens kód, tehát újraindítást nem éli túl. Mivel csak a memóriában van, nehezebb detektálni.

Továbbá a gyökércsomagokat úgy is összehasonlíthatjuk, hogy milyen módban futnak:
- Felhasználói (user) módú: Felhasználói szinten működik az operációs rendszerben. Lehallgatja az API hívásokat és módosítja a kapott választ.
- Kernel módú rootkit: A gyökércsomag úgy rejti el jelenlétét, hogy módosítja a kernelt.
	- megj: a kernel az operációs rendszer magja, amely felelős a hardver erőforrásainak kezeléséért (beleértve a memóriát és a processzort is)
	- megj: első generációs rootkitek voltak a felhasználói módú rootkitek, de ezeket a változtatásokat detektálni lehetett kernel kódokkal.
	- ==> erre adnak megoldást a kernel szintű rootkitek TODO


Biztonsági intézkedések kártékony programok ellen:
- MEGELŐZÉS (PREVENCIÓ): vagyis ne engedjük, hogy a kártékony program a rendszerünkbe jusson. Ha bejutott blokkoljuk, hogy ne tudjon kárt tenni.
- A pszicológiai támadás megakadályozható: felhasználói felvilágosítással és oktatással.


többi biztonsági intézkedés 71. oldaltól

## Algoritmikus védelem eszközei:
## Titkosítás
[[titkosítások.pdf]]

Általában a titkosításról:
![[Pasted image 20250528102118.png]]
Itt a lényeg, hogy egy üzenetet Alice (a küldő) egy nyílt csatornán szeretné elküldni egy Bob számára, de ahhoz, hogy ezt az üzenetet csak Bob tudja elolvasni, és Eve (eavesdropper, vagyis lehallgató) ne tudja lehallgatni ezért titkosítjuk a nyílt üzenetet és titkosított üzenetként juttatjuk el az üzenet (Bob)

### Szimmetrikus titkosítás
A titkosító és a visszafejtő kulcsok, **megegyeznek** vagy a **visszafejtő a titkosítóból könnyen kiszámítható**, polinomiális időn belül.


Megj: egy algoritmus akkor fut polinomiális időn belül, ha n bemenetre a futási idő legfeljebb:
$$
O(n^k)
$$
ahol
$$
k\in \mathbb{N}
$$
Magyarul: létezik rá hatékony algoritmus, amely a bement méretének valamilyen hatványával arányos idő alatt megoldja a problémát. 

![[Pasted image 20250528102243.png]]
![[Pasted image 20250528102511.png]]
![[Pasted image 20250528102528.png]]

### Asszimmetrikus titkosítás
![[Pasted image 20250528102420.png]]
![[Pasted image 20250528102545.png]]
![[Pasted image 20250528102609.png]]

Asszimmetrikus és szimmetrikus titkosítási sémák összehasonlítása:
![[Pasted image 20250528102451.png]]

Itt esetleg meglehetne jegyezni, hogy a kulcsok kezelése:
- Szimmetrikus sémáknál: KULCSCSERE ALGORITMUSSAL megy (pl Diffie-Hellmann-kulcscsere) 
- Aszimmetrikus sémáknál: Nyilvános Kulcsú Infrastruktúra használával (PKI: public key infrastructure) 

## Digitális aláírás
[[ibiza_hash_aláírás.pdf]]
A digitális aláírás használatával képesek vagyunk például egy dokumentum hitelességét és letagadhatatlanságát biztosítani.
![[Pasted image 20250528105358.png]]
![[Pasted image 20250528112516.png]]

## Hash függvények
[[ibiza_hash_aláírás.pdf]]

Tetszőleges véges hosszú üzenethez egy n hosszú üzenetet rendelünk.

=> A hash függvény nem injektív függvény, vagyis matematikailag lehetséges, hogy ugyanarra a bemenetre ugyanazt a hash függvényt kapjuk (de erre nincsen polinomiális algoritmusunk). 

A hash függvények képes teljesíteni számunkra az adatintegritást (CIA-ból I), mivel egy adott adatok halmazról elkészített hash értéket elküldjük az adathalmazzal együtt, és az adathalmaz fogadója képes a hash függvény segítségével ellenőrzni, hogy a megkapott adathalmaz hash érték tényleg megegyezik-e azzal amit megkapott.

másnéven a hash értéket hívjhatjuk: LENYOMAT / FINGERPRINT

Lavina-hatás: 1 bit változás a hashfüggvény bemenetében NAGY változást eredményez a hash érték kimenetében. 

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
Szimmetrikus titkosítási séma, vagyis ugyanazzal a kulcssal történik a titkosítás és a visszafejtés is.

![[Pasted image 20250527220148.png]]
![[Pasted image 20250527220228.png]]

k a kulcshosszat jelöli, ami lehet 128, 192 vagy 256.

(megj: ezek alapján hívjuk az algoritmust AES-128-nak, AES-198-nek vagy AES-256-nak)

Ez a kulcs határozza meg egyben a titkosítás során használt körök számát is. (lásd fent)

Az információkat  16 byte-os (128 bites) blokkokra osztva tudjuk titkosítani ezen algoritmussal ==> ezen 16 byte információt feloszjtuk egy 4x4-es gridbe

A 4x4-es grid egy byte mátrixot határoz meg (amit másnéven state-nek is nevezünk)

Az AES titkosítási folyamata a következő módon néz ki:

![[Pasted image 20250527220412.png]]

Lépések kifejtve:
- initial round (előkészítés):
	- AddRoundKey: Bemeneti blokkot össze XOR-ozzuk a kezdő kulcsban szármatatott első körkulccsal.
- Fő körök (ábrán ez "9 rounds"-al van jelölve):
	- SubBytes: a "state"-ben (4x4-es grid) eltárolt byte-okat a behelyettesítési táblázat (un S-Box, substitution box) felhasználásval kicserél egy másik byte értékre 
	- ShiftRows:
		- második sor 1 byte-al rotálja balra
		- harmadik sort: 2 byte-al rotálja balra
		- negyedik (utolsó) sort: 3 byte-al rotálja balra
	- MixColumns
	- AddRoundKey
- Final Round (utolsó kör):
	- SubBytes
	- ShiftRows
	- AddRoundKey


AES visszafejtése: ugyanezeket a lépéseket hajtjuk végre fordított sorrendben, minden művelete INVERZÉT alkalmazva

### RSA titkosítás
Asszimmetrikus titkosítási séma, vagyis a titkosító és a visszafejtő kulcs nem kapható meg egymásból polinomiális időben
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

-> **RSA titkosítási séma által használt algoritmusok:**
![[Pasted image 20250527224847.png]]
![[Pasted image 20250527224906.png]]
A visszafejtő kulcs (SK) kiszámítása a titkosító kulcs (PK) ismeretében nehéz -> prímfaktorizáció

##### Digitális aláírás RSA-val:
![[Pasted image 20250601133526.png]]
Vagyis az aláírást úgy végezzük, hogy az aláírandó üzenetet d-edikre emelkül mod n => ez megadja az s-et

Az aláírás ellenőrzését az adott üzenethez pedig úgy végezzük, hogy az aláírást (s-et) e-edikre emeljük és megvizsgáljuk, hogy ez kongruense m-el (az aláírt üzenettel) mod n



Megj: kongruencia: 
![[Pasted image 20250601134946.png]]
Két szám akkor kongruensek ugyanaz a module szerint, ha a számokat elosztva a modulóval ugyanaz a maradékuk.