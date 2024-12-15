#include <iostream>
#include <deque>

int main() {
    std::deque<int> d;
    
    // Elemek hozzáadása a végéhez
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    
    // Elemek hozzáadása az elejéhez
    d.push_front(2);
    d.push_front(1);
    
    // Elemek eltávolítása a végéről
    d.pop_back();
    
    // Elemek eltávolítása az elejéről
    d.pop_front();
    
    // Végigiterálás a deque-n
    for (auto it = d.begin(); it != d.end(); ++it) {
        std::cout << *it << " ";
    }
    
    return 0;
}
