#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int
main ()
{
  int n, temp;
  int answer=0;
 
  priority_queue < int, vector < int >, greater < int >>deck;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> temp;
      deck.push (temp);
    }

  while (deck.size () >= 2)
    {
    int sum = 0;
      for (int i = 0; i < 2; i++)
	{
	  sum += deck.top ();
	  //cout <<deck.top()<<endl;
	  deck.pop ();
	}
      deck.push (sum);
      //cout<<endl;
      answer+=sum;
    }
    
    cout<<answer<<endl;


  return 0;
}

