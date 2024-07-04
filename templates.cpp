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
    Custom("tefa");
    
std::cout << sub("Ahmed" ,"Tefa")<<std::endl;   
return 0;
}