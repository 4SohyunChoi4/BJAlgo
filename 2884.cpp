#include <iostream>
using namespace std;

int main()
{
    int H, M;
    cin>>H>>M;
    
    if(M>=45)
        M-=45;
    else{
        H-=1;
        M=60+M-45;
    if(H<0)
    {
        H=23;
    }
    }
   
    cout<<H<<" "<<M;
    return 0;
}
