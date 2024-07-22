#include <iostream>
#include <vector>

using namespace std;

bool Simple_num(int num) {
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
	vector<int> odd;
	for (int i = 9; i < 10000; ++i) {
		int flag = 0;
		int num = 1;
		if (!Simple_num(i) && i % 2 == 1) {
			while (i - 2 * pow(num, 2) >= 0) {
				if (Simple_num(i - 2 * pow(num, 2))) {
					flag = 1;
					break;
				}
				++num;
			}
			if (flag == 0) {
				cout << i;
				break;
			}
		}
	}
}
