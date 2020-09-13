#include <iostream>
#include <string>


using namespace std;

const double feet_to_inch = 12; 
const double inch_to_centi = 2.54; 


int main()
{

int feet = 0;
double total_inches = 0.0;
double total_centi = 0.0;

string inputString = " Only numbers allowed please enter another value!!";
double num, inches;
string negNum = "Negative numbers are not allowed!! ";

		try
		{

			cout << "Enter in feet: " ;
			cin >> feet ;
			cout<< endl;

			cout << "Enter in inches: " ;
			cin >> inches ;
			cout << endl;
	
			if(num < 0)
				throw negNum;
			else if(!cin)
				throw inputString;
	
			total_inches = feet * feet_to_inch ;
			total_centi = total_inches * inch_to_centi ;

			cout << "The Result is :" << " centimeters " << total_centi;
			cout << endl;
		
			char c;
			cout << "Press anything to Exit" ;
			cin >> c;
			cin.clear();
		}
		catch(int negNum)
		{
			cout << negNum << endl;
		}
		catch (string invalidValue)
		{
			cout << inputString << endl;
		}
	
		return 0;

}