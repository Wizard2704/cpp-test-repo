#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
	vector<int>abundant;
	set<int>sum_abundant;
	int result = 0;
	int sum = 0;
	for (int i = 12; i < 28123; ++i) {
		int div = 1;
		sum = 0;
		while (div <= i / 2) {
			if (i % div == 0)
				sum += div;
			++div;
		}
		if (sum > i)
			abundant.push_back(i);
	}
	for (int i = 0; i < abundant.size(); ++i) {
		for (int j = 0; j < abundant.size(); ++j) {
			sum_abundant.insert(abundant[i] + abundant[j]);
		}
	}

	for (int i = 1; i < 28124; ++i) {
		if (!sum_abundant.count(i))
			result += i;
	}
	cout << result;
}