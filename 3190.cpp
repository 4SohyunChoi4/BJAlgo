#include <iostream>
#include <deque>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    
    deque<pair<int, int>> snake;//뱀이 위치한 곳
    queue<pair<int, char>> direction;
    int n, m, apple, sec=1, total_sec = 0;
    int map[101][101];
    for(int i=0; i<101; i++) memset(map[i], 0, sizeof(int)*101);
    snake.push_front({1, 1});
    map[1][1] = 2;
    cin>>n>>apple;
    while(apple--){
        int tmp_x, tmp_y;
        cin>>tmp_x>>tmp_y;
        map[tmp_x][tmp_y] = 1;
    }
    cin>>m; // 명령어 개수
    int x = 1, y = 1, i=0;
    int index = 0;
    while(m--){ //X초 뒤 L/D(좌/우)
        int temp_sec;
        char temp_dir;
        cin>>temp_sec>>temp_dir;
        direction.push({temp_sec,temp_dir});
    }
    while(true) {
            x += dx[index];
            y += dy[index];
            //cout<<"x, y:"<<x<<y<<endl;
            total_sec++;
            snake.push_front({x,y}); //뱀 머리
            if ( (x <= 0 || y <= 0 || x > n || y > n) || map[x][y] == 2)// 탈출조건
            {
                cout<<total_sec<<endl;
                return 0;
            }
            else if (map[x][y] != 1) //사과가 없으면
            {
                map[snake.back().first][snake.back().second] = 0;
                //cout<<snake.back().first<<","<<snake.back().second<<endl;
                snake.pop_back(); 
            }

            map[x][y] = 2;

        if(!direction.empty()){ //꺾는 지점에 도착했을 때
            if(sec == direction.front().first){
                if (direction.front().second == 'L') // -90도 꺾기
                {
                    index --;
                }        
                else //D(오른쪽 방향 일때)
                {
                    index ++;
                }               
                //cout<<"인덱스값:"<<index<<endl;
                if(index >= 4) index %= 4;
                else if (index < 0 ) index += 4;
                direction.pop();
            }
        }
        sec++;
    }
    return 0;
}
