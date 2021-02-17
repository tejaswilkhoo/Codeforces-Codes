#include <bits/stdc++.h>
using namespace std;  



const int mn = 1005;
int arr[mn][mn];
bool vis[mn][mn];
vector<vector<pair<int,int>>> help(1000005);

int main()
{
	int n, m;
	cin >> m >> n;
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			int x; cin >> x;
			arr[i][j] = x;
			help[x].push_back({i + 1, j + 1});
		}
	}

	queue<pair<int,int>> q;
	q.push({n, m});
	vis[n][m] = true;
	while (!q.empty()) 
	{
		auto u = q.front();
		q.pop();
		int r = u.first;
		int c = u.second;
		for (auto v : help[r * c]) 
		{
			if (v.first == 1 && v.second == 1) 
			{
				cout << "yes";
				return 0;
			} 
			if(!vis[v.first][v.second]) 
			{
				vis[v.first][v.second] = true;
				q.push(v);
			}
		}
	}

	cout << "no";

}
