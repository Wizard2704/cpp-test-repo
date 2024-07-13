#include<iostream>
#include<string>
#include<set>
#include <algorithm> 
#include<vector>

using namespace std;

long long reverse(long long num) {
	string str_num = to_string(num);
	reverse(str_num.begin(), str_num.end());
	long long num_rev = stoll(str_num);
	return num_rev;
}

bool Simple_num(long long num) {
	long long limit = sqrt(num);
	long long div = 2;
	while (div <= limit) {
		if (num % div == 0)
			return false;
		++div;
	}
	return true;
}

bool Palindrom_check(long long num) {
	string str_num = to_string(num);
	for (int i = 0; i < str_num.size() / 2; ++i) {
		if (str_num[i] != str_num[str_num.size() - 1 - i])
			return false;
	}
	return true; 
}

int main() {
	set<long long> simple_nums;
	set<long long> reverse_num;
	int count = 0;
	long long sum = 0;
	
	for (long long i = 5; i < 100000000; ++i) {
		if (Simple_num(i))
			simple_nums.insert(i * i);
	}
	for (long long num : simple_nums) {
		if(simple_nums.count(reverse(num))){
			reverse_num.insert(num);
			reverse_num.insert(reverse(num));
		}
	}
	for (long long num : reverse_num) {
		if (!Palindrom_check(num)) {
			++count;
			sum += num;
		}
		if (count == 50) {
			cout << sum;
			break;
		}
	}
}