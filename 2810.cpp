#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, i=0, holder=1;
    string s;
    cin>>N;
    cin>>s;
    do
    {
        if(s[i] == 'S')
        {
            holder++;    
        }
        else if (s[i] == 'L'){
            holder++;
            i++;
        }
        i++;
    } while(i < s.size());
    //cout<<holder;
    N<holder ? cout<<N : cout<<holder;
    return 0;
}