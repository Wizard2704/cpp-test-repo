#include<iostream>

using namespace std;

bool Simple_num(int num) {
	int number = 2;
	while (num != 1) {
		if (num % number == 0)
			return false;
		else
			++number;
		if (number > sqrt(num))
			return true;
	}
	return true;
}

int main() {
	int n = 0;
	int a = -999;
	int b = -1000;
	int max_simple = 0;
	int simple = 0;
	int max = 0;
	int result = 0;

	for (int i = a; i < 1000; ++i) {
		for (int j = b; j <= 1000; ++j) {
			max_simple = 0;
			n = 0;
			while (true) {
				simple = n * n + i * n + j;
				if (Simple_num(abs(simple)))
					++max_simple;
				else
					break;
				++n;
			}
			if (max_simple > max) {
				max = max_simple;
				result = i * j;
			}
		}
	}
	cout << result;
}