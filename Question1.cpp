#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>

fstream fout;
fstream fin;

int tosearch(int &f)
{
	char name[50];
	cout<<"Enter the name of book : ";
	gets(name);
	fin.seekg(0);
	while(fout.read((char*)&book1,sizeof(book1)))
	{
		if(strcmp(book1.getname(),name)==0)
		{f = 1; break;}
	}
	return f;
};
class book
{
	int book_no;
	char book_name[50];
	char author[20];
	char publisher[50];
	int price;
	int copies_issued;
	int no_copies;

	public:
	book()
	{
		book_no = 0;
		book_name = "NULL";
		author = "NULL";
		publisher = "NULL";
		price = 0;
		copies_issued = 0;
		no_copies = 0;
	}
	int toissue()
	{
		if(no_copies =< copies_issued)
		cout<<"Sorry! All the pieces of the book are already issued ";
		else
		copies_issued++;
		cout<<"\nDetails of the book\n:";
		todisplay();			
	}
	void toreturn()
	{
		if(no_copies > copies_issued)
		copies_issued--;
		else 
		cout<<"Error can't return the book";
	}
	void todisplay()
	{
		cout<<"\nBook Number : "<<book_no<<"\nBook Name : "<<book_name<<"\nAuthor : "<<author<<"\nPublisher : "<<publisher<<"\nPrice : "<<price<<"\nCopies Issued : "<<copies_issued<<"\nNumber of Copies : "<<no_copies;
	}
	char* getname()
	{return book_name;}
	void add_book()
	{
		cout<<"\nBook Number : ";
		cin>>book_no;
		cout<<"\nBook Name : ";
		gets(book_name);
		cout<<"\nAuthor : ";
		gets(author);
		cout<<"\nPublisher : ";
		gets(publisher);
		cout<<"\nPrice : ";
		cin>>price;
		cout<<"\nCopies Issued : ";
		cin>>copies_issued;
		cout<<"\nNumber of Copies : ";
		cin<<no_copies;
	}
}book1;


























			
	
