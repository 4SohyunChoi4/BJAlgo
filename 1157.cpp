#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str;
    int key[26]={0};
    int max=-1, cnt=0;
    char answer;
    cin>>str;
    transform(str.begin(), str.end(),str.begin(), ::tolower);
    sort(str.begin(), str.end());
    for(int i=0; i<str.length(); i++){
       key[str[i]-97] += 1;
    }
    max = *max_element(key, key+26);
    for(int i=0; i<26 ;i++){
        if (max == key[i]){
            answer=i+65;
            cnt++;
        }
    }
    if(cnt>=2) printf("?");
    else printf("%c",answer);
    
    return 0;
}
