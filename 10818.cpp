#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];//개의 서로 다른 자연수
    for(int i=0;i<N;i++)
        cin>>arr[i];
    cout<<*min_element(arr, arr+N)<<" "<<*max_element(arr, arr+N);
}