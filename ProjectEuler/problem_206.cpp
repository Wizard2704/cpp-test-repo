#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool Uniqueness_check(long long x) {
	string number = to_string(x);
	if (number.size() % 2 == 0)
		return false;
	char count = '1';
	for (int i = 0; i < number.size(); i += 2) {
		if (count == ':')
			count = '0';
		if (number[i] == count)
			++count;
		else
			return false;
	}
	return true;
}


int main() {
	long long start_ = sqrt(10203040506070809);
	long long end_ = sqrt(19293949596979899);
	for (long long i = start_; i < end_; i++) {
		if(Uniqueness_check(i*i))
		cout << i << "0";
	}
}