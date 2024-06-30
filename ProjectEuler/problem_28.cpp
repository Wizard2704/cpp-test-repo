#include <iostream>

using namespace std;

int main()
{
	long long sum = 1;
	int num = 1;
	int n = 2;
	for (int i = 1; i < (2 * 1001) - 1; ++i) {
		sum += (n + num);
		num += n;
		if (i % 4 == 0)
			n += 2;
	}
	cout << sum;
}