#include <iostream>

using namespace std;
int main()
{
    int T;
    long long triangle[101]={0};
    triangle[1]=1;
    triangle[2]=1;
    for(int i=3; i<101; i++){
        triangle[i]=triangle[i-2]+triangle[i-3];
    }
    cin>>T;
    while(T--){
        int input;
        cin>>input;
        cout<<triangle[input]<<endl;
    }
    return 0;
}