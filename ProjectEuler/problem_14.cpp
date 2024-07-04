#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int>number(1000001, 0);
	number[1] = 1;
	vector<long long>result;
	long long n = 0;
	for (long long i = 2; i < 1000000; ++i) {
		n = i;
		result.clear();
		result.push_back(n);
<<<<<<< HEAD

		while (!(n < 1000000 && number[n] != 0)) {
			if (n % 2 == 0)
				n /= 2;
			else
				n = 3 * n + 1;
			result.push_back(n);
		}
		int count = number[n];
		for (int j = result.size() - 2; j >= 0; --j) {
			++count;
			long long num1 = result[j];
			if (num1 < 1000000)
				number[num1] = count;
		}
	}
	n = 0;
	int max = 1;
	for (int i = 1; i < 1000000; ++i) {
		if (max < number[i]) {
			max = number[i];
			n = i;
		}
	}
	cout << n;
}

=======

		while (!(n < 1000000 && number[n] != 0)) {
			if (n % 2 == 0)
				n /= 2;
			else
				n = 3 * n + 1;
			result.push_back(n);
		}
		int count = number[n];
		for (int j = result.size() - 2; j >= 0; --j) {
			++count;
			long long num1 = result[j];
			if (num1 < 1000000)
				number[num1] = count;
		}
	}
	n = 0;
	int max = 1;
	for (int i = 1; i < 1000000; ++i) {
		if (max < number[i]) {
			max = number[i];
			n = i;
		}
	}
	cout << n;
}
>>>>>>> 173663c6cade0f99d0c75df7ae76e520196235f5
