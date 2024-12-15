#include <iostream>
#include <set>

int main() {
  std::multiset<int> my_multiset;
  
  my_multiset.insert(10);
  my_multiset.insert(20);
  my_multiset.insert(30);
  my_multiset.insert(20);
  
  std::cout << "Multiset contains " << my_multiset.size() << " elements:\n";
  for (auto it = my_multiset.begin(); it != my_multiset.end(); ++it) {
    std::cout << *it << " ";
  }
  
  return 0;
}
