#include <iostream>
#include <vector>

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
	vector<long long> simple;
	long long num = 0;
	int count = 0;
	for (int i = 2; i < 50000000; ++i) {
		if (Simple_num(i))
			simple.push_back(i);
	}
	for (int i = 0; i < simple.size(); ++i) {
		for (int j = i; j < simple.size(); ++j) {
			num = long long(simple[i]) * long long(simple[j]);
			if (num < 100000000) {
				++count;
			}
			else
				break;
		}
	}
	cout << count;
}
