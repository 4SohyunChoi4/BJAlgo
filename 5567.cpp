#include <iostream>
#include <vector>
#include <stack>
#include <memory.h>
using namespace std;

void dfs(int start,     vector<int> friends[],    bool visited[], int depth){ //1에서 depth가 2일때까지
    if(depth == 2)
        return;
    else{
        for(int i=0; i<friends[start].size();i++){
            int next = friends[start][i];
            //if(visited[next]==false)
            //{
                //cout<<next<<" ";
                visited[next]=true;
                dfs(next, friends, visited, depth+1);
            //}
        }
    }
}
/*    stack<int> s;
    s.push(start);
    visited[start]=true;
    cout<<start<<" ";
    int depth=0;

    while(!s.empty()){
        if(depth == 2){
            break;
        }
        int current = s.top();
        s.pop();
        for(int i=0; i<friends[current].size(); i++){
            int next = friends[current][i];
            if(visited[next] == false) {
                cout<<next<<" ";
                visited[next] = true;
                s.push(current);
                depth++;
                s.push(next);
                break;
            }            
        }

    }
}*/
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; // 동기의 수, 리스트의 길이
    
    cin>>n>>m;
    vector<int> friends[n+1];
    bool visited[n+1];
    memset(visited, false, sizeof(bool)*n+1);

    while(m--){
        int u, v;
        cin>>u>>v;
        friends[u].emplace_back(v);
        friends[v].emplace_back(u);
    }
    //for(int i=0; i<friends[1].size();i++) 
    //{
    visited[1]=true;
    dfs(1, friends, visited, 0);
   // }
    
    int answer=0;
    for(int i=2; i<n+1; i++){
        if(visited[i]==true) answer++;
    }
    cout<<answer;

    return 0;
}

