#include<iostream>
using std::cout;
using std::endl;
int main()
{
   #ifdef __cplusplus
   cout << "C++ compiler in use and version is " << __cplusplus << endl;
   #endif
   cout << "Hi" << __FILE__ << __LINE__ << endl;
}
