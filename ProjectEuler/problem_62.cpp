#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int count = 0;
	vector<string> cube;
	string number;
	long long num = 0;
	int flag = 0;
	for (int i = 1; i < 10000; ++i) {
		num = pow(i, 3);
		number = to_string(num);
		sort(number.begin(), number.end());
		cube.push_back(number);
	}
	string res;
	for (int i = 0; i < cube.size() - 1; ++i) {
		count = 0;
		for (int j = cube.size() - 1; j > 0; --j) {
			if (cube[i] == cube[j])
				++count;
			if (count == 5){
				res = cube[i];
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	for (int i = 0; i < cube.size() - 1; ++i) {
		if (cube[i] == res){
			num = pow(i + 1, 3);
			cout << num;
			break;
		}
	}
}
