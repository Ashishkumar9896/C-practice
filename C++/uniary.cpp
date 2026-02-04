//unary operator
#include <iostream> 
using namespace std;
int main(){
    int a = 10 ;
   // int b= a++;

   // cout <<"B"<<b<<endl;
    //cout << "a "<<a<<endl;//b = 10 a = 11
    int b= ++a;
     cout <<"B"<<b<<endl;
    cout << "a "<<a<<endl; // b=11 a =11
    //int b =a--;
    // a-- will give a=9 b =10 while --a will give a =9 b =9 
    return 0;
}
  