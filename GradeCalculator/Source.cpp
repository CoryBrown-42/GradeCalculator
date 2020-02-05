#include <iostream>

using namespace std;

int main()
{
	//Declare variables
	double points = 0,
		pointsPossible = 0,
		percent = 0;
	char grade = 'A';
	
	//Ask user for the information we need

	//Point you have.
	cout << "How many points do you have? " << endl;
	cin >> points;

	//Points you could have got.
	cout << "How many points are possible?" << endl;
	cin >> pointsPossible;

	/* do math and convert decimal result into percent
	and output that with the correct format*/
	percent = (points / pointsPossible) * 100;



	percent = rand() % 101;
	cout << percent << "%" << endl;

	//Assign Letter grade based on percentage
	if (percent >= 90)
	{
		grade = 'A';
	}
	else if (percent >= 80 && percent < 90 )
	{
		grade = 'B';
	}
	else if (percent >= 70 && percent < 80)
	{
		grade = 'C';
	}
	else if (percent >= 60 && percent < 70)
	{
		grade = 'D';
	}
	else if (percent <= 60)
	{
		grade = 'F';
	}

	//Display the grade
	cout << "You got a " << grade << endl;

	//Select off of the char grade
	switch (grade)
	{
	case 'A':
		cout << "You did great!" << endl;
		break;
	case 'B':
		cout << "You could have done better." << endl;
		break;
	case 'C':
		cout << "You just barely made it." << endl;
		break;
	case 'D':
		cout << "Try again." << endl;
		break;
	case 'F':
		cout << "Turn in your badge." << endl;
		break;
	}

	int n = 0;

	for (int i = 0; i < 101; i++)
	{
		n++;
		cout << n << endl;
	}


	//cast double as float and assign to memory as pi
	float pi = float(2 * acos(0.0));
	//output pi
	cout << pi << endl;


	system("Pause");
	return 0;
}