
#include"header.h"

int main()
{
	string filename;
	cout << "enter file no you want to search with .txt at the end: " << endl;
	cin >> filename;
	searchengine s1,s2;

	s1.filehandling(filename);
	s2.filehandling2();


	return 0;

}