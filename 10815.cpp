#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 vector < int >cards;

 int binarySearch(int x, int low, int high){
        int mid = ( low + high )/2;
        if (low > high){
            return 0;
        }
        else {
            if ( cards[mid] == x)
            {
                return 1;
            }
            else if (cards[mid] > x)
            {
                //0에서 mid-1 내에서 찾는다
                return binarySearch(x, low, mid-1);
            }
            else
            {
                //mid에서 n-1 내에서 찾는다
                return binarySearch(x, mid+1, high);
            }
        }
        
}

int main ()
{
  int N, M, tmp;
  
  ios::sync_with_stdio (0);
  cin.tie (0);
  cout.tie (0);

  cin >> N;
  
  for (int i = 0; i < N; i++)
    {
    cin>>tmp;
    cards.push_back(tmp);
    }
    sort(cards.begin(), cards.end());

    cin>>M;
    
  for (int i = 0; i < M; i++)
    {
    cin>>tmp;
    int result = binarySearch(tmp, 0, N-1);
    cout<<result<<" ";    
    }

  return 0;
}
