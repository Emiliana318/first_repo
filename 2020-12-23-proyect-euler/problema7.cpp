#include<iostream> //primo numero 10001

bool primo(int x);


int main (void)
{
  int j=0;
  int contador=0;
  
  
  while(contador != 100001)
    {   
      if(primo(j))
    {
      contador+=1;
    }
  j+=1;
    }
  
    std::cout<<j;
  
  return 0;
}


bool primo(int x) 
{
  for(int i=2;i<x;i++)
    {
      if (x%i==0)
	{
	  return false;
	  break;
	}
    }
  return true;
}




  
