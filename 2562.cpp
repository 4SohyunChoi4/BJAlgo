#include <iostream>
#define NUM 9
using namespace std;
void sort(int arr[NUM]){
    int max=arr[0];
    int num=0;
    for(int i=1;i<NUM;i++)
        if(max<arr[i]){
            max=arr[i];
            num=i;
        }
    cout<<max<<endl<<num+1;
}

int main(){
    int arr[NUM]; // 9개의 서로 다른 자연수
    for(int i=0;i<NUM;i++)
        cin>>arr[i];
    sort(arr);
}