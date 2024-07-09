#include<iostream>
#include<vector>

using namespace std;

bool Jumping_num(long long num) {
	bool increasing = true;
	bool decreasing = true;
	vector<int>number;
	int rem = 0;
	while (num != 0) {
		rem = num % 10;
		num /= 10;
		number.push_back(rem);
	}
	for (int i = 0; i < number.size() - 1; ++i) {
		if (number[i] <= number[i + 1])
			continue;
		else {
			increasing = false;
			break;
		}
	}
	for (int i = 0; i < number.size() - 1; ++i) {
		if (number[i] >= number[i + 1])
			continue;
		else {
			decreasing = false;
			break;
		}
	}
	if (increasing || decreasing)
		return false;
	return true;
}

int main() {
	long long jump = 0;
	long long total = 100;

	while (total < 10000000) {
		if (Jumping_num(total))
			++jump;
		if (1.0 * jump / (total) == 0.99) {
			cout << total << endl;
			break;
		}
		++total;
	}
}