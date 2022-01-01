#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, input, max;
    cin>>n;
    vector<int> vector;
    
    for(int i=0 ; i<n; i++){
        cin>>input;
        vector.push_back(input);
    }
    
    max=vector[0];
    
    for(int i=1 ; i<n; i++){
        if(vector[i-1]>0 && vector[i]+vector[i-1]>0 )
            vector[i]+=vector[i-1];
        if(max < vector[i])
            max = vector[i];
    }
    cout<<max;
 
 return 0;
}
