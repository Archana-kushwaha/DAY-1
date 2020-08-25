#include <iostream>
using namespace std;

int main() {
	int FirstNumber, SecondNumber, SumOfNumber;
	cout << "enter the numbers:";
	cin >> FirstNumber >> SecondNumber;
	SumOfNumber = FirstNumber + SecondNumber;
	cout << FirstNumber << "+" << SecondNumber << "=" << SumOfNumber;
	return 0;
}