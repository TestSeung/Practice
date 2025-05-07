#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

int bfs(int y, int x, int n, int m, vector<vector<int>> &v, vector<vector<bool>> &chk);

int main()
{
	int n = 0;
	int m = 0;

	cin >> n >> m;

	vector<vector<int>> v(n, vector<int>(m, 0));
	vector<vector<bool>> chk(n, vector<bool>(m, false));

	for (int i = 0;i < n ;i++) {
		for (int j = 0;j < m;j++) {
			cin >> v[i][j];		
		}
	}

	int cnt = 0;
	int maxv = 0;
	//6
	//5

	for (int j = 0;j < n;j++) {
		for (int i = 0;i < m;i++) {
			if (v[j][i] == 1 && !chk[j][i]) {
				chk[j][i] = true;
				
				cnt += 1;
				

				maxv = max(maxv, bfs(j,i,n,m,v,chk));
			}
		}
	}
	
	cout << cnt <<'\n';
	cout << maxv;

	return 0;
}

int rangeY[] = { 0, -1,0, 1 };
int rangeX[] = { 1,0,-1,0 };

int bfs(int y, int x,int n, int m, vector<vector<int>> &v, vector<vector<bool>> &chk) {


	int size = 1;
	int ey, ex;
	int ny, nx;

	ey = y;
	ex = x;

	stack<pair<int, int>>s;

	s.push({y,x});
	
	while (!s.empty()){

		pair<int, int> cur = s.top();

		ey = cur.first;
		ex = cur.second;

		s.pop();

		for(int i =0;i<4;i++){
			ny = ey + rangeY[i];
			nx = ex + rangeX[i];

			if (0 <= ny && ny < n && 0 <= nx && nx < m) {
				if (v[ny][nx] == 1 && chk[ny][nx] == false) {
					chk[ny][nx] = true;
					size++;
					s.push({ny,nx});
				}
			}
		}
	}

	return size;
}

