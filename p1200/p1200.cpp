#include <bits/stdc++.h>

using namespace std;

int LEFT = 1;
int RIGHT = -1;
int POSITIVE = 1;
int NEGATIVE = -1;

int main()
 {
	string line;
	getline(cin, line);
	int occurences = stoi(line);
	for(int i=0; i < occurences; i++)
	 {
		getline(cin, line);
		bool parsed = false;
		int side = LEFT;
		int sign = POSITIVE;
		int xs = 0;
		int constants = 0;
		while(!parsed) 
		 {
			int nextPlus = line.find("+");
			int nextMinus = line.find("-");
			int nextEquals = line.find("=");
			if (nextPlus == -1) nextPlus = line.length() + 1;
			if (nextMinus == -1) nextMinus = line.length() + 1;
			if (nextEquals == -1) nextEquals = line.length() + 1;
			if (nextPlus < nextEquals && nextPlus < nextMinus)
		   	 {
				string variable = line.substr(0, nextPlus);
				if (variable.find("x") == -1) constants += side * stoi(variable) * sign;
				else {try {
					xs += side * -1 * stoi(variable) * sign;
				} catch (invalid_argument& e) {
					xs += side * -1 * sign;
				}}
				line = line.substr(nextPlus + 1);
				sign = POSITIVE;
			 }
			else if (nextMinus < nextPlus && nextMinus < nextEquals)
			 {
				string variable = line.substr(0, nextMinus);
				if (variable.find("x") == -1) constants += side * stoi(variable) * sign;
				else {try {
					xs += side * -1 * stoi(variable) * sign;
				} catch (invalid_argument& e) {
					xs += side * -1 * sign;
				}}
				line = line.substr(nextMinus + 1);
				sign = NEGATIVE;
			 }
			else if (nextEquals < nextPlus && nextEquals < nextMinus) {
				string variable = line.substr(0, nextEquals);
				line = line.substr(nextEquals + 1);
				if (variable.find("x") == -1) constants += side * stoi(variable) * sign;
				else {try {
					xs += side * -1 * stoi(variable) * sign;
				} catch (invalid_argument& e) {
					xs += side * -1 * sign;
				}
				}
				side = RIGHT;
				sign=POSITIVE;
			}
			else  {
				parsed = true;
				string variable = line;
				if (variable.find("x") == -1) constants += side * stoi(variable) * sign;
				else {try {xs += side * -1 * stoi(variable) * sign;
				} catch (invalid_argument& e) {
					xs += side * -1 * sign;
				}
				}
			}
		 }
		if (xs == 0 && constants == 0) {
			printf("IDENTITY\n");
		} else if (xs == 0) {
			printf("IMPOSSIBLE\n");
		} else {
			//printf("%d %d\n", xs, constants);
			double x = 1.0 * constants / xs;
			double result = 0;
			result = floor(x);
			printf("%d\n", int(result));
		}
	 }
 }
