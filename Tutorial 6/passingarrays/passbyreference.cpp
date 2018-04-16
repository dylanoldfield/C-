#include <array>
#include <vector>
#include <iostream>

////setting the reference to 5 prevents an arbitrary sized array to be passed in
//int sum(int (&a)[5]) {
//  int result=0;
//  for(int i=0;i<5;i++){
//    result+=a[i];
//  }
//  return result;
//}
//int main()
//{   int a[4]={1,2,3,4};
//   std::cout << sum(a) << std::endl;
//}
