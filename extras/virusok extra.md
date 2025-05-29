
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
- MACROVÍRUSOK: elsősorban makrókat támogató dokumentum szerkesztő programokat támadnak meg (word, excel), általuk készített dokumentumokkal terjednek. => Terjedésükhöz elegendő egy fertőzött állomány megnyitása
	- ide sorolhatóak a levelező vírusok is
- ÖSSZETETT VÍRUSOK: többféle módon, többféle állományt képesek megfertőzni (?)

##### Vírusok csoportosítási rejtezkedési stratégiájuk szerint:
- Titkosított vírus: titkosítással rejti el tartalmát. Az egyik vírusrész egy véletlen titkosító kulcsot generál és titkosítja a vírust.
- Lopakodó vírus: antivirus programot és az operációs rendszert megkerülve a gép memóriájába maradva, a fájl méreteit, az operációs rendszer jellemzőit és a könyvtár struktúráját megváltoztatják.