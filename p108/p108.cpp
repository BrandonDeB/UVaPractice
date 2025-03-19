#include <bits/stdc++.h>

using namespace std;

int initialize_array(int size, int** array) {
	int count = 0;
	int number = 0;
	for(int i = 0; i < size*size; i++) {
		cin >> number;
		array[count/size][count%size] = number;
		count++;
	}
	return size;
}

int initialize_precalc(int size, int** array) {
	for (int k=1; k < size; k++) {
		array[k][0] = array[k-1][0] + array[k][0];
		array[0][k] = array[0][k-1] + array[0][k];
	}
	for (int i=1; i < size; i++) {
		for(int j=1; j<size; j++) {
			array[i][j] = array[i-1][j] + array[i][j-1]
				- array[i-1][j-1] + array[i][j];
		}
	}
	return size;
}

int kadane(int size, int* combined) {
	int currSum = 0;
	int maxSum = INT_MIN;

	for (int i=0; i < size; i++) {
		if (i > 0) {
			currSum += combined[i];
		} else {
			currSum = combined[i];
		}

		if (maxSum < currSum) {
			maxSum = currSum;
		}

		if (currSum < 0) {
			currSum = 0;
		}
	}
	//printf("Max sum: %d\n", maxSum);
	return maxSum;
}

int combine_columns(int size, int** array) {
	int max = INT_MIN;
	for(int i=0; i < size; i++) {
		for(int j=i; j < size; j++) {
			//combine
			int combined[size] = {0};
			for(int k=i; k<=j; k++) {
				//printf("Combined:");
				for(int l=0; l < size; l++) {
					combined[l] += array[l][k];
					//printf(" %d ", combined[l]);
				}
				//printf("\n");
			}
			//kadane
			int tempMax = kadane(size, combined);
			if (tempMax > max) {
				max = tempMax;
			}
		}
	}
	return max;
}

int main() {
	int size;
	while(cin >> size) {
		int** array = new int*[size];
		for (int i = 0; i < size; i++) {
			array[i] = new int[size];
		}
		initialize_array(size, array);
		//initialize_precalc(size, array);
		int max = combine_columns(size, array);
		printf("%d\n", max);
	}
}
