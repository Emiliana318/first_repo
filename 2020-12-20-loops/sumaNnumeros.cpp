#include<iostream>

int main(void)
{

  int Npasos=100000;
  long int suma=0;
  
  for(int i=1; i<=Npasos; i++)
    {
      suma+=i;
    }

  std::cout <<"la suma de los "<<Npasos<<" primeros numeros es "<<suma << std::endl;
 
  
  return 0;
}
