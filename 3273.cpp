#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;
int binarySearch(int finder, int low, int high){
    if(low > high)
        return -1;
    else
    {
        int mid = ( low+high )/2;
        if ( vec[mid] == finder)
        {
            vec.erase(vec.begin() + mid);
            return vec[mid];
        }
        else if ( vec[mid] > finder)
        {
           return binarySearch(finder,  low, mid-1);
        }
        else
        {
           return binarySearch(finder, mid+1, high);
        }
    }
}

int main()
{
    int cnt=0;
    int n, temp, x;

    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {   
        scanf("%d",&temp);
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    
    scanf("%d",&x);
    for(int i=0; i<vec.size(); i++){
        //printf("%d\n",x-vec[i]);
        int finder = x-vec[i];
        int result = binarySearch(x-vec[i], 0, vec.size()-1);
        if (finder>0 && result != vec[i] && result>0 ){
            cnt++;
        }
        else
            continue;
    }
    printf("%d\n",cnt);
    return 0;
}