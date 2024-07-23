#include <iostream>
#include <string>

using namespace std;

int Reverse(long num) {
	string str = to_string(num);
	reverse(str.begin(), str.end());
	if (str[0] == '0')
		return 0;
	return stoi(str);
}

bool Check_odd(long num) {
	string str = to_string(num);
	for (char ch : str) {
		if (ch % 2 == 0)
			return false;
	}
	return true;
}

int main() {
	int count = 0;
	for (long i = 1; i < 100000000; ++i) {
		if (Check_odd(i + Reverse(i)))
			++count;
	}
	cout << count;
}
