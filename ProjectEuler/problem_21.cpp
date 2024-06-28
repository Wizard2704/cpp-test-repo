#include <iostream>

using namespace std;

int sum_divisors(int x)
{
	int sum = 0;
	for (int i = 1; i <= x / 2; ++i) {
		if (x % i == 0)
			sum += i;
	}
	return sum;
}

int main()
{
	int div1, div2;
	int sum_div = 0;

	for (int i = 1; i < 10000; ++i) {
		div1 = sum_divisors(i);
		div2 = sum_divisors(div1);
		if (div2 == i && div1 != i)
			sum_div += i;

	}
	cout << sum_div;
}