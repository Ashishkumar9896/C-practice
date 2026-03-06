#include <stdio.h>

int main(void) {
	long long n;
	long long largestPrimeFactor = 0;

	scanf("%lld", &n);

	while (n % 2 == 0) {
		largestPrimeFactor = 2;
		n /= 2;
	}

	for (long long i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			largestPrimeFactor = i;
			n /= i;
		}
	}

	if (n > 2) {
		largestPrimeFactor = n;
	}

	if (largestPrimeFactor == 0) {
		largestPrimeFactor = n;
	}

	printf("%lld", largestPrimeFactor);

	return 0;
}
