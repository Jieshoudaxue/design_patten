#include <iostream>
#include <string>
#include <memory>
#include <vector>
using namespace std;


int main() {
	int flag = 1;
	int i = 0;
	while (flag) {
		cout << rand() << endl;
		i++;

		if (i>10) {
			flag = 0;
		}
	}

	return 0;
}