#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second){
        return a.first < b.first;
    }
    else
        return a.second < b.second;
}

int solution(vector <pair<int,int>> meeting, int N){
    int max = 1;
        int start=meeting[0].second;
        int cnt=1;
        for(int k=1 ; k<N; k++)
        {
            if (meeting[k].first >= start)
            {
                start = meeting[k].second;
                cnt++;
            }
        }  
        if( cnt > max)
            max = cnt;
    return max;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int N, temp1, temp2;
    int max, max1, max2;
    cin>>N;
    
    vector <pair<int,int>> meeting;
    
    for(int i=0 ; i<N; i++)
    {
        cin>>temp1>>temp2;
        meeting.push_back({temp1, temp2});
    }
    
    sort(meeting.begin(), meeting.end(),cmp);      
    max = solution(meeting, N);

    cout<<max;
    return 0;
}