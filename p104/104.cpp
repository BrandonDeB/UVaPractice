#include <bits/stdc++.h>

using namespace std;

int n;
int curr_index;

float get_precent_change(float** array, curr_sequence) {
	float change = 1
	for(int i = 1; i < sizeof(curr_seqeunce); i++) {
		change = change * array[curr_sequence[i]][curr_sequence[i-1]];
	}
	change = change * array[curr_sequence[sizeof(curr_sequence)-1]][curr_index];
	return change;
}

int[] find_shortest_sequence(float** array, int[] curr_sequence) {
	int empty = 0;
	for (int i = 0; i < n; i++) {
		if (curr_sequence[i] == 0) {
			for (int j = 0; j < n; j++) {
				if (i != j) {
					curr_sequence[i] = j;
					get_percent_change(array, curr_sequence);
					if (percent_change > 1) {
						return curr_sequence;
					}
				}
			}
		}
	}
	return [];
}

int main() {

	n = 0;
	while(scanf("%d", &n) != EOF) {
		float array[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) {
					array[i][j] = 1.0;
				} else {
					scanf("%f", &array[i][j]);
				}
			}
		}
		int curr_sequence[n] = {};
		int* shortest;
		for (int i = 0; i < n; i++) {
			find_shortest_sequence(array, curr_sequence);
		}
	}

}
