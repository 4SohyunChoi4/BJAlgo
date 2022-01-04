#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int T, i=0;
    int A, B;

    cin>>T;
    while ( i < T){
        string str;
        vector<int> vec;
        cin>>str;

        istringstream ss(str);
        string buff;

            while (getline(ss, buff, ',')) {
                vec.push_back(stoi(buff));    
                //cout<<buff;
            }
            cout<<vec[0]+vec[1]<<endl;
        i++;
    }

     
    return 0;
}