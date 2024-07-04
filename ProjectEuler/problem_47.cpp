#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {
	vector<int>numbers;
	set<int>simple;
	int num = 2;
	for (int i = 100; i < 200000; i++) {
		int div = i;
		while (div != 1){
			if (div % num == 0){
				simple.insert(num);
				div /= num;
			}
			else
			++num;
		}
		if (simple.size() == 4)
			numbers.push_back(i);
		simple.clear();
		num = 2;
	}
	for (int i = 0; i < numbers.size() - 3; ++i) {
		if (numbers[i] == numbers[i + 1] - 1 && numbers[i] == numbers[i + 2] - 2 
			&& numbers[i] == numbers[i + 3] - 3){
			cout << numbers[i];
		}
	}
}