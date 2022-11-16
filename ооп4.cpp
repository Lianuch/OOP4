#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

class rectangle 
{
protected:
	int a;
	int b;
	int perimeter;
	int Recsquare;
public:
	
	rectangle()
	{
		cout << "Enter a:";
		cin >> a;
		cout << "Enter b:";
		cin >> b;
	
	}
	
	
	int GetPerimeter()
	{
		perimeter = 2*(a+b);
		return perimeter;
	}
	
	void PrintRec()
	{
		cout << "Perimeter:"<<perimeter << endl;
	}
	int GetSquare()
	{
		Recsquare = a * b;
		return Recsquare;
	}
	void PrintSquare()
	{
		cout << "Square:" << Recsquare << endl;
	}


};
class circle 
{
protected:
	int radius;
	int length;
	int Cirsquare;
public:
	circle()
	{
		cout << "Enter radius:" << endl;
		cin >> radius;
	}
	int GetLength()
	{
		 length = 2*(3.14 * radius);
		return length;
	}
	void PrintCir()
	{
		cout << "Length:" << length << endl;
	}
	int GetCirsquare()
	{
		Cirsquare = 3.14 * pow(radius, 2);
		return Cirsquare;
	}
	void PrintCirsquare()
	{
		cout << "Square of Circle:" << Cirsquare << endl;
	}


};

class RecInCircle : public rectangle,public circle
{
public:

	
	RecInCircle()
	{
	

	}
	void Print()
	{
		string path = "myFile.txt";

		ofstream fout;
		fout.open(path);

		if (!fout.is_open())
		{
			cout << "File opening error!" << endl;
		}
		else
		{
			 fout<< "Data: " << "\n\nRectangle perimeter:" << GetPerimeter() << "\nRectangle square:" << GetSquare() << "\n\nCircle length:" << GetLength() << "\nCircle square:" << GetCirsquare() << endl;
			
		}

		fout.close();
	
	}
	void ShowAll()
	{
		cout << "Info:" << endl;
		PrintRec();
		PrintCir();
	}

};

int main()
{
	system("color 3");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\tPerimeter of rectangle" << endl;
	//Вивід периметра
	rectangle showPer;
	showPer.GetPerimeter();
	showPer.PrintRec();

	cout << "\n";
	cout << "\Square of rectangle" << endl;
	//Вивід площі прямокутника
	rectangle showSquare;
	showSquare.GetSquare();
	showSquare.PrintSquare();
	
	cout << "\n";
	cout << "\tLength of rectangle" << endl;

	//Вивід довжини кола
	circle print;
	print.GetLength();
	print.PrintCir();

	cout << "\n";
	//Вивід  площі кола
	circle showCinSquare;
	showCinSquare.GetCirsquare();
	showCinSquare.PrintCirsquare();


	RecInCircle Cin;
	Cin.Print();
	

	//Cin.GetPerimeter();
	//Cin.GetLength();
	//Cin.ShowAll();


	

	system("pause");
	return 0;
}