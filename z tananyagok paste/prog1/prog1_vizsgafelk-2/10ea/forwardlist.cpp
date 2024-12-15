#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 1, 2, 3, 4, 5 };
    
    mylist.push_front(0); // az elem hozzáadása az elejéhez
    
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << *it << " ";
        
    return 0;
}
