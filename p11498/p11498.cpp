#include <bits/stdc++.h>

using namespace std;

int main() {
	int k;
	while(scanf("%d", &k) != EOF) {
		int x, y;
		if (k==0) {break;}
		scanf("%d %d", &x, &y);
		for (int i = 0; i < k; i++) {
			int x_spot, y_spot;
			scanf("%d %d", &x_spot, &y_spot);
			if (x_spot == x || y_spot == y) {
				printf("divisa\n");
				continue;	
			}
			if (y_spot > y) {
				printf("N");
			} else {
				printf("S");
			}
			if (x_spot > x) {
				printf("E\n");
			} else {
				printf("O\n");
			}
		}
	}
}
