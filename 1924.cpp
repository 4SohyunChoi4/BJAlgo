#include <iostream>
#include <string>
using namespace std;
int main()
{
    string day[7]= { "SUN" , "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    int month[12] = { 31, 28, 31, 30,31, 30, 31, 31, 30,31, 30,31};
    int m, date, i=1, sum = 0;
    cin>>m>>date;
    while(i<m){
        sum+=month[i-1];
        i++;
    }
    sum+=date;
    
    cout<<day[sum%7];
    
    return 0;
}