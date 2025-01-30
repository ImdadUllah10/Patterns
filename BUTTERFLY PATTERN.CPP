#include<iostream>
using namespace std;
int main() {
	//BUTTERFLY PATTREN
	int n = 4;

	//outer loop for (1 to n):
	for (int i = 1;i < n;i++) {
		//inner loop
		for (int j = 1;j <= i;j++) {
			cout << "*";


	}
	for (int j = 1;j<=2*(n-i);j++) {
		cout << " ";
	}
   for (int j = 1;j <= i;j++) {
	  cout << "*";
}
  cout << endl;
  }
  //lower half
		//outer loop for (n to 1):
	for (int i = n;i>=1;i--) {
		//inner loop
		for (int j = 1;j <= i;j++) {
			cout << "*";
		
	}
	for (int j = 1;j <= 2 * (n - i);j++) {
		cout << " ";
}
for (int j = 1;j <= i;j++) {
	cout << "*";
}
cout << endl;
  }
	system("pause");
	return 0;
}