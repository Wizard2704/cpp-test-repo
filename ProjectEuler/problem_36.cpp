#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

bool palindrom(int number) {
	string num_str = to_string(number);
	reverse(num_str.begin(), num_str.end());
	return to_string(number) == num_str;
}

bool binary(int number) {
	string bin_num;
	while (number != 0) {
		bin_num += number % 2 + '0';
		number /= 2;
	}
	string bin_num_rev = bin_num;
	reverse(bin_num_rev.begin(), bin_num_rev.end());
	return bin_num == bin_num_rev;
}

int main() {
	int number = 1;
	long long sum = 0;
	while (number < 1000000) {
		if (palindrom(number) && binary(number))
			sum += number;
		++number;
	}
	cout << sum;
}