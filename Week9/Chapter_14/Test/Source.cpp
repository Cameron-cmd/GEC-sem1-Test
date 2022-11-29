//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string lineOfText;
//	ifstream infile("example.txt");
//
//	if (infile.is_open())
//	{
//		while (getline(infile, lineOfText))
//		{
//			cout << lineOfText << endl;
//		}
//		infile.close();
//	}
//	else
//	{
//		cout << "Unable to open file";
//	}
//	cin.get();
//
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//
//using namespace std;
//
//int main()
//{
//	streampos begin, end;
//
//	ifstream infile("example.txt", ios::binary);
//
//	if (!infile)
//	{
//		cerr << "file could not be opened!";
//		std::exit(1);
//	}
//
//	begin = infile.tellg();
//	
//	infile.seekg(0, ios::end);
//
//	end = infile.tellg();
//
//	infile.close();
//
//	cout << "size is: " << (end - begin) << " bytes.\n";
//
//	cin.get();
//	return 0;
//}

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char character;
	int number = 51;
	int count = 0;
	ofstream out_stream;
	ifstream in_stream1;
	ifstream in_stream2;

	out_stream.open("Integers");
	for (count = 1; count <= 5; count++)
	{
		out_stream << number++ << " ";
	}
	out_stream.close();

	in_stream1.open("Integers");
	count = 0;
	in_stream1 >> number;
	while (!in_stream1.eof())
	{
		count++;
		cout << number;
		in_stream1 >> number;
	}
	in_stream1.close();
	cout << "There are " << count << " integers in the file,\n";

	in_stream2.open("Integers");
	count = 0;
	in_stream2 >> character;
	while (!in_stream2.eof())
	{
		cout << character;
		count++;
		in_stream2 >> character;
	}
	in_stream2.close();
	cout << "represented using " << count << " characters." << endl;

	cin.get();
	return 0;
}