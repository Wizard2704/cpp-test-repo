#include<iostream>
#include<vector>

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
	vector<int>simple_num;
	int max = 0;
	int len = 0;
	simple_num.push_back(2);
	int count = 3;
	int numbers = 1;
	while (count < 50000) {
		if (Simple_num(count))
			simple_num.push_back(count);
		++count;
	}
	int sum = 0;
	for (int i = 0; i < simple_num.size() - 1; ++i) {
		sum = simple_num[i];
		numbers = 1;
		for (int j = i + 1; j < simple_num.size(); ++j) {
			sum += simple_num[j];
			++numbers;
			if (sum > 1000000)
				break;
			if (Simple_num(sum)) {
				if (numbers > len) {
					len = numbers;
					max = sum;
				}
			}
		}
	}

	cout << max << "  " << len;
	return 0;
}