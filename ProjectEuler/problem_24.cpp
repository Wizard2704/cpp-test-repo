#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
	int count = 0;
	string str = "0123456789";
	do {
		++count;
		if (count == 1000000) {
			cout << str;
			break;
		}
	} while (next_permutation(str.begin(), str.end()));
}
