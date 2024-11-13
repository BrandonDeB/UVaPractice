#include <bits/stdc++.h>

using namespace std;

struct Node {
	int val;
	Node* next;
};

int main() {
	char command [10];
	char action[10];
       	char where [10];
	int a, b, n;
	cin >> n;
	printf("N = %d\n", n);
	Node lists[n];
	for (int i = 0; i < n; i++) {
		Node curr = { n , nullptr };
		Node holder = { n, &curr };
		lists[n] = curr;
	}
	while (true) {
		cin >> command  >> a >> where >> b;
		if (strcmp(command, "quit") == 0) {
			break;
		} else if (strcmp(command, "move") == 0 && strcmp(where, "onto") == 0) {

		} else if (strcmp(command, "move") == 0 && strcmp(where, "over") == 0) {

		} else if (strcmp(command, "pile") == 0 && strcmp(where, "onto") == 0) {

		} else if (strcmp(command, "pile") == 0 && strcmp(where, "over") == 0 {

		}
	}
}

int move_onto(Node* list, int a, int b) {

}

int move_over(Node* list, int a, int b) {

}

int pile_onto(Node* list, int a, int b) {

}

int pile_over(Node* list, int a, int b) {

}

Node*
