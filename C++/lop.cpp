//logical operator 
#include  <iostream>
using namespace std ;
int main() {
   
    
      cout  << !(3<5) <<endl; //it will give false as ans because we are asking whethcouter 3 is not smaller than 5 
      cout  << ((3<1)|| (3<5) )<<endl; // or opertor it will check both statement and then give the output if any of the statement has true condition and other has falsre it will only return true
      cout  << ((3<1) && (3<5))<<endl;// as 1 statement is false it will give false as ans IT IS OPPOSITE OF OR 
      return 0;

}