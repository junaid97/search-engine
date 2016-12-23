#include "header.h"
using namespace std;


void searchengine::filehandling(string filename)
{

	string savefile;              // string for file reading
	ifstream project2;
	project2.open(filename, ios::in);
	if (project2.is_open()) // checking file if opened the display given sentence
	{
		cout << "my file is open" << endl;
	}
	else
	{
		cout << "error opening file" << endl;
	}
	//project2 >> task2txt;   //storing data in file "project2" in string"task2txt"
	int count = 0, pos = -1;
	string input;
	cout << "enter the word you want to search: ";
	cin >> input;

	{
		while (getline(project2, savefile), pos == -1)
		{
			pos = savefile.find(input);
			count++;

		}
		cout << " The phrase is found in line " << count << " at Position " << pos << " in "<<filename<< endl;
		system("pause");
	}
	if (pos==-1)
	{ 
		cout << "word not found in" << filename << endl;;
	}
	project2.close(); // file closed
}

