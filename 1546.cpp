#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    float sum = 0, avg;
    cin>>N;
    int scores[N];
    for(int i=0; i<N; i++)
        cin>>scores[i]; 
    for(int i=0; i<N; i++)
        sum += scores[i] / float(*max_element(scores,scores+N))*100.0;
    avg = sum/float(N);
    cout<<avg;
    return 0; 
}