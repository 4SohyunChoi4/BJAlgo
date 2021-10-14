#include <iostream>
using namespace std;
int main()
{
    int N, origin, count=0;
    cin >> N;
    origin = N;
    do {
        int tmp = (N%10 + N/10)%10;
        N = tmp + N%10*10;
        //cout<<N<<" ";
        count++;
    } while(N != origin);
    cout<<count;
   return 0;
}