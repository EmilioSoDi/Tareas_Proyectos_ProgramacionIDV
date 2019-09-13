#include "Debug/Includes.h"
int main()
{
	
	//2.miles to kilometers
	cout << "II. Miles to Kilometers\n";
	double miles = 0;
	double kilometers = 0;
	cout << "Enter how many miles: ";
	cin >> miles;
	kilometers = miles * 1.609;
	cout << miles << " miles are " << kilometers << " kilometers\n\n";
	

	/*
	3.Ilegal variables
	int float = 3.1;
	int double = 0;
	char int = 'x';
	long long = 400;
	*/


	
	//4. Smaller, larger, sum, difference, product, ratio
	cout << "IV. Smaller, larger, sum, difference, product, ratio\n";
	int val1 = 0;
	int val2 = 0;
	int sum = 0;
	int differ = 0;
	int product = 0;
	float ratio = 0;
	cout << "Enter value 1: ";
	cin >> val1;
	cout << "Enter value 2: ";
	cin >> val2;
	if (val1 == val2)
		cout << "Same value, no larger or smaller\n";
	else
		differ = val1 - val2;
	if (val1 > val2)
		cout << val1 << " is larger and " << val2 << " is smaller\n";
	else if (val1 < val2)
		cout << val1 << " is smaller and " << val2 << " is larger\n";
	sum = val1 + val2;
	product = val1 * val2;
	ratio = val1 / val2;
	cout << "sum of val1 and val2 is " << sum << endl << "difference of val1 and val2 is " << differ << endl
		<< "product of val1 and val2 is " << product << endl << "ratio of val1 and val2 is "
		<< ratio << " or " << val1 << " : " << val2 << endl << endl;
	

	
	//5. Number 4. but with doubles
	cout << "V. Smaller, larger, sum, difference, product, ratio. WITH DOUBLES\n";
	double val1_double = 0;
	double val2_double = 0;
	double sum_double = 0;
	double differ_double = 0;
	double product_double = 0;
	double ratio_double = 0;
	cout << "Enter value 1: ";
	cin >> val1_double;
	cout << "Enter value 2: ";
	cin >> val2_double;
	if (val1_double == val2_double)
		cout << "Same value, no larger or smaller\n";
	else
		differ = val1_double - val2_double;
	if (val1_double > val2_double)
		cout << val1_double << " is larger and " << val2_double << " is smaller\n";
	else if (val1_double < val2_double)
		cout << val1_double << " is smaller and " << val2_double << " is larger\n";
	sum_double = val1_double + val2_double;
	product_double = val1_double * val2_double;
	ratio_double = val1_double / val2_double;
	cout << "sum of val1 and val2 is " << sum_double << endl << "difference of val1 and val2 is " << differ_double << endl
		<< "product of val1 and val2 is " << product_double << endl << "ratio of val1 and val2 is "
		<< ratio_double << " or " << val1_double << " : " << val2_double << endl << endl;
	


	
	//6. reorder 3 ints
	cout << "VI. Ints in order\n";
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int first_number = 0;
	int second_number = 0;
	int third_number = 0;
	cout << "enter 3 int values\n";
	cin >> number1; cin >> number2; cin >> number3;
	if ((number1 < number2) && (number1 < number3))
	{
		first_number = number1;
		if (number2 < number3)
		{
			second_number = number2;
			third_number = number3;
		}
		else
		{
			third_number = number2;
			second_number = number3;
		}
	}
	if ((number2 < number1) && (number2 < number3))
	{
		first_number = number2;
		if (number2 < number3)
		{
			second_number = number1;
			third_number = number3;
		}
		else
		{
			third_number = number1;
			second_number = number3;
		}
	}
	if ((number3 < number1) && (number3 < number2))
	{
		first_number = number3;
		if (number1 < number2)
		{
			second_number = number1;
			third_number = number2;
		}
		else
		{
			third_number = number1;
			second_number = number2;
		}
	}
	if (number1 == number2)
	{
		if (number1 < number3)
		{
			first_number = number1;
			second_number = number2;
			third_number = number3;
		}
		else
		{
			first_number = number3;
			second_number = number1;
			third_number = number2;
		}

	}
	else if (number2 == number3)
	{
		if (number2 < number1)
		{
			first_number = number2;
			second_number = number3;
			third_number = number1;
		}
		else
		{
			first_number = number1;
			second_number = number2;
			third_number = number3;
		}
	}
	else if (number1 == number3)
	{
		if (number1 < number2)
		{
			first_number = number1;
			second_number = number3;
			third_number = number2;
		}
		else
		{
			first_number = number2;
			second_number = number1;
			third_number = number3;
		}
	}
	cout << first_number << ", " << second_number << ", " << third_number << endl << endl;
	

	
	//7. reorder 3 strings
	cout << "VII. Strings in order\n";
	string word1 = " ";
	string word2 = " ";
	string word3 = " ";
	string first_word = " ";
	string second_word = " ";
	string third_word = " ";
	cout << "enter 3 strings\n";
	cin >> word1; cin >> word2; cin >> word3;
	if ((word1 < word2) && (word1 < word3))
	{
		first_word = word1;
		if (word2 < word3)
		{
			second_word = word2;
			third_word = word3;
		}
		else
		{
			third_word = word2;
			second_word = word3;
		}
	}
	if ((word2 < word1) && (word2 < word3))
	{
		first_word = word2;
		if (word2 < word3)
		{
			second_word = word1;
			third_word = word3;
		}
		else
		{
			third_word = word1;
			second_word = word3;
		}
	}
	if ((word3 < word1) && (word3 < word2))
	{
		first_word = word3;
		if (word1 < word2)
		{
			second_word = word1;
			third_word = word2;
		}
		else
		{
			third_word = word1;
			second_word = word2;
		}
	}
	if (word1 == word2)
	{
		if (word1 < word3)
		{
			first_word = word1;
			second_word = word2;
			third_word = word3;
		}
		else
		{
			first_word = word3;
			second_word = word1;
			third_word = word2;
		}

	}
	else if (word2 == word3)
	{
		if (word2 < word1)
		{
			first_word = word2;
			second_word = word3;
			third_word = word1;
		}
		else
		{
			first_word = word1;
			second_word = word2;
			third_word = word3;
		}
	}
	else if (word1 == word3)
	{
		if (word1 < word2)
		{
			first_word = word1;
			second_word = word3;
			third_word = word2;
		}
		else
		{
			first_word = word2;
			second_word = word1;
			third_word = word3;
		}
	}
	cout << first_word << ", " << second_word << ", " << third_word << endl << endl;
	


	
	//8. odd or even
	cout << "VIII. Odd or Even\n";
	int x = 0;
	cout << "Enter a number to see if its odd or even: ";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << "The value " << x << " is an EVEN number\n\n";
	}
	else
		cout << "The value " << x << " is an ODD number\n\n";
	

	
	//9.string to int
	cout << "IX. Convert speelled out numbers (0 - 4) to digits\n";
	string spelled_number = " ";
	cout << "spell a number from 0 to 4: ";
	cin >> spelled_number;
	if (spelled_number == "zero")
	{
		cout << "0\n";
	}
	if (spelled_number == "one")
	{
		cout << "1\n";
	}
	if (spelled_number == "two")
	{
		cout << "2\n";
	}
	if (spelled_number == "three")
	{
		cout << "3\n";
	}
	if (spelled_number == "four")
	{
		cout << "4\n";
	}
	else if ((spelled_number != "zero") && (spelled_number != "one") && (spelled_number != "two")
		&& (spelled_number != "three") && (spelled_number != "four"))
	{
		cout << "Not a number I know\n\n";
	}
	

	
	//10. operation
	cout << "X.Operation and operands\n";
	double operand1 = 0;
	double operand2 = 0;
	string operation = " ";
	cout << "Enter an operator (+ or *), and 2 values ex: '+ 100 3.14'\n";
	cin >> operation >> operand1 >> operand2;
	if ((operation != "+") && (operation != "*"))
	{
		cout << "invalid operation\n\n";
	}
	if (operation == "+")
	{
		cout << operand1 + operand2 << endl << endl;
	}
	if (operation == "*")
	{
		cout << operand1 * operand2 << endl << endl;
	}
	


	//11. Ammount in money
	cout << "XI. Total ammount of coins\n";
	int pennies = 0;
	int nickles = 0;
	int dimes = 0;
	int quarters = 0;
	int half_dollars = 0;
	double dollars = 0;
	cout << "How many pennies do you have? ";
	cin >> pennies;
	cout << "How many nickles do you have? ";
	cin >> nickles;
	cout << "How many dimes do you have? ";
	cin >> dimes;
	cout << "How many quarters do you have? ";
	cin >> quarters;
	cout << "How many half dollars do you have? ";
	cin >> half_dollars;
	if (pennies == 1)
	{
		cout << "You have 1 penny\n";
	}
	else
	{
		cout << "Youe have " << pennies << " pennies\n";
	}
	if (nickles == 1)
	{
		cout << "You have 1 nickle\n";
	}
	else
	{
		cout << "Youe have " << nickles << " nickles\n";
	}
	if (dimes == 1)
	{
		cout << "You have 1 dime\n";
	}
	else
	{
		cout << "Youe have " << dimes << " dimes\n";
	}
	if (quarters == 1)
	{
		cout << "You have 1 quarter\n";
	}
	else
	{
		cout << "Youe have " << quarters << " quarters\n";
	}
	if (half_dollars == 1)
	{
		cout << "You have 1 half_dollar\n";
	}
	else
	{
		cout << "Youe have " << half_dollars << " half dollars\n";
	}
	nickles *= 5;
	dimes *= 10;
	quarters *= 25;
	half_dollars *= 50;
	dollars = (pennies + nickles + dimes + quarters + half_dollars);
	dollars /= 100;
	cout << "The value of all your coins is $" << dollars << endl;
	keep_window_open();
}