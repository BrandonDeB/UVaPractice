#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	for (int i=1; i <= t; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		printf("Case %d: %d\n",i, min(max(a, b), min(max(a,c), max(b,c))));
	}
}
