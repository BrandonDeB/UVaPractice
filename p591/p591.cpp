#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, set = 0;
	while(scanf("%d", &n) != EOF) {
		if (n == 0) {
			break;
		}
		set++;
		int blocks[n] = {};
		int curr = 0;
		int total = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &curr);
			blocks[i] = curr;
			total += curr;
		}
		int over = 0;
		for (int i = 0; i < n; i++) {
			if (blocks[i] > total / n) {
				over += blocks[i] - total / n;	
			}
		}
		cout << "Set #" << set << endl << "The minimum number of moves is " << over << "." << endl << endl;
	}
}
