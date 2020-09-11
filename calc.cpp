#include <iostream>

using std::system; using std::cout; using std::endl; using std::cin;

int operation;
char choice;
double firstvalue, secondvalue;
bool isvalue = false;

void operations()
{
		for (bool i = true; i == true;)
		{
			system("cls");
			switch (operation)
			{
			case 1:
				firstvalue *= secondvalue;
				break;
			case 2:
				firstvalue /= secondvalue;
				break;
			case 3:
				firstvalue += secondvalue;
				break;
			case 4:
				firstvalue -= secondvalue;
				break;
			default:
				cout << "Error!" << endl;
				exit(1);
			}
			cout << "Result: \"" << firstvalue << "\", Continue? y/n" << endl;
			cin >> choice;
			switch (choice)
			{
			case 'y':
				cout << "Enter 2nd value:" << endl;
				cin >> secondvalue;
				system("cls");
				break;
			case 'n':
				i = false;
				break;
			}
		}
}

void select_values()
{
	cout << "Enter 2 values: " << endl;
	cin >> firstvalue >> secondvalue;
	operations();
}

void value_exists()
{
	cout << "Enter 2nd value:" << endl;
	cin >> secondvalue;
	operations();
}

void commands()
{
	switch (isvalue)
	{
	case true:
		cout << "Do you want to replace existing value \"" << firstvalue << "\"? y/n" << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 'y':
			select_values();
			break;
		case 'n':
			value_exists();
			break;
		}
		break;
	case false:
		select_values();
		break;
	}
}

int main()
{
	while (true)
	{
		cout << "Choose the command:\n" << "1. Multiplication\n2. Segmentation\n3. Sum\n4. Difference" << endl;
		cin >> operation;
		system("cls");
		commands();
		system("cls");
		isvalue = true;
	}
}