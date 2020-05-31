/*

#ifndef LIST_H
#define LIST_H
#include <string>
#include <iostream>
using namespace std;

template<class T, class U, class V>
class list {
private:

	struct Node {
		T Title;
		T Name;
		U ID;
		U Age;
		V GPA;
		Node* next;
	};

public:
	int count = 0;
	Node* head, * tail, * temp;
	list();

	void addRecord(T Title, T name, U ID, U Age, V GPA);
	void addRecordInput();
	void deleteRecord(int position);
	void displayRecord();
	void searchRecord();
};

#endif // !LIST_H
*/

#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <string>
using namespace std;


template<class T, class U, class V>
class list {
private:

	struct Node {
		T Title;
		T Name;
		U ID;
		U Age;
		V GPA;
		Node* next;
	};

public:
	int count = 0;
	Node* head, * tail, * temp;
	list();

	void addRecord(T Title, T name, U ID, U Age, V GPA);
	void addRecordInput();
	void deleteRecord(int position);
	void displayRecord();
	void searchRecord();
};


template<class T, class U, class V>
list<T, U, V>::list()
{
	temp = NULL;
	head = NULL;
	tail = NULL;
}

//template <class T,class T,class V>
//list<T,U,V>::~list() {}

template<class T, class U, class V>
void list<T, U, V>::addRecord(T Title, T name, U ID, U Age, V GPA)
{
	Node* Temp = new Node;
	temp->Title = Title;
	temp->Name = name;
	temp->ID = ID;
	temp->Age = Age;
	temp->GPA = GPA;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

template<class T, class U, class V>
void list<T, U, V>::addRecordInput()
{
	T Title;
	T Name;
	U ID;
	U Age;
	V GPA;

	cin.ignore();
	cout << "Enter Record Title : ";
	getline(cin, Title);
	cout << "Enter Name : ";
	getline(cin, Name);
	cout << "Enter ID : ";
	cin >> ID;
	cout << "Enter Age : ";
	cin >> Age;
	cout << "Enter GPA : ";
	cin >> GPA;

	addRecord(Title, Name, ID, Age, GPA);

	system("cls");
	displayRecord();

}

template<class T, class U, class V>
void list<T, U, V>::deleteRecord(int position)
{
	Node* current = new Node;
	Node* previous = new Node;
	Node* next = new Node;

	current = head;

	if (position > count)
	{
		cout << "Invalid position!";
		return;
	}
	for (int i = 1; i < position; i++)
	{
		if (current == NULL)
		{
			return;
		}
		previous = current;
		current = current->next;
	}

	if (position == count)
	{
		previous->next = current->next;
		tail = previous;
		delete current;
		count--;
		return;
	}
}

template<class T, class U, class V>
void list<T, U, V>::displayRecord()
{
	Node* temp = new Node;
	temp = head;

	while (temp != NULL)
	{
		cout << "Title : " << temp->Title << endl;
		cout << "Name : " << temp->Name << endl;
		cout << "ID : " << temp->ID << endl;
		cout << "Age : " << temp->Age << endl;
		cout << "GPA : " << temp->GPA << endl;
	}

}

template<class T, class U, class V>
void list<T, U, V>::searchRecord()
{
	Node* temp = new Node;
	temp = head;
	U target;

	int choice;
	cout << "Search by ID : ";
	cin >> target;

	while (temp->ID != 0 && temp->next != NULL)
	{
		temp = temp->next;
	}

	if (temp->ID == 0)
	{

		cout << "Found Record!" << endl;
		cout << "Its detail is " << endl;
		cout << "Title : " << temp->Title << endl;
		cout << "Name : " << temp->Name << endl;
		cout << "ID : " << temp->ID << endl;
		cout << "Age : " << temp->Age << endl;
		cout << "GPA : " << temp->GPA << endl;

	}
	else
		cout << "Not match found." << endl;
}







#endif // !LIST_H



