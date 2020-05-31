#include <iostream>
#include "list.h"
using namespace std;

void main()
{
	int choose, position;
	list<string, int, double> list;
	cout << "1.Add new Record.\n";
	cout << "2.Delete Record.\n";
	cout << "3.Display Record.\n";
	cout << "4.Search Record By ID.\n";
	cout << "5.Sort Product By ID.\n";
	cout << "6.Exit\n";
	cout << "choice : ";
	cin >> choose;


	while (choose != 6)
	{
		system("cls");
		if (choose == 1)
		{
			list.addRecordInput();
		}
		else if (choose == 2)
		{
			cout << "Choose Position Record : ";
			cin >> position;
			list.deleteRecord(position);
		}
		else if (choose == 3)
		{
			list.displayRecord();
		}

		else if (choose == 4)
		{
			list.searchRecord();
		}
		/*
		else if (choose == 5)
		{
			list.sortname();
		}

		else
		{
			cout << "You Enter Wrong Input. :) ";
		}
		*/

		system("cls");
		cout << "1.Add new Record.\n";
		cout << "2.Delete Record.\n";
		cout << "3.Display Record.\n";
		cout << "4.Search Record By ID.\n";
		cout << "5.Sort Product By ID.\n";
		cout << "6.Exit\n";
		cout << "choice : ";
		cin >> choose;


	}




	system("pause");

}


