#include <stdio.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    //cin>>T;
    int A[T], B[T];
    for(int i=0 ; i<T ; i++){
       //cin>>A[i]>>B[i];
       scanf("%d %d",&A[i],&B[i]);
    }
    for(int i=0 ; i<T ; i++){
       printf("%d\n",A[i]+B[i]);
       //cout<<"Case #"<<i+1<<": "<<A[i]+B[i]<<endl;
    }
   return 0;
}
