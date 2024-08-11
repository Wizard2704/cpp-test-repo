#include <iostream>
#include <vector>

using namespace std;

vector<int> static Summa(vector<int> vec1, vector<int> vec2) {
	int rem = 0;
	for (int i = vec2.size() - 1; i >= 0; --i) {
		int copy = vec2[i];
		vec2[i] = (vec1[i] + vec2[i] + rem) % 10;
		rem = (vec1[i] + copy + rem) / 10;
	}
	return vec2;
}

vector<int>static Multiplication(vector<int> vec1, int n) {
	int rem = 0;
		for (int i = vec1.size() - 1; i >= 0; --i) {
			int copy = vec1[i];
			vec1[i] = (n * vec1[i] + rem) % 10;
			rem = (n * copy + rem) / 10;
		}
	return vec1;
}

int main() {
	vector<int> vec1 (500,0);
	vec1.push_back(3);
	vector<int> vec2 (500,0);
	vec2.push_back(2);
	int count = 0;

	for (int i = 0; i < 1000; ++i) {
		int flag = 0;
		int flag1 = 0;
		int count_numerator = 0;
		int count_denominator = 0;
		for (int j = 0; j < vec1.size(); ++j) {
			if (vec1[j] == 0 && flag == 0)
				continue;
			else {
				flag = 1;
				++count_numerator;
			}
		}
		for (int n = 0; n < vec2.size(); ++n) {
			if (vec2[n] == 0 && flag1 == 0)
				continue;
			else {
				flag1 = 1;
				++count_denominator;
			}	
		}
		if (count_numerator > count_denominator)
			++count;
		vector<int> copy = vec1;
		vec1 = Summa(vec1, Multiplication(vec2, 2));
		vec2 = Summa(copy, vec2);
	}
	cout << count;
}
