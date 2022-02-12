#include <stdio.h>

using namespace std;
/*
int fibonacci(int n){
    if ( n==0){
        cnt_0++;
        return 0;
    }
    else if (n==1){
        cnt_1++;
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}*/
int fibonacci(int n){

    
}
int main()
{
    int MAX=41;
    long long fib[MAX][2];
    
    fib[0][0]=1;
    fib[0][1]=0;
    
    fib[1][0]=0;
    fib[1][1]=1;

    
    for(int i=2 ; i<MAX; i++){
        fib[i][0]= fib[i-1][0] + fib[i-2][0];
        fib[i][1]= fib[i-1][1] + fib[i-2][1];
    }
    
    int T;
    scanf("%d",&T);
    while(T--){
        int input;
        scanf("%d",&input);
        printf("%d %d\n",fib[input][0], fib[input][1]);
        
    }
    return 0;
}