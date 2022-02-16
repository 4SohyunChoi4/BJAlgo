#include <iostream>

using namespace std;

int cnt=0;
int column[16]={0};

bool promising(int i){
    int k=1;
    bool flag=true;
    while(k<i && flag){
        if(column[i]==column[k] || abs(column[i]-column[k]) == i - k)
            flag=false;
        k++;
    }
    return flag;
}

int queens(int i, int n){
    if(promising(i)){
        if (i == n){
            //for(int k=1 ; k<=n; k++){
            //    cout<<column[k]<<" ";
           // }
           // cout<<endl;
            cnt++;  
        }
        else{
            for (int j=1 ; j<=n; j++){
                column[i+1] = j;
                queens(i+1, n);
            }
        }
        
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);    
    
    int N;
    cin>>N;
    cout<<queens(0, N);
    return 0;
}