#include <iostream>
#include <map>

using namespace std;

int static Euler_fun(int num) {
	map<int, int> num_del;
	int number = 2;
	int copy = num;
	while (copy != 1) {
		if (copy % number == 0) {
			num_del[number]++;
			copy /= number;
		}
		else
			++number;
	}
	int sum = 1;
	for (auto entry : num_del) {
		sum *= pow(entry.first, entry.second) - pow(entry.first, entry.second - 1);
	}
	return sum;
}

int main() {
	long long sum = 0;
	for (int i = 2; i <= 1000000; ++i) {
		sum += Euler_fun(i);
	}
	cout << sum;
}
