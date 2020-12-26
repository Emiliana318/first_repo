#include<iostream>

int main (void)

{
  int x=6;
  bool primo=true;

  for(int i=2;i<x;i++)
    {
      if (x%i==0)
	{
	  primo=false;
	  break;
	}
    }
  if(primo)
    {
      std::cout <<"El numero es primo "<< std::endl;
    }
  else
    {
      std::cout <<"El numero no es primo "<< std::endl;
    }


    

  return 0;
}
