#include<iostream>
#include<string>
#include"Contact.h"
#pragma once
class Node
{
    private:
        Contact contact;
		Node *next; 
    public:
        Node()
        {
            this->contact = contact;
			next = NULL;
        }
        Node(Contact contact)
        {
           this->contact=contact;
           next = NULL;
		}
		Node* getNext()
		{
			return next;
		}
		void setNext(Node *next)
		{
			this->next = next;
		}
		Contact getContact()
		{
			return contact;
		}
		void setContact(Contact contact)
		{
			this->contact = contact;
		}
	
};
