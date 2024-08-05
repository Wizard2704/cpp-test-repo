#include <iostream>
#include <map>
#include <string>

using namespace std;

bool static palindrom(long long number) {
	string num_str = to_string(number);
	reverse(num_str.begin(), num_str.end());
	return to_string(number) == num_str;
}

int main() {
	long long number = 0;
	map<long long, int> nums;
	for (int i = 2; i < 30000; ++i) {
		for (int j = 2; j < 2500; ++j) {
			number = i * i + j * j * j;
			if (palindrom(number))
				nums[number]++;
		}
	}
	long long sum = 0;
	int count = 0;
	for (auto entry : nums) {
		if (entry.second == 4){
			sum += entry.first;
			++count;
		}
		if (count == 5)
			break;
	}

	cout << sum;
}
