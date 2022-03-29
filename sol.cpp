#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int a[4];
	for(int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	// just check if x is in {a, b, c}
	for(int i = 0; i < 3; i++) {
		if(a[3] - a[i] == 0) {
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}


