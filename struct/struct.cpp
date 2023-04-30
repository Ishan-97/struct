#include <iostream>
#include <cstring>
using namespace std;
#define n 4

struct tag_book {
	char title[100];
	char author[50];
	short year;
	short pages;
	float price;
};
struct tagfio
{
	char name1[50];
	char name2[50];
};
struct people
{
	struct tagfio fio;
	char job[100];
	short old;
};

int main(){
	setlocale(LC_ALL, "rus");

	people p[1];
	strcpy_s(p[0].fio.name1, "ivan");
	strcpy_s(p[0].fio.name2, "lunin");
	strcpy_s(p[0].job, "santeh");
	p[0].old = 28;


	for (int i = 0; i < n; i++)
	{
		cout << p[i].fio.name1 << endl << p[i].fio.name2 << endl <<
			p[i].old << endl << p[i].job << endl ;
		cout << endl;
	}








	struct tag_book lib[n];
	strcpy_s(lib[0].title, "onegin");
	strcpy_s(lib[0].author, "pushckin");
	lib[0].year = 2000;
	lib[0].pages = 700;
	lib[0].price = 450;

	strcpy_s(lib[1].title, "onegrrrrin");
	strcpy_s(lib[1].author, "pusherterckin");
	lib[1].year = 205540;
	lib[1].pages = 7065460;
	lib[1].price = 465450;

	lib[2] = lib[0];
	lib[3] = lib[1];

	for (int i = 0; i < n; i++)
	{
		cout << lib[i].title << endl << lib[i].author << endl << lib[i].year <<
			lib[i].year << endl << lib[i].pages << endl << lib[i].price << endl;
		cout << endl;
	} 
	
	
	cout << endl << endl;



	
	return 0;
}