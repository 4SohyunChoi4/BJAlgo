#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
    int N, input; //동전의 수, 그때그때 받는 양면동전
    int R1_sum=0, R2_sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&input);
        if(input<0)
            input=-input;
        R1_sum+=(input);
    }
    for(int i=0;i<N;i++){
        scanf("%d",&input);
        if(input<0)
            input=-input;
        R2_sum+=abs(input);
    }
    
    cout<<R1_sum+R2_sum;
}