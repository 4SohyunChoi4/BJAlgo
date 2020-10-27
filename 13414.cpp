#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
    int admission_num, size, temp;//수강가능 인원, 들어오는 학번 개수
    map<int, int> student;// 학번을 받는 변수 student 선언, key=학번, value=클릭 순위
    map<int, int>::iterator it;
    vector<pair<int, int>> sorted_std;

    scanf("%d %d",&admission_num, &size);
    //cin>>admission_num;
    //cin>>size;
    
    for(int i=0;i<size;i++){  //id에 있는 값을 하나씩 넣는다 -> 중복 클릭은 자동으로 덮어씌워짐
        //cin>>temp;
        scanf("%d",&temp);
        student[temp]=i;
    }
    
    for(it = student.begin(); it != student.end(); it++){
        sorted_std.push_back(make_pair(it->second, it->first));
    }
    sort(sorted_std.begin(),sorted_std.end());

    for(int i=0;i<admission_num&&i<sorted_std.size();i++)
        printf("%08d\n",sorted_std[i].second);
        //cout<<sorted_std[i].second<<endl;

    return 0;
}