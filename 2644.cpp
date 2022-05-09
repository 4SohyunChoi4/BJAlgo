#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;

int answer=-1, start, target;
vector<int> family[101];
bool check[101];
int cnt[101];

void bfs(){
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int temp = q.front();
        if(temp == target){
            answer = cnt[temp];
            return;
        }
        q.pop();
        check[temp] = true;
        for(int i = 0 ; i < family[temp].size() ; i++){
            if(check[family[temp][i]] == false){
                check[family[temp][i]] = true;
                q.push(family[temp][i]);
                cnt[family[temp][i]] = cnt[temp] + 1;
                break;
            }
        }
    }
}
int main()
{
    int n, numberOfLoop;
    cin>>n;
    cin>>start>>target;
    cin>>numberOfLoop;
    
    memset(check, sizeof(check), false);
    memset(cnt, sizeof(cnt), 0);
    for(int i=0 ; i<numberOfLoop; i++){
        int u, v;
        cin>>u>>v;
        family[u].emplace_back(v);
        family[v].emplace_back(u);
    }
    
    bfs();
    cout<<answer;
    return 0;
}


