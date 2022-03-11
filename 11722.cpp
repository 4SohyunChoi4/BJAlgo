#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N, temp;
    vector<int> vec;
    vector<int> dp(N,1);
    cin>>N;
    
    for(int i=0 ; i<N; i++){
        cin>>temp;
        vec.emplace_back(temp);
    }
    
    for(int i=1 ; i<N; i++){
        for(int j=0 ; j<i; j++){
            if(vec[j]>vec[i] && dp[i]<dp[j]+1)
                dp[i]+=1;
        }
    }
    cout<<*max_element(dp.begin(), dp.end());
    return 0;
}