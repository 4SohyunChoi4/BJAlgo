#include <vector>
#include <memory.h>
#include <stack>
#include <iostream>
using namespace std;

vector<int> computers[101];
bool check[101];
int cnt=0;

void dfs(int start) {
    stack <int> st;
    st.push(start);
    check[start]=true;
    while(!st.empty()) {
        int temp = st.top();
        st.pop();
        for(int i=0; i<computers[temp].size(); i++){
            if(check[computers[temp][i]]== false){
                st.push(computers[temp][i]);
                check[computers[temp][i]] = true;
                cnt++;
            }
        }
    }

}

int main(){
    int numberOfPC;
    int numberOfPairs;
    cin>>numberOfPC>>numberOfPairs;

    memset(check, sizeof(check), false);
    for(int i=0 ; i < numberOfPairs ; i++) {
        int u, v ;
        cin>>u>>v ;
        computers[u].push_back(v);
        computers[v].push_back(u);
    }
    dfs(1);
    cout<<cnt;
    return 0;
}