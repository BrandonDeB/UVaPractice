#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n,m;
		scanf("%d %d", &n, &m);
		printf("%.0f\n", ceil((n-2.0)/3.0)*ceil((m-2.0)/3.0));
	}
}
