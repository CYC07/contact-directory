#pragma once
#include"List.h"
#include<iostream>
#include<cctype>
#include <algorithm> 
#include <string> 
#include<conio.h>
using namespace std;


///....................LIST CLASS......................
List::List()
{
	head = NULL;
	tail = NULL;
}
bool List::isEmpty()
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void List::insert(Contact contact)
{
	if (isEmpty())
	{
		Node *temp = new Node(contact);
		head = temp;
		tail = temp;
	}
	else
	{
		Node *temp = new Node(contact);
		tail->setNext(temp);
		tail = temp;
	}
}


void List::remove(int ID)
{
	Node *prev = NULL;
	Node *target = head;
	while (target != NULL)
	{
		if (target->getContact().getID() == ID)
		{
			break;
		}
		else{
			prev = target;
			target = target->getNext();
		}
	}
	//............End of Loop................
	if (target == NULL)
	{
		cout << "Not Found" << endl;
		return;
	}
	else{
		if (target == head)
		{
			head = head->getNext();
			target->setNext(NULL);
			delete target;
		}
		else if (target == tail)
		{
			tail = prev;
			tail->setNext(NULL);
			delete target;
		}
		else
		{
			prev->setNext(target->getNext());
			target->setNext(NULL);
			delete target;
		}
	}
}
void List::display()
{
	Node *temp = head;
	while(temp!=NULL)
	{
		temp->getContact().display();
		temp = temp->getNext();
	}
	return;
}
void List::updatePhoneNumber(int id,string phoneNumber){
	Node *temp = head;
	while(temp!=NULL)
	{
		int tempID = temp->getContact().getID();
		if(tempID==id)
		{
			Contact contact = temp->getContact();
			contact.setNumber(phoneNumber);
			temp->setContact(contact);
		}
		temp = temp->getNext();
	}
	return;
}
void List::updateName(int id,string name)
{
	Node *temp = head;
	while(temp!=NULL)
	{
		int tempID = temp->getContact().getID();
		if(tempID==id)
		{

			Contact contact = temp->getContact();
			contact.setName(name);
			temp->setContact(contact);
		//	getch();
		}
		temp = temp->getNext();
	}
	return;
}
void List::search(int ID)
{
	Node *temp = head;
	while(temp!=NULL)
	{
		if(temp->getContact().getID()==ID)
		temp->getContact().display();
		temp = temp->getNext();
	}
	return;
}
void List::searchByName(string name)
{
	Node *temp = head;
	transform(name.begin(), name.end(), name.begin(), ::toupper);
	while(temp!=NULL)
	{
		
		int sum =0;
		int check[name.size()];
		for(int i=0;i<name.size();i++)
		check[i]=-1;
		string contactName = (temp->getContact().getName());
		transform(contactName.begin(), contactName.end(), contactName.begin(), ::toupper);
		for(int i=0;i<name.size();i++)
		{
			if(contactName[i]==name[i])
			check[i]=1;
		}
		for(int i=0;i<name.size();i++)
		{
			sum = sum + check[i];
		}
		if(sum == name.size())
		temp->getContact().display();
		temp = temp->getNext();
		
	}
	cout<<"\n\tPress Any Key to Continue...";
	getch();
}

void List::searchByNumber(string number)
{
	Node *temp = head;
	while(temp!=NULL)
	{
		
		int sum =0;
		int check[number.size()];
		for(int i=0;i<number.size();i++)
		check[i]=-1;
		string contactNumber = (temp->getContact().getNumber());
		for(int i=0;i<number.size();i++)
		{
			if(contactNumber[i]==number[i])
			check[i]=1;
		}
		for(int i=0;i<number.size();i++)
		{
			sum = sum + check[i];
		}
		if(sum == number.size())
		temp->getContact().display();
		temp = temp->getNext();
	}
}