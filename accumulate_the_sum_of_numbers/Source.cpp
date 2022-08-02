#include <iostream>
#include <cctype>
#include <format>
using namespace std;

int main() {
	int counter{};
	float sum{};
	float average {};
	float input{};

	cout << "This program will calculate the sum and average of numbers. Enter your first number: ";

	bool input_yes{ true };

	while (input_yes==true) {
		++counter;
		cin >> input;
		sum += input;
		average = static_cast<float>( sum / counter);

		char yes_no{};
		cout << "Would you like to enter a new number? (y/n): ";
		cin >> yes_no;
		switch (tolower(yes_no)) {
		case 'y':
			input_yes= true;
			break;
		case 'n':
			input_yes= false;
			cout << format("The sum of entered numbers is {} and the average is {}", sum, average);
			break;
		default:
			cout << "Invalid input, try again: ";
			cin >> yes_no;
			break;
		}
	}




	return 0;
}