#include<iostream>
#include<string>
#include<cmath>

using namespace std;

bool Simple_num(int num) {
	int limit = sqrt(num);
	int div = 2;
	while (div <= limit) {
		if (num % div == 0)
			return false;
		++div;
	}
	return true;
}

bool Circular_number(int num) {
	int size = to_string(num).size();
	string str_number;
	int int_number = 0;
	int count = 0;
	string conc_two_num = to_string(num) + to_string(num);

	for (int i = 0; i < size; ++i) {
		for (int j = i; j < size + i ; ++j) {
			str_number += conc_two_num[j];
		}
		int_number = stoi(str_number);
		if (Simple_num(int_number))
			++count;
		str_number = "";
	}
	if (count == size)
		return true;
	else
		return false;
}


int main() {
	int circles_of_numbers = 0;
	int total = 1000000;
	while (total != 1) {
		if (Circular_number(total))
			++circles_of_numbers;
		--total;
	}
	cout << circles_of_numbers;
	
}