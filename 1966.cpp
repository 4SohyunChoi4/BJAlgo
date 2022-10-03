#include <iostream>
#include <string>
#include <queue>
#include <deque>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        deque<queue<int>> dq;
        //vector<int> v;
        int k, m;
        cin>>k>>m;
        for(int i=0; i<k ; i++){
            queue<int> sub_q;
            int priority;
            cin>>priority;
            sub_q.push(i);
            sub_q.push(priority);
            dq.push_back(sub_q);// 각각 원래순서(0부터~), 중요도 순서(큰 순서)
        }

        //나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있다면, 
        //이 문서를 인쇄하지 않고 Queue의 가장 뒤에 재배치 한다. 
        //그렇지 않다면 바로 인쇄를 한다.
        while(!dq.empty()){    
            for(int i=1; i<dq.size() ; i++){
                if(dq[0].back() < dq[i].back()){
                    dq.push_back(dq.front());
                    dq.pop_front();
                    i=0;
                }
            }
            if(dq.front().front()==m){
                cout<<k-dq.size()+1<<endl;
                break;
            }
            else
                dq.pop_front();
        }

    }
}
