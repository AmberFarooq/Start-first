#include <fstream>
#include <iostream>
#include<string>
using namespace std;

int main() 
{

	// open a file in read mode.
	string read;
	ifstream newfile("afile.dat");

	getline(newfile, read);
	cout << read << endl;
	return 0;
}