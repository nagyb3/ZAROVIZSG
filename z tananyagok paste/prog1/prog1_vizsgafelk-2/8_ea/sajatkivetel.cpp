#include <iostream>
#include <exception>

class MyException : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "Ez az én saját kivételem!";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (std::exception& e)
    {
        std::cout << "Kivétel keletkezett: " << e.what() << std::endl;
    }

    return 0;
}
