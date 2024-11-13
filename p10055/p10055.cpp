#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int a, b;
	while(scanf("%lld %lld", &a, &b)!=EOF) {
		b > a ? cout << b - a << endl : cout << a - b << endl;
	}
}
