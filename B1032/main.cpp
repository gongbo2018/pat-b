#include <iostream>

const int maxn = 1e5 + 10;

int school[maxn] = {0};

int main() {
	int n, schID, score;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &schID, &score);
		school[schID] += score;
	}

	int k = 1, MAX = -1;
	for (int j = 1; j <= n; j++) {
		if (school[j] > MAX) {
			MAX = school[j];
			k = j;
		}
	}

	printf("%d %d\n", k, MAX);

	return 0;
}
