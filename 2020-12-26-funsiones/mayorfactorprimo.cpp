#include<iostream>

bool isprime(int x);
int mayorprimo(int x);

int main (void)
{
  int x=0;

  std::cout<<mayorprimo(x)<<std::endl;

  return 0;
}

bool isprime(int x) // dice si un numero es primo
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
int mayorprimo(int x)
{
  int factor=0;

  for(int i=1; i<=100; i++ )
    {
      if (isprime(i))
	{
	  if(x%i==0)
	    {
	      factor=i;
	    }
	}
    }

  return factor;
  }
