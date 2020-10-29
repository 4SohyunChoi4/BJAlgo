#include <iostream>
#include <stdio.h>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
/*
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력한다. => map으로 구현하자
*/
int main()
{
    int N, len;//단어의 개수
    string temp;
    map<string, int> dict; //각각 단어의 길이, 단어 => 중복 단어 제거를 위해
    vector<pair<int, string>> sorted_dict;//dict를 다시 정렬할 vector 필요
    
    map<string, int>::iterator it;
    vector<pair<int, string>>::iterator iter;
    
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        cin>>temp;
//        scanf("%s",&temp);
        len=temp.length();
        dict[temp]=len;
    }

    for(it=dict.begin();it!=dict.end();it++)
        sorted_dict.push_back(make_pair(it->second,it->first));
    
    sort(sorted_dict.begin(),sorted_dict.end());

    //for(iter=sorted_dict.begin();iter!=sorted_dict.end();iter++)
    //    cout<<iter->second<<endl;
    for(int i=0;i<sorted_dict.size();i++)
        cout<<sorted_dict[i].second<<endl;
    
}

