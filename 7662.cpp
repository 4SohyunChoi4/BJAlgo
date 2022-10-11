#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        priority_queue<int, vector<int>, greater<int>> min_q; //낮은 순으로(오름차순)
        priority_queue<int, vector<int>, less<int>> max_q;
        map<int, int> m;
        int num;

        int k, cnt = 0;
        cin>>k;
        while(k--){
            char op;
            cin>>op>>num;
            if(op=='I'){
                min_q.push(num);
                max_q.push(num);
                cnt++;
                if(m[num] == 0) m[num] = 1;
                else m[num]++;
            }
            else if(cnt > 0){ // D가 들어왔을 때
                int tmp;
                if(num == -1) { //최솟값 빼기
                    while(m[min_q.top()] == 0) min_q.pop();
                    tmp = min_q.top();
                    min_q.pop();
                }
                else{
                    while(m[max_q.top()] == 0) max_q.pop();
                    tmp = max_q.top();
                    max_q.pop();
                }
                cnt--;
                m[tmp]--;
            }
            /*if(cnt == 0)
            {
                while(!min_q.empty()) min_q.pop();
                while(!max_q.empty()) max_q.pop();
            }*/
        }   
        if(cnt == 0){
            cout<<"EMPTY"<<endl;
        }
        else{
            while(m[max_q.top()] == 0) max_q.pop();
            while(m[min_q.top()] == 0) min_q.pop();
            
            cout<<max_q.top()<<" "<<min_q.top()<<endl;
        }
        
        
    }
    
    return 0;
}
