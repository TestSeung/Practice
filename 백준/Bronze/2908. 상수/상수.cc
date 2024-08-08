#include <iostream>
#include<string>

using namespace std;
int main() {
	int n;
	int m;
	cin >> n >> m;
	
	string s = to_string(n);
	string s2 = to_string(m);

	int temp = s[0];
	s[0] = s[2];
	s[2] = temp;
	int temp1 = s2[0];
	s2[0] = s2[2];
	s2[2] = temp1;

	n = atoi(s.c_str());
	m = atoi(s2.c_str());

	if (n > m) cout << n;
	else cout << m;
		
}
