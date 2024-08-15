#include <iostream>

using namespace std;

int main() {
	int min = 2000000;
	int square = 0;
	for (int i = 1; i < 1000; ++i) {
		for (int j = 1; j < 1000; ++j) {
			int num = (i * (i + 1) / 2) * (j * (j + 1) / 2);
			if (abs(num - 2000000) < min) {
				min = abs(num - 2000000);
				square = i * j;
			}	
		}
	}
	cout << square;
}
