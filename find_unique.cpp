#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	map<char, int> m;
	for (char ch : str) {
		m[ch]++;
	}
	for (int i = 0; i < str.size(); i++) {
		if (m[str[i]] == 1) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}