#include <iostream>
#include <chrono>
#include <ctime>

int main() {
   // Az aktuális időpont lekérdezése
   auto now = std::chrono::system_clock::now();
   std::time_t now_time = std::chrono::system_clock::to_time_t(now);

   // A dátum beolvasása
   std::tm tm = *std::localtime(&now_time);
   std::cout << "Add meg a dátumot (yyyy.mm.dd.): ";
   std::cin >> std::get_time(&tm, "%Y.%m.%d.");
   if (std::cin.fail()) {
      std::cout << "Hibás dátum formátum!\n";
      return 1;
   }
   auto tp = std::chrono::system_clock::from_time_t(std::mktime(&tm));

   // A dátum kiírása
   std::cout << "A beolvasott dátum: " << std::asctime(std::localtime(&now_time)) << std::endl;
   return 0;
}
