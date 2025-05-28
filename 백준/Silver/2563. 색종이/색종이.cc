#include<iostream>
#include<deque>

using namespace std;

enum state {
	BLANK,
	FILL,
};

int main() {
	
	deque<deque<state>> paper(100,deque<state>(100,BLANK));

	int n;
	cin >> n;
	int x, y;

	for (int i = 0;i < n;i++) {
		cin >> x >> y;

		for (int j = 0;j < 10;j++) {
			for (int k = 0;k < 10;k++) {

				paper[x + j][y + k] = FILL;

			}
		}
		
	}
	int cnt=0;

	for (int i = 0;i < 100;i++) {
		for (int j = 0;j < 100;j++) {
			if (paper[i][j] == FILL) {
				cnt++;
			}
		}
	}
	cout << cnt;

}