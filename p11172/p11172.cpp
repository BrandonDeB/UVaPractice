#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int length,i, a, b;
	i = 0;
	scanf("%d", &length);
	while (i < length) {
		scanf("%d %d", &a, &b);
		a < b ? cout << "<" << endl : a > b ? cout << ">" << endl : cout << "=" << endl;
		i++;
	}

}
