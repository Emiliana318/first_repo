#include<iostream>

int main(void)
{
  
  long int suma=0;
  int b=3, j=1;
  
  std::cout <<"Voy a sumar los numeros del 1 al " ;
  
  std::cin >> b ;
  
  for(int i=1; i<=b; i++)
    {
      suma+=i;
    }
  
  std::cout <<"la suma de los "<<b<<" primeros numeros con un for es "<<suma << std::endl;
  suma=0;
  while(j<=b)
    {
      suma+=j;
      j++;
      
    }
  
  std::cout <<"la suma de los "<<b<<" primeros numeros con un while es "<<suma << std::endl;
  
  
  suma=b*(b+1)/2;
  
  std::cout <<"la suma de los "<<b<<" primeros numeros con la formula es "<<suma << std::endl;
  
  
  return 0;
}

