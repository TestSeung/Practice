#include<iostream>
#include<map>
#include<deque>
using namespace std;

int main() {
	int n;

	map<string,int, greater<string>> log;
	string nameLog;
	deque<string> dq;

	cin >> n;
	n *= 2;
	while(n--){
		string name;
		cin >> nameLog;
		if (nameLog != "enter" && nameLog != "leave") {
			dq.push_back(nameLog);
		}
	}
	 //키를 넣어
	for (string s : dq) {
		if (log.find(s)==log.end()) {
			log.insert({ s,1 });
		}
		else  {
			log.erase(s);
		}
	}

	for (auto itr :log) {
		cout << itr.first<< '\n';
	}
}