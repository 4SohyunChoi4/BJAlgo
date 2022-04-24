#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n, temp;
    vector<int> glass;
    cin>>n;
    int dp[n]={0};
    
    for(int i=0 ; i<n; i++){
        cin>>temp;
        glass.emplace_back(temp);
    }
    
    dp[0]=glass[0];
    dp[1]=max(glass[1], glass[0]+glass[1]);
    dp[2]=max(glass[1]+glass[2], glass[0]+glass[2]);
    
    for(int i=3; i<n ; i++){
        for(int j=0; i-j-3>=0; j++){
            int sub_max = max(glass[i]+glass[i-1]+dp[i-j-3] , glass[i]+dp[i-j-2]);
            if( dp[i]<sub_max )  dp[i]=sub_max; // dp가 i-3 이하로
        }
    }
    
    cout<<*max_element(dp, dp+n);
    return 0;
}