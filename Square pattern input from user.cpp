#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter your number yo want to print:";
	cin >> n;
	//outer loop
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			cout << i << " ";
}
		cout << endl;
	}
	system("pause");
	return 0;
}