#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N, sum = 0;
    string str;
    cin>>N>>str;
    for(int i = 0 ; i < N ; i++ ){
        sum += stoi(str.substr(i,1));
    }
    cout<<sum;
    return 0;
}
