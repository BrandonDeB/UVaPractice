#include <bits/stdc++.h>

using namespace std;

int main() {
	int number;
	unsigned long long total;
	while(cin >> number) {
		total = 1;
		if (number < 0) {
			if (number % 2) printf("Overflow!\n", number);
			else printf("Underflow!\n", number);
		}
		else if(number < 8) {
			printf("Underflow!\n", number);
		} else if (number > 13) {
			printf("Overflow!\n", number);
		} else {
			for (int i = 1; i <= number; i++) {
				total *= i;
			}
			printf("%lld\n", total);
		}
	}
}
