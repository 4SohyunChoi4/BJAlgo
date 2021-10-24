#include <iostream>
#include <string>
using namespace std;
int main(){
    int A, B, C, arr[10]={0};
    cin>>A>>B>>C;
    string num = to_string(A*B*C);
    
    for(int i=0;i<num.length();i++){
        int tmp=stoi(num.substr(i,1));
        arr[tmp]+=1;
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}