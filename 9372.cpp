#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test;

    cin>>test;
    while(test--) { 

        int n, m;
        cin>>n>>m;
        vector<int> graph[n+1];
        for(int i=0; i<m; i++){
            int u, v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        cout<<n-1<<endl;
    }

    return 0;
}
