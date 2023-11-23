#include<iostream>
using namespace std;
int main()
{
	int salary, bonus;
	int rating;
	int i = 1;
	int increement = 0.10, bonusinc = 0.2;// 10% incremeent, // 2 % bonus increement 
	cout << "Enter your salary: ";
	cin >> salary;
	cout << "Enter performance rating(1-10): ";
	cin >> rating;
	char choice = 'y';
	while (choice == 'y' || choice == 'Y')
	{
		increement = salary * 0.10;
		salary = salary + increement;
		cout << "Your salary after Year " <<i<<" is: " << salary << endl;
		if (rating > 5)
		{
			bonus = (salary * 5 / 100) + salary;
			cout << "Your salary after performance bonus for Year " <<i<<" is: "<< bonus << endl;
		}
		cout << "Do you wish to continue (y or n): " << endl;
		cin >> choice;
		i++;
	}
}