#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T, i=0;
    int A, B;

    cin>>T;
    while ( i < T){
        char c;
        cin>>A>>c>>B;
        cout<<A+B<<endl;
        i++;
    }
     
    return 0;
}