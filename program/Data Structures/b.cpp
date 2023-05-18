#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int dp[31][31][2];
int visited[31][31];
char a[31][31];
int n, m;
int sx, sy;
int ex, ey;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int func(int x, int y)
{
	//cout<<"Inside func("<<x<<", "<<y<<")"<<endl;
    if (x == sx && y == sy)
    {
    	//visited[x][y] = 1;
    	//cout<<"returning "<<0<<" from coordinate: ("<<x<<", "<<y<<")"<<endl;
    	dp[x][y][0] = 0;
        return 0;
    }
    // dp[x][y][0] = time; dp[x][y][1] = no. of walls broken
    if (dp[x][y][0] != -1)
    {
    	//visited[x][y] = 1;
        return dp[x][y][0];
    }
    visited[x][y] = 1;
    int possibleTimes[] = {INT_MAX, INT_MAX, INT_MAX, INT_MAX};
    for (int i = 0; i < 4; i++)
    {
        int v1 = x + dx[i];
        int v2 = y + dy[i];
        
        if ((v1 < 0 || v1 >= n) || (v2 < 0 || v2 >= m))
        {
            continue;
        }
        if (!visited[v1][v2])
        {
        	possibleTimes[i] = func(v1, v2) + 1;
        	if (a[x][y] == '#')
	        {
	        	possibleTimes[i] += dp[v1][v2][1];
	        }
        }
        else{
        	continue;
        }
    }
    dp[x][y][0] = min(min(possibleTimes[0], possibleTimes[1]), min(possibleTimes[2], possibleTimes[3]) );
    if (possibleTimes[0] == dp[x][y][0]) dp[x][y][1] = dp[x+dx[0]][y+dy[0]][1];
    if (possibleTimes[1] == dp[x][y][0]) dp[x][y][1] = dp[x+dx[1]][y+dy[1]][1];
    if (possibleTimes[2] == dp[x][y][0]) dp[x][y][1] = dp[x+dx[2]][y+dy[2]][1];
    if (possibleTimes[3] == dp[x][y][0]) dp[x][y][1] = dp[x+dx[3]][y+dy[3]][1];
    if (a[x][y] == '#') dp[x][y][1]++;
    cout<<"returning "<<dp[x][y][0]<<" from coordinate: ("<<x<<", "<<y<<")"<<endl;
    return dp[x][y][0];
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'S')
            {
                sx = i;
                sy = j;
            }
            else if (a[i][j] == 'G')
            {
                ex = i;
                ey = j;
            }
        }
    }

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            dp[i][j][0] = -1;
            dp[i][j][1] = 0;
            visited[i][j] = 0;
        }
    }
    //cout<<"sx, sy  =  "<<sx<<", "<<sy<<endl;
    //cout<<"initiating Function..."<<endl;
    cout << func(ex, ey)<< endl;

    return 0;
}