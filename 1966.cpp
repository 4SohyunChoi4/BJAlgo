#include <iostream>
#include <string>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        queue<pair<int,int>> q;
        priority_queue<int> pq;
        //vector<int> v;
        int k, m;
        cin>>k>>m;
        for(int i=0; i<k ; i++){
            int priority;
            cin>>priority;
            q.push(make_pair(i,priority));// 각각 원래순서(0부터~), 중요도 순서(큰 순서)
            pq.push(priority);
        }

        while(!q.empty()){
            while(q.front().second != pq.top()){
                if(q.front().second < pq.top()){
                    q.push(q.front());
                    q.pop();
                }
            }
            if(q.front().first==m){
                cout<<k-q.size()+1<<endl;
                break;
            }
            q.pop();
            pq.pop();
        }

    }
}
