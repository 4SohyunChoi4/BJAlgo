#include <stdio.h>
using namespace std;
int main()
{
    double a,b;
    double c;
    scanf("%lf %lf",&a, &b);
    c=a/b;
    //cout<<c;
    printf("%.12lf",c);
    return 0;
}
