// to know wheather he can vote or not
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl ;
    cin>>age;

    if (age >=18){
        cout <<"eligible\n";

    }else {
        cout<<"cant give vote";
    }
    return 0;
}