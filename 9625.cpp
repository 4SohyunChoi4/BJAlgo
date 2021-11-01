#include <iostream>
using namespace std;
int main()
{
    int K;
    
    cin>>K;
    
    int i=0;
    int A[45];
    int B[45];
    
    A[0] = 1;
    A[1] = 0;
    
    B[0] = 0;
    B[1] = 1;
    
    if(K>2)
    {
        for(int i=2; i<=K; i++)
        {
            A[i] = B[i-1];
            B[i] = A[i-1] + B[i-1];
        }
    }

    cout<<A[K]<<" "<<B[K]<<endl;
    return 0;
}
