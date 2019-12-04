#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

string test = "test";

int main() {

	string napis;
	cin >> napis;

	string test2 = strstr(test, napis);

	cout << test2;
	return 0;
}
