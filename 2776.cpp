#include <stdio.h>
#include <set>
#include <algorithm>

using namespace std;
/*
int binarySearch(int input, set<int> note, int low, int high){
    if(low > high)
        return 0;
    else
    {
        int mid = ( low+high )/2;
        //cout<<low<<" "<<mid<<" "<<high<<endl;
        if ( note[mid] == input)
        {
            return 1;
        }
        else if ( note[mid] > input)
        {
           return binarySearch(input, note, low, mid-1);
        }
        else
        {
           return binarySearch(input, note, mid+1, high);
        }
    }
}
*/
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
        
    int T;
    //cin>>T;
    scanf("%d",&T);
    
    int k=0;
    while(k<T)
    {
        int M, N, temp;
        set<int> note1;
        
        //cin>>N;
        scanf("%d",&N);
        for(int i=0 ; i<N ; i++)
        {   
            //cin>>temp;
            scanf("%d",&temp);
            note1.insert(temp);
        }
        //cin>>M;
        scanf("%d",&M);
        for(int i=0 ; i<M ; i++)
        {   
            //cin>>temp;
            scanf("%d",&temp);
            note1.count(temp)>0 ? puts("1") : puts("0");
            //cout<<binarySearch(temp, note1, 0, M-1)<<endl;
        }   
        k++;
    }

    return 0;
}