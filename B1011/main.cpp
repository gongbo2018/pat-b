#include <iostream>

int main() {
	int n;
	scanf("%d", &n);
	int tcase = 1;
	while (n--) {
		long long a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a + b > c) {
			printf("Case #%d: true\n", tcase);
		} else {
			printf("Case #%d: false\n", tcase);
		}
		tcase++;
	}

	return 0;
}
