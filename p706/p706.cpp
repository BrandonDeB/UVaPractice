#include <bits/stdc++.h>

using namespace std;
const vector<string> DIGIT_MAP[10] = {
	{},
	{},
	{},
	{},
	{},
	{},
	{},
	{},
	{},
	{}
};
int main() {
	int s, n = 0;
	while (cin >> s) {
		cin >> n;
		int factor = 1;
		printf("%d %d\n", s, n);
	  	while(n>0) {
			int digit = n % 10;
			n = n /10;
			printf("%d", digit);
		}	
	}
}
