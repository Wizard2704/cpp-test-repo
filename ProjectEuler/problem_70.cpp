#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Number_coprime(int num) {
	int result = num;
	int i = 2;
		while (i * i <= num){
			if (num % i == 0){
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
	int num = 3;
	int min = 2;
	double min_ratio = 2;
	cout << Number_coprime(num);
	while (num < 10000000) {
		++num;
		if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
			continue;
		int corprime = Number_coprime(num);
		string str_num = to_string(num);
		string str_fnum = to_string(corprime);
		sort(str_num.begin(), str_num.end());
		sort(str_fnum.begin(), str_fnum.end());

		if (str_num  == str_fnum) {
			double ratio = num * 1.0 / corprime;
			if (ratio < min_ratio) {
				min_ratio = ratio;
				min = num;
			}
		}
		str_num = "";
		str_fnum = "";
		cout << num << endl;
	}
	cout << min; 
}