#include<iostream>
#include<string>
#include<cmath>

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

bool cut_off_right(int num) {
	while (num != 0) {
		if (Simple_num(num))
			num /= 10;
		else
			return false;
		if(num == 1)
			return false;
	}
	return true;
}

bool cut_off_left(int num) {
	string number = to_string(num);
	int degree = number.size();
		while (num != 0) {
			if (Simple_num(num)){
				int rem = int(pow(10, degree));
				num = num % rem;
				--degree;
			}
			else
				return false;
			if (num == 1)
				return false;
		}
	return true;
}

int main() {
	int sum = 0;
	for (int i = 11; i < 1000000; ++i) {
		if (cut_off_right(i) && cut_off_left(i))
			sum += i;
	}
	cout << sum;
}