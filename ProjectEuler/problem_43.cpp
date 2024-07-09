#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool Checking_conditions(string str) {
	int count = 0;
	string str1 = str.substr(1,3);
	int condition1 = stoi(str1);
	if (condition1 % 2 == 0)
		++count;
	string str2 = str.substr(2, 3);
	int condition2 = stoi(str2);
	if (condition2 % 3 == 0)
		++count;
	string str3 = str.substr(3, 3);
	int condition3 = stoi(str3);
	if (condition3 % 5 == 0)
		++count;
	string str4 = str.substr(4, 3);
	int condition4 = stoi(str4);
	if (condition4 % 7 == 0)
		++count;
	string str5 = str.substr(5, 3);
	int condition5 = stoi(str5);
	if (condition5 % 11 == 0)
		++count;
	string str6 = str.substr(6, 3);
	int condition6 = stoi(str6);
	if (condition6 % 13 == 0)
		++count;
	string str7 = str.substr(7, 3);
	int condition7 = stoi(str7);
	if (condition7 % 17 == 0)
		++count;

	if (count == 7)
		return true;
	else
		return false;
}

int main() {
	long long sum = 0;
	string name = "1234567890";
	do {
		if (Checking_conditions(name))
			sum += stoll(name);
	} while (next_permutation(name.begin(), name.end()));
	cout << sum;
}