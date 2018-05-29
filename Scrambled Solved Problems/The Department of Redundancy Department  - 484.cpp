#include <iostream>
#include <map>
#include <cstdio>
#include <queue>
using namespace std;
int main()
{
    queue<int> nums;
    map<int,int> track;
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        if(track[x]==0) nums.push(x);
        track[x]++;
    }
    while(!nums.empty())
    {
        printf("%d %d\n",nums.front(),track[nums.front()]);
        nums.pop();
    }
    return 0;
}
