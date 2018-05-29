#include <iostream>
#include <cstdio>

using namespace std;
char grid[12][12], angle[12][12];
bool visited[12][12];

int xy_correct(int x, int y, int w, int h)
{
    if(0 <= x && x < h && 0 <= y && y < w) return 1;
    else return 0;
}

inline void xy_update(int &x, int &y, char direct)
{
    switch (direct)
    {
    case 'U':
        --y;
        break;
    case 'D':
        ++y;
        break;
    case 'L':
        --x;
        break;
    case 'R':
        ++x;
        break;
    }
}

inline void rotate(char &direct)
{
    switch (direct)
    {
    case 'U':
        direct = 'R';
        break;
    case 'R':
        direct = 'D';
        break;
    case 'D':
        direct = 'L';
        break;
    case 'L':
        direct = 'U';
        break;
    }
}

int main()
{
    int c, r, x = -1, y, area = 0;
    char direct;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j)
        {
            scanf("%c", &grid[i][j]);
            if(grid[i][j]=='\n') j--;
            else if (grid[i][j] != '.' && grid[i][j] != '*')
            {
                y = i, x = j;
                direct = grid[y][x];
            }
        }

    while ( ! visited[y][x] || angle[y][x] != direct)
    {
        angle[y][x] = direct;
        if ( ! visited[y][x])
        {
            visited[y][x] = true;
            ++area;
        }
        for (int i = 0; i < 4; ++i)
        {
            int old_x = x, old_y = y;
            xy_update(x, y, direct);
            if (xy_correct(x, y, c, r) && grid[y][x] != '*')
            {
                break;
            }
            x = old_x, y = old_y;
            rotate(direct);
        }
    }
    printf("%d\n", area);
    return 0;
}
