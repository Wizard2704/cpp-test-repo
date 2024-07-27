#include<iostream>
#include<set>

using namespace std;

int Sum_num(long long num) {
	int sum = 0;
	while (num != 0) {
		int rem = num % 10;
		num /= 10;
		sum += rem;
	}
	return sum;
}

int main() {
	int count = 0;
	set<unsigned long long> numbers;
	for (int i = 2; i <= 100; i++) {
		for (int j = 2; j <= 10; ++j)
			numbers.insert(pow(i, j));
	}

	for (auto num : numbers) {
		int degree = 2;
		while(true){
			int sum = Sum_num(num);
			if (sum == 1)
				break;
			if (num == pow(sum, degree)) {
				++count;
				break;
			}	
			if (num > pow(sum, degree))
				++degree;
			else
				break;
		}
		if (count == 30){
			cout << num;
			break;
		}
	}
}
