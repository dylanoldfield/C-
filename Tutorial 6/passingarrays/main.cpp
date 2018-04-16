#include <array>
#include <vector>
#include <iostream>

// pass by vector allows for dynamic sized to be passed into function
int sum(std::vector<int> a) {
  int result=0;
  for(int i=0;i<a.size();i++){
    result+=a[i];
  }
  return result;
}
int main()
{  std::vector <int> a={1,2,3,4};
   std::cout << sum(a) << std::endl;
}
