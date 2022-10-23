#include <iostream>

using namespace std;

int main()
{
    int n, count=0;
    cin>>n;
    //1개 또는 3개
    while(n>=1){
        if(n>=3) n-=3;
        else n-=1;
       // cout<<n<<endl;
        count++;
    }
    if(count %2==1) cout<<"SK";
    else cout<<"CY";
    

    return 0;
}
