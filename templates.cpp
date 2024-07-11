#include<iostream>
#include "math.hpp"
#include <string>
class Custom {
public:
    Custom(std::string b) : m_b{b} {}
private:
    std::string m_b;
};
int main ()
{
    Custom("Ahmed");
    Custom("Mostafa");
    
std::cout << sub("Ahmed" ,"Mostafa")<<std::endl;   
return 0;
}
