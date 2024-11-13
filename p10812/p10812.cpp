#include <bits/stdc++.h>

using namespace std;

int main() {

	long long int length, a, b, x, y;
	scanf("%lld", &length);
	while(length--) {
		scanf("%lld %lld", &a, &b);
		x = (a-b)/2;
		y = x+b;
		if (a<b || (a+b) % 2 == 1) {
			cout << "impossible" << endl;
		} else {
			cout << y << " " << x << endl;
		}
	}

}
