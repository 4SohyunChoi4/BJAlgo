#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count, num;
    string str;
    
    cin>>num;
    for(int i=0 ; i<num; i++){
        cin>>count>>str;
        for(int j=0; j < str.length() ; j++){
            int k=0;
            while(k<count){
                cout<<str[j];
                k++;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
