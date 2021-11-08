#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() { //에라토스테네스의 체
    int sum = 0, min;
    int N, M;
    
    cin>>M>>N;
    min = N;
    bool* PrimeArray = new bool[N+1]; //2부터 ~ n-1까지 저장하는 배열 할당

    
    for( int i = 2 ; i <= N ; i++){ 
       PrimeArray[i] = true; //일단 전부다 소수라고 가정
    }

     for( int i = 2 ; i*i <= N ; i++){ 
       if (PrimeArray[i]) //prime값 i의 배수에 대해 false값을 준다
           for( int j = i*i ; j <=N ; j +=i)
               PrimeArray[j] = false;
    }
    for( int i = M ; i <= N ; i++){ 
       if( PrimeArray[i] ){
           sum+=i;
           min=i;
           break;
       }
    }

    for( int i = min+1 ; i <= N ; i++){ 
       if( PrimeArray[i] ){
           sum+=i;
       }
    }
    
    if(sum==0) cout<<-1;
    else{
        cout<<sum<<endl;
        cout<<min;
    }
    return 0;
}