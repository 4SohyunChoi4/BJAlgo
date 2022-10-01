#include <iostream>
#include <vector>
#include <stack>
#include <memory.h>
#include <algorithm>
using namespace std;

int answer=-1, start, target;
vector<int> family[101];
bool check[101];
int cnt[101];

void dfs(){
    stack<int> st;
    st.push(start);
    while(!st.empty()){
        int temp = st.top();
        check[temp] = true;
        st.pop();
        if( temp == target){
            //cout<<cnt[temp]<<endl;
            answer=cnt[temp];
            return;
        }
        for(int i=0; i<family[temp].size(); i++){ 
            if(check[family[temp][i]] == false){
                check[family[temp][i]] = true;
                st.push(family[temp][i]);
                cnt[family[temp][i]] = cnt[temp] + 1;
                //cout<<"family[temp][i] : "<<family[temp][i]<<endl;
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
    //.resize()
    for(int i=0 ; i<numberOfLoop; i++){
        int u, v;
        cin>>u>>v;
        family[u].emplace_back(v);
        family[v].emplace_back(u);
    }
    //sort()
    dfs();
    cout<<answer;
    return 0;
}