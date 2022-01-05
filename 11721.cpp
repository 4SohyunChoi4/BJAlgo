#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i=1;
    string str;
    cin >> str;
    while(i<=str.size()){
        cout<<str[i-1];
        if(i%10 == 0)
            cout<<endl;
        i++;
    }
}