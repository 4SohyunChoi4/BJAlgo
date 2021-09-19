#include <iostream>
using namespace std;
int bin(int n, int k){
    int binArray[n+1]={0};
    int i=1;
    if(k>n/2)
        k=n-k;
    binArray[0]=1;
    while(i<=n){
        for(int j=i ; j>0 ; j--){
            binArray[j]=binArray[j]+binArray[j-1];
        }
        i++;
    }
    return binArray[k];
    
}

int main()
{
    int N, K;
    cin>>N>>K;
    cout<< bin(N, K);
    return 0;
}
