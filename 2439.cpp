#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=0 ; i<N ; i++){
        for(int j=N-i-1 ; j>0; j --){
        printf(" ");
        }
            for(int k=0; k<=i ; k++){
        printf("*");
    }
        printf("\n");
    }
   return 0;
}