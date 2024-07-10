#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

bool static Pandigital(int num) {
	set<int>digit;
	int rem = 0;
	while (num != 0){
		rem = num % 10;
		if (rem == 0)
			return false;
		num /= 10;
		digit.insert(rem);
	}
	if (digit.size() == 9)
		return true;
	else
		return
		false;
}

int main() {
	long long max = 0;
	vector<int> nums = { 1,2,3,4,5,6,7,8,9 };
	string res;
	long long result = 0;
	for(int i = 1; i < 10000000; ++i){
		for (int j = 0; j < nums.size(); ++j) {
			res += to_string(i * nums[j]);
			if (res.size() >= 9) {
				break;
			}
		}
		if (res.size() == 9){
		result = stoll(res);
		if (Pandigital(result))
			if (result > max)
				max = result;

		res = "";
		result = 0;
		}
		else {
			res = "";
			result = 0;
			continue;
		}
	}
	cout << max;
}