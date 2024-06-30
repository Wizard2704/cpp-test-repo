#include<iostream>

using namespace std;

int factorial(int x) {
	if (x == 0 || x == 1)
		return 1;
	for (int i = x - 1; i > 1; --i) {
		x *= i;
	}
	return x;
}

int main()
{

	int result = 0;
	for (long long i = 3; i < 999999; ++i) {
		long long num = i;
		int rem = 0;
		long long sum = 0;
		while (num != 0) {
			rem = num % 10;
			num /= 10;
			sum += factorial(rem);
		}
		if (i == sum)
			result += sum;
	}
	cout << result;
 }
