#include <iostream>
using namespace std;

int main() {
	int arr[100];
	int n, nguyen, du;
	int dem = 0;

	cout << "Nhap so thap phan: ";
	cin >> n;

	nguyen = n;

	// Check so lan chia
	while (n > 0) {
		n /= 2;
		dem++;
	}

	for (int i = 0; i < dem; i++) {
		du = nguyen % 2;
		arr[dem - i - 1] = du;
		nguyen /= 2;
	}

	for (int i = 0; i < dem; i++) {
		cout << arr[i];
	}
}
