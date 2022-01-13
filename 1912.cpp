#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int temp, max;
    int n;
    vector<int> dp;
    
    cin>>n;
    
    for(int i=0; i<n ; i++){
        cin>>temp;
        dp.push_back(temp);
    }
    max=dp[0];

    for(int i=1; i<n; i++){
        if(dp[i-1]+dp[i]>dp[i])
            dp[i]=dp[i-1]+dp[i];
        if(max<dp[i])
            max=dp[i];
    }
    cout<<max;
    return 0;
}