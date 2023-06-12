#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void menu(ofstream &name, ofstream &count, ofstream &price)
{
	cout << "\tMENU\t\n";

	
	string Dname;
	int Dcount, Dprice;
	if (name.is_open() && count.is_open() && price.is_open())
	{
		cout << "Files is open.\n";
		for (size_t i = 0; i < 3; i++)
		{
			//name
			cout << "Введите имя " << i + 1 << " продукта: ";
			cin >> Dname;
			name << Dname << endl;
			//count
			cout << "Введите колл-во " << i + 1 << " продукта: ";
			cin >> Dcount;
			name << Dcount << endl;
			//price
			cout << "Введите цену " << i + 1 << " продукта: ";
			cin >> Dprice;
			name << Dprice << endl;
		}
	}
}

void print(ifstream& name, ifstream& count, ifstream& price)
{
	cout << "Id\t" << "Название\t" << "Колл-во\t" << "Цена";
	for (size_t i = 0; i < 3; i++)
	{
		cout << i + 1 << '\t';
	}
}

int main()
{
	setlocale(LC_ALL , "ru");
	srand(time(NULL));

	ofstream name, count, price;
	name.open("name.txt");
	count.open("count.txt");
	price.open("price.txt");

	menu(name, count, price);
	name.close();
	count.close();
	price.close();


	ifstream iname, icount, iprice;
	name.open("name.txt", ios::in);
	count.open("count.txt", ios::in);
	price.open("price.txt", ios::in);

	print(iname, icount, iprice);
	iname.close();
	icount.close();
	iprice.close();


	return 0;
}