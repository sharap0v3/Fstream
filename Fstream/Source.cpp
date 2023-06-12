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
			cout << "������� ��� " << i + 1 << " ��������: ";
			cin >> Dname;
			name << Dname << endl;
			//count
			cout << "������� ����-�� " << i + 1 << " ��������: ";
			cin >> Dcount;
			name << Dcount << endl;
			//price
			cout << "������� ���� " << i + 1 << " ��������: ";
			cin >> Dprice;
			name << Dprice << endl;
		}
	}
}

void print(ifstream& name, ifstream& count, ifstream& price)
{
	cout << "Id\t" << "��������\t" << "����-��\t" << "����";
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