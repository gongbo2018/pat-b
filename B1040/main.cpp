#include <iostream>
#include <string>

using namespace std;

const int MAXN = 1e5 + 10;
const int MOD = 1e9 + 7;

string str;
int leftNumP[MAXN] = {0};

int main() {
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (i > 0) {
			leftNumP[i] = leftNumP[i - 1];
		}
		if (str[i] == 'P') {
			leftNumP[i]++;
		}
	}
	int ans = 0, rightNumT = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == 'T') {
			rightNumT++;
		} else if(str[i] == 'A') {
			ans = (ans + leftNumP[i] * rightNumT) % MOD;
		}
	}

	cout << ans << endl;

	return 0;
}
