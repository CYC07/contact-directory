#include"Table.h"
#include"Single Linked List/List.h"
#include"Single Linked List/implementation.cpp"
#include"Single Linked List/Node.h"
#include"Single Linked List/Contact.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*Contact contact(1,"umar","1234");
	table.Insert(contact);
	Contact contact1(2,"umar","1234");
	table.Insert(contact1);
	Contact contact2(3,"umar","1234");
	table.Insert(contact2);
	Contact contact3(4,"umar","1234");
	table.Insert(contact3);	
	Contact contact4(5,"ammar","1234");
	table.Insert(contact4);	
	table.remove(1,"Umar");
	table.remove(2,"Umar");
	table.remove(3,"Umar");
	table.remove(4,"Umar");
	table.display();*/
	char ch = 'n';
	Table table;
	
	int choice = 0;
	int choice2 = 0; 
	int index;
	
	Contact contact;
	int id = 1;
	int id1 = 0;
	string name;
	string phnum;
	
		cout << endl;
	do
	{
		system("CLS");
		cout<<"\n\t ** CONTACT DIRECTORY **";
		cout<<"\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new Contact\n\t\t[2] Search by Name\n\t\t[3] Search by Number\n\t\t[4] List all Contact\n\t\t[5] Exit\n\t\t=================\n\t\t";
		cout<<"Enter the choice:";
	//	cout << "\t~~ CONTACT DIRECTORY ~~\nPress 1- to ADD Contact\nPress 2- to Search Contact Alphabatically\nPress 3- to Searcg Contact by Phone Number\nPress 4- to Show all Contacts\nPress 5 to exit\nYour Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("CLS");
			cout<<"\t~ Adding a CONTACT ~\n";
			cout << "\n Enter Name: ";
			cin >> name;
			cout << "\n Enter Phone Number: ";
			cin >> phnum;
			contact.setID(id);
			contact.setName(name);
			contact.setNumber(phnum);
			table.Insert(contact);
			id++;
			break;
		case 2:
			system("CLS");
			cout<<"\t~ Searching CONTACT by NAME ~\n";
			cout << "\n Enter Name: ";
			cin >> name;
			table.searchbyName(name);
			break;
		case 3:
			system("CLS");
			cout<<"\t~ Searching CONTACT by Ph.NUMBER ~\n";
			cout << "\n Enter Phone Number: ";
			cin >> phnum;
			table.searchByPhoneNumber(phnum);
			break;
		case 4:
			system("CLS");
			cout<<"\t~ List All CONTACT ~\n";
			table.Display();
			cout<<"\n\t\t[1] Delete A Contact\n\t\t[2] Update A Contact\n\t\t[3] Main Menu\n\t\t=================\n\t\t";
			cin>>choice2;
			switch(choice2)
			{
				case 1:
					system("CLS");
					table.Display();
					cout<<"\n Enter ID to delete: ";
					cin>>id1;
					table.Remove(id1);
					break;
					
				case 2:
					system("CLS");
					table.Display();
					cout<<"\n Enter ID to update: ";
					cin>>id1;
					cout<<"Press 1 to Update Name.\n";
					cout<<"Press 2 to Update Phone Number.\n";
					cout<<"Press 3.to go back to Menu.\n";
					cout<<"Enter your choice(1-3): ";
					cin>>choice2;
					switch(choice2)
					{
						case 1:
							cout<<"\n Enter New Name : ";
							cin>>name;
							table.updateByName(id1, name);
							break;
						case 2:
							cout<<"\n Enter New Phone Number : ";
							cin>>phnum;
							table.updateByPhoneNumber(id1, phnum);
							break;
					}
					break;
			}
			break;
		default:
			cout << "\a\nAre you sure you want to Exit? (Y/N) :  ";
			cin >> ch;
			break;
		}
	}while(ch == 'n' || ch == 'N');
	system("CLS");
	cout<<"Closing...Done!";
	return 0;
}
