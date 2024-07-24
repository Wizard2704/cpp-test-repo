#include <iostream>
#include <string>
#include <set>

using namespace std;

bool palindrom(long long number) {
	string num_str = to_string(number);
	reverse(num_str.begin(), num_str.end());
	return to_string(number) == num_str;
}

int main() {
	set<int>newset;
	long long num = 0;
	for (long long i = 1; i < 100000; ++i) {
		if (i * i + ((i + 1) * (i + 1)) > 100000000) {
			num = i;
			cout << num << endl;
			break;
		}
	}
	long long result = 0;
	for (long long i = 1; i <= num - 1; ++i) {
		long long sum = i * i;
		for (long long j = i + 1; j <= num; ++j) {
			sum += j * j;
			if (sum > 100000000)
				break;
			if (palindrom(sum)) {
				newset.insert(sum);
			}
		}
	}
	for (int num : newset) {
		result += num;
	}
	cout << result;
}
