#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Number_coprime(int num) {
	int result = num;
	int i = 2;
	while (i * i <= num) {
		if (num % i == 0) {
			while (num % i == 0) {
				num /= i;
			}
			result -= result / i;
		}
		i++;
	}
	if (num > 1)
		result -= result / num;
	return result;
}

int main() {
	int num = 1;
	int max = 1;
	double max_ratio = 1;
	while (num < 1000000) {
		int corprime = Number_coprime(num);
			double ratio = num * 1.0 / corprime;
			if (ratio > max_ratio) {
				max_ratio = ratio;
				max = num;
			}
			++num;
	}
	cout << max;
}