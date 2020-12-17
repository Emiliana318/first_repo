#include <iostream>
#include <string>


int main (void)
{
  int a=3;
  int b=3;

  std::cout <<"Voy a multiplicar dos numeros y dividirlos"<<std::endl;
  
  std::cout <<"Dame un numero"<<std::endl;

  std::cin >> a ;

   std::cout <<"Dame otro numero"<<std::endl;

   std::cin >> b ;

   std::cout <<"La multiplicación de "<<  a <<" y ";

   std::cout << b ;

   std::cout <<" es "<<a*b<<std::endl;

    std::cout <<"La division de "<<  a <<" y ";

   std::cout << b ;

   std::cout <<" es "<<a/b<<std::endl;


  return 0;

}
