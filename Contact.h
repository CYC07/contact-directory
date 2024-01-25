#include<iostream>
#include<string>
#pragma once
using namespace std;
class Contact
{
	private:
		string name;
		string phoneNumber;
		int ID;
	public:
		Contact()
        {
            this->ID=-1;
            this->name=" ";
            this->phoneNumber = " ";
        }
        Contact(int ID,string name,string phoneNumber)
        {
           this->ID = ID;
           this->name = name;
           this->phoneNumber = phoneNumber;
		}	
		
		void setID(int ID)
        {
            this->ID = ID;
        }
        int getID()
        {
            return ID;
        }

        string getNumber()
        {
            return phoneNumber;;
        }
        void setNumber(string number)
        {
            this->phoneNumber=number;
        }
        void setName(string name)
        {
        	this->name = name;
		}
		string getName()
		{
			return name;
		}
		void display()
		{
			cout<<"ID: "<<ID<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Phone Number: "<<phoneNumber<<endl;
		}
};
