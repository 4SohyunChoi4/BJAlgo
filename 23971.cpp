#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int h, w, n, m;
    cin>>h>>w>>n>>m;
    long long h1,h2, w1,w2;
    h1 = floor((h-1) / (n+1));
    w1 = floor((w-1) / (m+1));

    //cout<<(h1+h2)*(w1+w2);
    cout<<(h1+1)*(w1+1);
    
    return 0;
}
