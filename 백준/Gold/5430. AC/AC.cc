#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;


//vector<int> reverse(vector<int> &arr);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	string funcP;
	int cnt;
	string num; // 배열에 들어있는 개수와 수
	deque<int> arr;
	//R 배열에 수를 뒤집다
	//D 첫번째꺼 버리기
	//배열이 비었다면 error

	int T;
	cin >> T;

	for (int i = 0;i < T;i++) {
		cin >> funcP;
		cin >> cnt;
		cin >> num;
		string temp = "";

		for (char c : num) {
			if (c == ',' || c == ']') {
				if (temp == "") {
					continue;
				}
				arr.push_back(stoi(temp));
				temp = "";
				continue;
			}
			if (c == '[') {
				continue;
			}
			temp.push_back(c);

		}
		bool isFront = true;
		bool isError = false;

		for (char c : funcP) {

			if (c == 'R') {
				if (isFront)
					isFront = false;
				else
					isFront = true;
			}
			else {
				if (arr.empty()) {
					cout << "error" << '\n';
					arr.clear();
					isError = true;
					break;
				}
				if (isFront) {
					arr.pop_front();
				}
				else {
					arr.pop_back();
				}
			}
		}

			
		if(!isError){
			if (!isFront) {
			reverse(arr.begin(), arr.end());
			}
		
			cout << '[';
			for (int j = 0;j < arr.size();j++) {
				cout << arr[j];
				if (j != arr.size() - 1) {
					cout << ",";
				}
			}

			cout << ']' << '\n';
		}
		arr.clear();
	}

}
//vector<int> reverse(vector<int> &arr) {
//	int temp;
//	for (int i = 0;i<arr.size()/2;i++) {
//		temp = arr[i];
//		arr[i] = arr[arr.size()-1-i];	
//		arr[arr.size() - 1 - i] = temp;
//	}
//	return arr;
//}
