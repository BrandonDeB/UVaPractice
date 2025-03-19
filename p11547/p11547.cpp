#include <bits/stdc++.h>

using namespace std;

int main() {
	int num = 0;
	cin >> num;
	for(int i=0; i<num;i++) {
		int current = 0;
		cin >> current;
		int b = (((((current*567)/9)+7492)*(235/47)-498)/10)%10;
		if (b<0) {
			b = b * -1;
		}
		printf("%d\n", b);
	}
}
