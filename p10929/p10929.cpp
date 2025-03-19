#include <bits/stdc++.h>

using namespace std;

int main() {
	int current = 0;
	cin >> current;
	while (current != 0) {
		if (current % 11 == 0) {
			printf("%d is a multiple of 11.\n", current);
		} else {
			printf("%d is not a multiple of 11.\n", current);
		}
		cin >> current;
	}
}
