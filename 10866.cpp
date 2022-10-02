#include <iostream>
#include <string>
#include <cstring>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq;
    int n;
    cin >> n;
    while(n--){
        string str;
        int push;
        cin>>str;
        if(str == "empty") {
            if (dq.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else if(str == "front") {
            if (dq.empty()) cout<<-1<<"\n";
            else cout<<dq.front()<<"\n";
        }
        else if(str == "back") {
            if (dq.empty()) cout<<-1<<"\n";
            else cout<<dq.back()<<"\n";
        }
        else if(str == "size") {
             cout<<dq.size()<<"\n";
        }
        else if(str == "pop_front") {
            if (dq.empty()) cout<<-1<<"\n";
            else {
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
        }
        else if(str == "pop_back") {
            if (dq.empty()) cout<<-1<<"\n";
            else {
                cout<<dq.back()<<"\n";
                dq.pop_back();
            }
        }
        else if(str == "push_front") {// "push_front"
            cin>>push;
            dq.push_front(push);
        }
        else {//str, "push_back")) {
            cin>>push;
            dq.push_back(push);
        }
    }
}
