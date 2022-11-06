#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, x = 1;
	cout << "Nhap n: ";
	cin >> n;
	if (n < 2) {
		x = 0;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			x = 0;
		}
	}
	if (x == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
}
