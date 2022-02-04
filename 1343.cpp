#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string input;
    
    cin>>input;
    
    for(int i =0 ; i<input.length(); i++)
    {
        string sub4 = input.substr(i,4);
        string sub2 = input.substr(i,2);
        string sub1 = input.substr(i,1);
        if(sub4.compare("XXXX")==0){
            input.replace(i,4, "AAAA");
            i+=3;
        }
        else if(sub2.compare("XX")==0){
            input.replace(i,2, "BB");
            i+=1;
        }
        else if (sub1.compare(".")==0){
            continue;
        }
        else{
            cout<<-1;
            exit(0);
        }
            
    }
    cout<<input<<endl;
    return 0;
}