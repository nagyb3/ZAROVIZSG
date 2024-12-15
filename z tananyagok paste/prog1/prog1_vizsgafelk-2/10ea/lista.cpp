#include <iostream>
#include <list>

int main() {
  std::list<int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);

  for (auto it = l.begin(); it != l.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  return 0;
}
