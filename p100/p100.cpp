#include <bits/stdc++.h>

using namespace std;

int main() {
	int y, z, count;
	int curr_length;
	while (scanf("%d %d",&y,&z)!=EOF) {
		int max_length = 0;
		int i = y;
		int j = z;
		if (i > j) {
			swap(i,j);
		}
		for (count = i; count <=j; count++) {
			int start = count;
			int curr_length = 1;
			while(start!=1) {
				if (start % 2 == 1) {
					start = (3 * start) + 1;
				} else {
					start = start /2;
				}
				curr_length++;
			}
	       		if(curr_length > max_length) {
				max_length=curr_length;
			}
		}
		cout << y << " " << z << " "  << max_length << endl;
	}
}

