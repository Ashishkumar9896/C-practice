//for grades
#include <iostream>
using namespace std ;
int main(){
    int n;
    cout <<"enter marks\n";
    cin>> n;
    if (n>=90){
        cout<<'A';
    }else if (n>=80 && n<90){
        cout<<'B';
    }else {
        cout<<'C';
    }
}