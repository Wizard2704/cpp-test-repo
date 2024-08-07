#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int>nums (101, 0);
	nums[0] = 1;
	nums[1] = 1;
	nums[2] = 2;
	nums[3] = 3;
	nums[4] = 5;
	nums[5] = 7;
	for (int i = 6; i < 101; ++i) {
		int m = 1;
		while (i - (m * (3 * m - 1)) / 2 >= 0) {
			if (i - ((m * (3 * m - 1)) / 2) < 0)
				break;
			nums[i] += pow(-1, m + 1) * (nums[i - ((m * (3 * m - 1)) / 2)]);
			if (i - ((m * (3 * m + 1)) / 2) < 0)
				break;
			nums[i] += pow(-1, m + 1) * (nums[i - ((m * (3 * m + 1)) / 2)]);
			++m;
		}
	}
	cout << nums[100] - 1;
}
