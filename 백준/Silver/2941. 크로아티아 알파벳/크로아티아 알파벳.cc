#include <iostream>

using namespace std;

int main() {
	string input;
	int count = 0;

	string word[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

	cin >> input;
	int i = 0;
	while (!input.empty()) {
		
		if (input.find(word[i]) != string::npos) {
			input.replace(input.find(word[i]), word[i].size()," ");
		}
		else if (input.find(word[i]) == string::npos) {
			i++;
		}
		if(i == 8){
			count = input.size();
			break;
		}
	}

	cout << count;
}