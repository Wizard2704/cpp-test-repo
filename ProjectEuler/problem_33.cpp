#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i < 10; ++i) {
		for (int j = 1; j < 10; ++j) {
			for (int k = 1; k < 10; ++k) {
				for (int l = 1; l < 10; ++l) {
					if (i == k) {
						if (double(i * 10 + j) / double(k * 10 + l) == double(j * 1.0 / l))
							if(i * 10 + j != k * 10 + l && i * 10 + j < k * 10 + l)
							cout << i * 10 + j << " / " << k * 10 + l << endl;
						}
					if(i == l) {
						if (double(i * 10 + j) / double(k * 10 + l) == double(j * 1.0 / k))
							if (i * 10 + j != k * 10 + l && i * 10 + j < k * 10 + l)
							cout << i * 10 + j << " / " << k * 10 + l << endl;
					}
					if(j == k) {
						if (double(i * 10 + j) / double(k * 10 + l) == double(i * 1.0 / l))
							if (i * 10 + j != k * 10 + l && i * 10 + j < k * 10 + l)
							cout << i * 10 + j << " / " << k * 10 + l << endl;
					}
					if(j == l) {
						if (double(i * 10 + j) / double(k * 10 + l) == double(i * 1.0 / k))
							if (i * 10 + j != k * 10 + l && i * 10 + j < k * 10 + l)
							cout << i * 10 + j << " / " << k * 10 + l << endl;
					}
							
				}
			}
		}
	} 
}
