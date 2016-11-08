#include<iostream>
using namespace std;
int Ffinder(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		return x*Ffinder(x - 1);
	}
	
}
int main() {
	cout << Ffinder(7) << endl;
	cin.get();
	return 0;
}