#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> note1;

int binarySearch(int input, int low, int high){
    if(low > high)
        return 0;
    else
    {
        int mid = ( low+high )/2;
        if ( note1[mid] == input)
        {
            return 1;
        }
        else if ( note1[mid] > input)
        {
           return binarySearch(input, low, mid-1);
        }
        else
        {
           return binarySearch(input, mid+1, high);
        }
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    
    while(T--)
    {
        int M, N, temp;
        
       scanf("%d",&N);
        for(int i=0 ; i<N ; i++)
        {   
            scanf("%d",&temp);
            note1.emplace_back(temp);
        }
        sort(note1.begin(), note1.end());
        scanf("%d",&M);
        int temp2;
        for(int i=0 ; i<M ; i++)
        {   
            scanf("%d",&temp2);
            printf("%d\n", binarySearch(temp2, 0, N-1));
        }
        note1.clear();
    }

    return 0;
}