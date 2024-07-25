#include <iostream>
#include <vector>
#include <set>

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
	set<int> myset;
	vector<int>simple;
	int sum = 0;
	for (int i = 2; i < 10000; ++i) {
		if (Simple_num(i))
			simple.push_back(i);
	}
	int count = 0;

	for (int i = 0; i < simple.size(); ++i) {
		for (int j = 0; j < simple.size(); ++j) {
			for (int k = 0; k < simple.size(); ++k) {
				if (pow(simple[i], 2) + pow(simple[j], 3) + pow(simple[k], 4) < 50000000)
					myset.insert(pow(simple[i], 2) + pow(simple[j], 3) + pow(simple[k], 4));
				else
					break;
			}
		}
	}
	cout << myset.size();
}
