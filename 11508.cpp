#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, temp, sum=0;
    cin>>N;
    
    vector<int> milk;
    //n개수만큼 받아서 sort (혹은 set쓰자)
    //그래서 %3제외하고 다 합친다
    for(int i=0 ; i<N; i++)
    {
        cin>>temp;
        milk.push_back(temp);
    }
    sort(milk.begin(), milk.end(), greater<int>());
    for(int i=0 ; i<N; i++)
    {
        if ((i+1)%3!=0) sum+=milk[i];
    }

    cout<<sum;
    return 0;
}