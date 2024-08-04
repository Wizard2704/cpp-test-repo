#include <iostream>

using namespace std;

int gcd(int x, int y)
{
	return y ? gcd(y, x % y) : x;
}

int main() {
	long long side_a = 0;
	long long side_b = 0;
	long long sum = 0;

	for (long long i = 1; i < 20000; i += 2) {
		for (long long j = 1; j < 20000; j += 2) {
			if (i == j)
				continue;
			if (gcd(i, j) == 1 && i > j) {
				side_a = 2 * i * j;
				side_b = (i * i + j * j) / 2;
				if (side_a - side_b == 1)
					sum += side_a + side_b + side_b;
			}
		}
		if (side_a + side_b + side_b > 1000000000)
			break;
	}

	for (long long i = 1; i < 20000; i += 2) {
		for (long long j = 1; j < 20000; j += 2) {
			if (i == j)
				continue;
			if (gcd(i, j) == 1) {
				side_a = i * i - j * j;
				side_b = (i * i + j * j) / 2;
				if (side_b - side_a == 1)
					sum += side_a + side_b + side_b;
			}
		}
		if (side_a + side_b + side_b > 1000000000)
			break;
	}
	cout << sum;
}
