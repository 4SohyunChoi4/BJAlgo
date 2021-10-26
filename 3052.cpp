#include <iostream>
using namespace std;
int main(){
    int B = 42, sum=0;
    int A, arr[B]={0};
    
    int i=0;
    while(i<10) {
        cin>>A;
        arr[A%B]+=1;
        
        i++;
    }

    for(int i=0 ; i < B ; i++){
        if(arr[i]>0)
            sum+=1;
    }

    cout<<sum;
    return 0;
}