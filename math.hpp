#ifndef _MATH_HPP_
#define _MATH_HPP_
#include <type_traits>
#include<iostream>

int sum ()
{
    return 0;
}
template <typename T>
T sum (const T &a)
{
    static_assert(std::is_arithmetic_v<T>,"must be arithmetic");
    return a;
}
template <typename T, typename U,typename ...TS>
auto sum (const T &a,const U &b,const TS & ... values)
{

    static_assert(std::is_arithmetic_v<T> && std::is_arithmetic_v<U> ,"must be arithmetic" );
    if constexpr(sizeof ...(TS) > 0)
    
    {
    auto r=a+b;
    return sum(r,values ...);
    }
else 
{
    return a+b;
}
}
template <>
auto sum <std::string,std::string> (const std::string &a,const std::string &b)
{
return a.length()+b.length();
}


int sub ()
{
    return 0;
}
template <typename T>
T sub (const T &a)
{
    static_assert(std::is_arithmetic_v<T>,"must be arithmetic");
    return a;
}
template <typename T, typename U,typename ...TS>

auto sub (const T &a,const U &b,const TS & ... values)
{
 //static_assert(std::is_arithmetic_v<T> && std::is_arithmetic_v<U> ,"must be arithmetic" );
    if constexpr(sizeof ...(TS) > 0)
    
    {
    auto r=a-b;
    return sub(r,values ...);
    }
else 
{
    return a-b;
}

}
auto operator-(const std::string &a , const std::string &b){
   return a.length()-b.length();

}

int max ()
{ return 0;}
template <typename T>
auto max (const T &a)
{
    static_assert(std::is_arithmetic_v<T>,"must be arithmetic");
    return a;
}
template <typename T,typename U ,typename ...TS>
auto max (const T & a,const  U & b,const TS & ... values)
{

    static_assert(std::is_arithmetic_v<T> && std::is_arithmetic_v<U> ,"must be arithmetic" );
if constexpr (sizeof ...(TS) > 0)
{
    if(a>b) {
             return max (a,values ...);
            }
else 
{
return  max(b,values ...);

}

}
else 
{

static_assert(std::is_arithmetic_v<T> && std::is_arithmetic_v<U> ,"must be arithmetic" );
    if(a>b)
     return a;       
    else 
    return b;

} 
}


int min ()
{ return 0;}
template <typename T>
auto min (const T &a)
{
    static_assert(std::is_arithmetic_v<T>,"must be arithmetic");
    return a;
}
template <typename T,typename U ,typename ...TS>
auto min (const T & a,const  U & b,const TS & ... values)
{


    static_assert(std::is_arithmetic_v<T> && std::is_arithmetic_v<U> ,"must be arithmetic" );
if constexpr (sizeof ...(TS) > 0)
{
    if(a<b) {
            return min (a,values ...);
            }
else 
{
return max(b,values ...);
}

}
else 
{

    static_assert(std::is_arithmetic_v<T> && std::is_arithmetic_v<U> ,"must be arithmetic" );
if(a<b)
return a;       
else 
return b;

} 
}

#endif