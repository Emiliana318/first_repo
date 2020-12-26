#include<iostream>

bool isprime(long long int x);
int mayorprimo(long long int x);

int main (void)
{
  long long int x=600851475143;

  std::cout<<mayorprimo(x)<<std::endl;

  return 0;
}

bool isprime(long long int x) // dice si un numero es primo
{
for(long long int i=2;i<x;i++)
    {
      if (x%i==0)
	{
	  return false;
	  break;
	}
    }
 return true;
}
int mayorprimo(long long int x)
{
  long int factor=0;

  for(long long int i=1; i<=x; i++ )
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
