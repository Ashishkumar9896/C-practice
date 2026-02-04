#include <iostream>
using namespace std; 
int main(){
    char grade ='A';

    int value = grade;
    cout <<value << endl; //conversion or implict
    double price = 100.99;
    int newprice = (int)price;// casting or explicit
    cout << newprice ;                                    
    return 0;
 }              