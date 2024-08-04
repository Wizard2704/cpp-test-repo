#include <iostream>

using namespace std;

bool static Simple_num(int num) {
	int limit = sqrt(num);
	int div = 2;
	while (div <= limit) {
		if (num % div == 0)
			return false;
		++div;
	}
	return true;
}

int main() {
	int len = 1;
	double ratio = 1;
	int number = 1;
	int term = 2;
	int count = 0;
	int simple_count = 0;
	while(ratio > 0.10){
		for (int i = 0; i < 4; ++i) {
			number += term;
			++count;
			if (Simple_num(number))
				++simple_count;
		}
		len += 2;
		term += 2;
		ratio = simple_count * 1.0 / count;
	}
	cout << len;
}
