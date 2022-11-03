#include <iostream>
#include <math.h>
using namespace std;

void checkSoNT(int a) {
	int x = 1;
	for (int i= 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			x = 0;
		}
	}
	if (x == 1) {
		cout << a << " ";
	}
}


int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		checkSoNT(i);
	}
}