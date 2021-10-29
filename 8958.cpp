#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N, j=0;
    cin>>N;
    while(j<N){
        int sum=0, cnt=0;
        string str;
        cin>>str;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='X'){
                cnt=0;
                continue;
            }
            cnt++;
            sum+=cnt;
            //cout<<sum<<" ";
        }
        cout<<sum<<endl;
        j++;
    }
    return 0; 
}