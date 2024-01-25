#include"Single Linked List/List.h"
#include "Single Linked List/implementation.cpp"
#include"Single Linked List/Node.h"
#include"Single Linked List/Contact.h"
#include<iostream>
#include<cctype>

#pragma once
using namespace std;
class Table
{
	private:
		List *array;
		int hash(string name)
		{
			int key;
			key = static_cast<int>(toupper(name[0]));
			int ans = key - 65;
			return ans;
		}
	public:
		Table()
		{
			array = new List[26];
		}
		
		void Insert(Contact contact)
		{
			string str;
			int count=-1;
			str = contact.getNumber();
			for(int i=0; i<str.length(); i++)
			{
				if(isalpha(str[i]))
				{
					count++;
					break;
				}
			}
			if(count==-1)
			{
				int index = hash(contact.getName());
				array[index].insert(contact);
				cout<<"\nContact ADDED Successfully.... \n\tPress Any Key to Continue...";
				getch();
			}
			else
			{
				cout<<"\n\aYou Can Enter Only DIGITS!.... \n\tPress Any Key to Continue...";
				getch();
			}
		}
		void Remove(int id)
		{
			for(int i=0;i<26;i++)
			{
				array[i].remove(id);
			}
			cout<<"\nContact REMOVED Successfully.... \n\tPress Any Key to Continue...";
			getch();
		}
		void Display()
		{
			for(int i=0;i<26;i++)
			{
				array[i].display();
			}
		}
		void searchbyName(string name)
		{
			cout<<"\n Searching.....Found!";
			int index = hash(name);
			array[index].searchByName(name);
		}
		void searchByPhoneNumber(string phoneNumber)
		{
			cout<<"\n Searching.....Found!";
			for(int i=0;i<26;i++)
			{
				array[i].searchByNumber(phoneNumber);
			}
			cout<<"\n\tPress Any Key to Continue...";
			getch();
		}		
		void updateByName(int id, string name)
		{
			for(int i=0;i<26;i++)
			{
				array[i].updateName(id,name);
			}
			cout<<"\n\tName Updated Successfully!   Press Any Key to Continue...";
			getch();
		}
		void updateByPhoneNumber(int id, string name)
		{
			for(int i=0;i<26;i++)
			{
				array[i].updatePhoneNumber(id, name);
			}
			cout<<"\n\tPhone Number Updated Successfully!   Press Any Key to Continue...";
			getch();
		}
};
