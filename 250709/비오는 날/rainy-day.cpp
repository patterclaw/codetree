#include <iostream>
#include <string>

using namespace std;

int n;
class Weather{
    public:
    string date;
    string day;
    string weather;
    Weather(string date,string day,string weather){
        this->date=date;
        this->day=day;
        this->weather=weather;
    }
    Weather(){}
};

int main() {
    int n;
    cin >> n;
    Weather w[n];
    string date,day,weather;
    for (int i = 0; i < n; i++) {
        cin >> date>>day>>weather;
        w[i]=Weather(date,day,weather);
    }  
    Weather rainy[n];
    int cnt=0;
    for (int i = 0; i < n; i++) {
        if(w[i].weather=="Rain")
        rainy[cnt++]=w[i];
    }  
    int start=0;
    for(int i=1;i<cnt;i++){
        if(rainy[i].date<rainy[start].date)
        start=i;
    }
    cout << rainy[start].date << " " <<rainy[start].day << " "<<rainy[start].weather;
    // Please write your code here.

    return 0;
}