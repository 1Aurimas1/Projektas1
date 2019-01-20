#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string base(".txt");
	for (int i = 1; i <= 5; ++i) {
		ofstream(to_string(i) + base);
	}
	return 0;
}
