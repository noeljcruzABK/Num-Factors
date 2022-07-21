// Write a program to display all factors of a number provided by the user.
// Take an input of a positive value and write back all of the values factors.

#include <iostream>
#include <string>
using namespace std;

string getFactors(int num) {
	string factorList = "";

	for (int i = 1; i <= num; i++) {
		string factor = to_string(i);

		if (num == i) {
			factorList.append("and " + factor + ".");
		}
		else if (num % i == 0) {
			factorList.append(factor + ", ");
		}
	}
	return factorList;
}

int main()
{
	int input;

	cout << "- Factors of a Number -" << endl;
	cout << "Please enter a positive, whole number to see a list of its factors:" << endl;
	cin >> input;
	cout << "The factors of " << input << " are: " << getFactors(input) << endl;
}
