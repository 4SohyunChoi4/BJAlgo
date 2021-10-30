#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
    int C;
    cin>>C;
    for(int i=0 ; i<C; i++){
        int N;
        double avg, cnt=0.0, sum=0;
        cin>>N;
        int arr[N];    
        for(int j=0; j<N; j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        avg = sum/N;
        //cout<<"AVg : "<<avg<<endl;
        for(int j=0; j<N; j++){
            if(avg<arr[j])
                cnt+=1;
        }
        printf("%.3f%\n",cnt/N*100);
        //cout<<round(cnt/N*100)<<"%"<<endl;
    }
    return 0; 
}