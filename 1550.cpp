#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
int main()
{
    vector<char> hex = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string n;
    int sum=0;
    int length;
    int index;
    vector<int>::iterator it;
    
    cin>>n;
    length = n.length();
    
    for(int i=0; i<length;i++){
        index = find(hex.begin(), hex.end(), n[i]) - hex.begin();
        //cout<<index<<endl;
        sum += index*pow(16,length-i-1);
    }
    
    cout<<sum;
}
