#include <array>
#include <vector>
#include <iostream>

// passing by array checks invalid size
int sum(std::array<int,5> a) {
  int result=0;
  for(int i=0;i<a.size();i++){
    result+=a[i];
  }
  return result;
}
int main()
{  std::array <int,4> a={1,2,3,4};
   std::cout << sum(a) << std::endl;
}
