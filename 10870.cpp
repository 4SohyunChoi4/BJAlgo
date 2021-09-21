#include <iostream>
using namespace std;
long fib(long n){
    long fibArray[n+1]= {0};
    fibArray[0]=0;
    fibArray[1]=1;
    if(n>=2){
        for(int i=2 ; i<=n ; i++)
            fibArray[i] = fibArray[i-1] + fibArray[i-2];
    }
    //for(int i=0 ; i<=n ; i++)
    //    cout<<fibArray[i]<<endl;
    return fibArray[n];
}
int main()
{
    int n;
    cin>>n;
    cout<< fib(n);
    return 0;
}
