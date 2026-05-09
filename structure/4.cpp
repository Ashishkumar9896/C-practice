#include <iostream>
using namespace std;
union WeatherData{
    float temp;
};
int main(){
   union WeatherData weather;
   cin>>weather.temp; 
   cout<<"Temperature: "<<weather.temp<<"°C"<<endl;
   if (weather.temp>30){
    cout<<"It's a hot day!"<<endl;
   }
   else{
    cout<<"It's a cold day!"<<endl;
   }
   return 0;
}