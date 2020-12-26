#include<iostream>
#include<vector>

int main (void)
{
  //double array[5]={1,2,3,4,5};
  std::vector<double> array={1,2,3,4,5};


  for(auto i:array)
    std::cout<<i<<std::endl;

  return 0;
}
