#include <iostream>
#include <string>


int main (void)
{
  int a=3;
  int b=3;

  std::cout <<"Voy a sumar dos numeros y restarlos"<<std::endl;
  
  std::cout <<"Dame un numero"<<std::endl;

  std::cin >> a ;

   std::cout <<"Dame otro numero"<<std::endl;

   std::cin >> b ;

   std::cout <<"La suma de "<<  a <<" y ";

   std::cout << b ;

   std::cout <<" es "<<a+b<<std::endl;

    std::cout <<"La resta de "<<  a <<" y ";

   std::cout << b ;

   std::cout <<" es "<<a-b<<std::endl;


  return 0;

}
