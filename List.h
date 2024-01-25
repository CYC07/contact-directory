#pragma once
#include"Node.h"

class List{
private:
	Node *head;
	Node *tail;
public:
	List();
	//Functions..................
	bool isEmpty();
	void insert(Contact);
	void remove(int);
	void updateName(int,string name);
	void updatePhoneNumber(int,string phoneNumber);
	void search(int);
	void searchByName(string name);
	void searchByNumber(string number);
	void display();
};
