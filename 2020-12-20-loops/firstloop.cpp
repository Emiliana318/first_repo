#include<iostream>

int main(void)
{

  int Npasos=10;
  int j=1;
  
  for(int i=1; i<=Npasos; i++)
    {
      std::cout<<"hola mundo "<< i<<std::endl; 
    }

  std::cout <<"from do while loop"<<std::endl;
  while (j<=Npasos)
    {
      std::cout<<"hola mundo "<< j<<std::endl;
      j++;
    }
  
  return 0;
}
