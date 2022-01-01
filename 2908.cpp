#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string A, B, C, D;
    cin>>A>>B;
    C=A;
    D=B;
    reverse(C.begin(), C.end());
    reverse(D.begin(), D.end());
    //int a = atoi(A.c_str());
    //int b = atoi(B.c_str());
    int c = atoi(C.c_str());
    int d = atoi(D.c_str());
    cout<<max(c,d);

    return 0;
}
