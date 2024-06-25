#include <iostream>
#include <vector>


using namespace std;

int main() {
	int count_divider = 1;
	vector <int> degree;
	int count = 1;
	int triangular_number = 1;
	int simple = 2;
	int j = 1;
	int result = 0;
	while (true) {
		triangular_number = j * (j + 1) / 2;
		result = triangular_number;
		while (triangular_number != 1) {
			if (triangular_number % simple == 0) {
				triangular_number /= simple;
				++count;

			}
			else {
				++simple;
				degree.push_back(count);
				count = 1;
			}
		}
		degree.push_back(count);
		for (int i = 0; i < degree.size(); ++i)
			count_divider *= degree[i];
		if (count_divider > 500) {
			cout << result;
			break;
		}
		degree.clear();
		triangular_number = 0;
		count_divider = 1;
		count = 1;
		simple = 2;
		++j;
	}
}