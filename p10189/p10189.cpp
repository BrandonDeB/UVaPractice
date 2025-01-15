#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	int field = 0;
	while(scanf("%d %d", &n, &m) != EOF) {
		if (n==0 || m==0) {
			break;
		}
		if (field > 0) {
			cout << endl;
		}
		field++;
		int grid[n][m] = {};
		for (int i = 0; i < n; i++) {
			char current = 'a';
			for(int j = 0; j < m; j++) {
				scanf("%c", &current);
				if (current == '\n') {
					scanf("%c", &current);
				}
				if (current == '*') {
					grid[i][j] = -1;
					for(int k = max(0, i-1); k < min(n, i+2); k++) {
						for (int l = max(0, j-1); l < min(m, j+2); l++) {
							if(grid[k][l] != -1) {
								grid[k][l]++;
							}
						}
					}
				}
			}
		}
		printf("Field #%d:\n", field);
		for (int i = 0; i < n; i++) {
			for (int j=0; j < m; j++) {
				if (grid[i][j] == -1) {
					cout << "*";
				} else {
					cout << grid[i][j];
				}
			} 
			cout << endl;
		}
	}

}
