#include <iostream>

using namespace std;

int main()
{
    int T, cnt=0;
    cin>>T;
    while(cnt<T){
        int C;
        int quarter=25, dime=10, nickel=5, penny=1;
        int quarter_cnt=0, dime_cnt=0, nickel_cnt=0, penny_cnt=0;
        
        cin>>C;
        while(C>=quarter){
            C-=quarter;
            quarter_cnt++;
        }
        while(C>=dime){
            C-=dime;
            dime_cnt++;
        }
        while(C>=nickel){
            C-=nickel;
            nickel_cnt++;
        }
        while(C>=penny){
            C-=penny;
            penny_cnt++;
        }
        cout<<quarter_cnt<<" "<<dime_cnt<<" "<<nickel_cnt<<" "<<penny_cnt<<endl;
        
    cnt++;   
    }
    return 0;
}