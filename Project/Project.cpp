/* paid by hour vs salary

*/

#include <iostream>

using namespace std;

void printResult(int x, float yearly_Pay, int s_Amount);
void printDifference(int x, float hourly_Pay, float yearly_Pay, int s_Amount);
void printTax(int x, float hourly_Pay, float yearly_Pay, int s_Amount, int tax_Amount);


int main(){

	int workWeek = 40;
	int s_Amount = 0;
	float hourly_Pay = 0;
	float yearly_Pay = 0;
	int tax_Amount = 0;
	int sIsBigger = 0;

// get inputs
	cout << "This will calculate the more profitable job between salary paid\n and paid by the hour with 40 hour weeks" <<
	 ",3 weeks vacation,\n as well as the difference in pay per hour" << endl;

	cout << "Enter annual salary amount: ";
	cin >> s_Amount;

	cout << endl << "Enter hourly pay: ";
	cin >> hourly_Pay;

	cout << endl << "Income Tax Percentage: ";
	cin >> tax_Amount;


	yearly_Pay = (hourly_Pay * workWeek) * 49;

	if (yearly_Pay > s_Amount){
		sIsBigger = 0;
	}
	else if (yearly_Pay == s_Amount){
		sIsBigger = 2;
	}
	else{
		sIsBigger = 1;
	}

	cout << "Salary Amount: $" << s_Amount << endl;
	cout << "Hourly Pay Amount: $" << hourly_Pay << endl;
	cout << "Income Tax Percentage: " << tax_Amount << endl;

	printResult(sIsBigger, yearly_Pay, s_Amount);
	printDifference(sIsBigger, hourly_Pay, yearly_Pay, s_Amount);
	printTax(sIsBigger, hourly_Pay, yearly_Pay, s_Amount, tax_Amount);

	return 0;
} // main

void printResult(int x, float yearly_Pay, int s_Amount){
// prints the more profitable pay
	cout << "--------------------------------------------------------" << endl;
	if (x == 0){
		cout << "It is more profitable to get paid by the hour." << endl;
		cout << "The yearly pay is: $" << yearly_Pay << " compared to the annual salary of: $" << s_Amount << endl;
	}
	else if (x == 1){
		cout << "It is more profitable to get an annual salary." << endl;
		cout << "The salary is: $" << s_Amount << " compared to the yearly pay of: $" << yearly_Pay << endl;
	}
	else{
		cout << "The pay is the same for both jobs on an annual level." << endl;
	}
	cout << endl;
}

void printDifference(int x, float hourly_Pay, float yearly_Pay, int s_Amount){
// prints the difference of the salary and yearly pay
	cout << "--------------------------------------------------------" << endl;
	if (x == 0){
		cout << "The yearly pay is $" << (yearly_Pay - s_Amount) << " more than the salary." << endl;
	}
	else if (x == 1){
		cout << "The salary pay is $" << (s_Amount - yearly_Pay) << " more than the yearly pay." << endl;
	}
	else{
		cout << "There is no difference in pay." << endl;
	}
	cout << endl;
}

void printTax(int x, float hourly_Pay, float yearly_Pay, int s_Amount, int tax_Amount){
// prints the resulting numbers after taxes and the amount of tax taken in $$
	float s_tax = ((float)s_Amount / (float)tax_Amount);
	float y_tax = (yearly_Pay / (float)tax_Amount);
	cout << "--------------------------------------------------------" << endl;
	cout << "After a tax of " << tax_Amount << "% yearly pay yields: $" << (yearly_Pay - y_tax) << endl;
	cout << "Taxes taking: $" << y_tax << endl << endl;
	cout << "After a tax of " << tax_Amount << "% salary pay yields: $" << (s_Amount - s_tax) << endl;
	cout << "Taxes taking: $" << s_tax << endl << endl;
}
