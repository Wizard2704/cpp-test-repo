#include<iostream>
#include<set>

using namespace std;

int Factorial(int num) {
	int fact = 1;
	for (int i = num; i > 1; --i) {
		fact *= i;
	}
	return fact;
}

int Separation_fact_sum(int num) {
	int sum = 0;
	int rem = 0;
	while (num != 0) {
		rem = num % 10;
		num /= 10;
		sum += Factorial(rem);
	}
	return sum;
}

int main() {
	set<int>summa;
	int count = 0;
	int number = 1;
	int sum = 0;
	while (number < 1000000) {
		summa.insert(number);
		int var = number;
		while(true){
		sum = Separation_fact_sum(var);
		if (summa.count(sum))
			break;
		else
			summa.insert(sum);
		if (summa.size() == 60)
			++count;
		var = sum;
		}
		++number;
		summa.clear();
	}	
	cout << count;
}