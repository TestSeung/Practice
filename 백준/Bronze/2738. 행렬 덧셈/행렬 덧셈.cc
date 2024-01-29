#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int count = 2;
	// 2차원 배열 선언
	int** p = new int* [N]; // n개의 행
	for (int i = 0; i < N; i++) {
		p[i] = new int[M]; // m개의 열
	}
	
	while (count)
	{
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int x;
				cin >> x;
				if (count == 2) {
					p[i][j] = x;
				}
				else{
					p[i][j] += x;
				}
			}
		}
		count--;
	}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << p[i][j] << " ";
			}
			cout << "\n";
		}

		for (int i = 0; i < N; i++) {
			delete[] p[i];
		}
		delete[] p; 

	return 0;
}
