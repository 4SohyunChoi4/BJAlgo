#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 999999
int main()
{
    int N;

    cin>>N; //3 ≤ N ≤ 5000
    //int sugar[N+1] = {0};
    vector<int> sugar(N+1, MAX);
    sugar[3] = 1;
    if(N>=5)
        sugar[5]=1;
        
    for(int i= 6; i<=N; i++){
        sugar[i] = min(sugar[i-5]+1, sugar[i-3]+1);
    }
    if(sugar[N]>=MAX)
        cout<<-1;
    else
        cout<<sugar[N];
    return 0;
}