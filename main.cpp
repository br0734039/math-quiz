#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int multiplication(int,int);
int addition (int,int);
int subtraction(int,int);
int division(int,int);
int mountain(int, int);

int main()
{
	int correctCount;
	double rowCount;
	int rowCount2;
	char response,a,b,c,d;
	double N;
	int max;
	srand(time(0));
	cout << "Enter number of questions you would like?" << endl;
	cin >> N;
	cout << "\nEnter maximum range of the numbers you would like to work with" << endl;
	cin >> max;
	cout << "\nWhat kind of math problems would you like?" << endl;
	cout << "a. addition" << endl;
	cout << "b. subraction" << endl;
	cout << "c. multiplication" << endl;
	cout << "d. divison" << endl;
	cin >> response;
	cout << endl;

	switch (response)
	{
		case 'a':
		rowCount= (addition(N,max));
		mountain(rowCount, N);
		break;

		case 'b':
		rowCount= (subtraction(N,max));
		mountain(rowCount, N);
		break;

		case 'c':
		rowCount= (multiplication(N,max));
		mountain(rowCount, N);
		break;

		case 'd':
		rowCount= (division(N,max));
		mountain(rowCount, N);
		break;
	}


	return 0;
}

int addition(int N, int max)
{
	int correctCount = 0;
	int incorrectCount = 0;
	int x,y,F;
	int z;

	for (int i=1; i<=N; i++)
		{
			x = (1+rand()%(max+1));
			y = (1+rand()%(max+1));
			F=x+y;
			cout << x <<" + " << y << " = ";
			cin >> z;


			if (z==F)
				{
					cout << "correct" << endl;
					correctCount++;
				}
						else
							{
								cout << "incorrect" << endl;
								incorrectCount++;
							}


		}


	cout << "You got " << correctCount << " right" << endl;
	cout << "You got " << incorrectCount << " wrong\n" << endl;


	return correctCount;

}

int multiplication (int N, int max)
{
	int x,y,F;
	int z;
	int correctCount = 0;
	int incorrectCount = 0;

	for (int i=1; i<=N ;i++)
	{
		x=rand()%(max+1);
		y=rand()%(max+1);
		F=x * y;

		cout << "what is " << x << "x" << y << " = ";
		cin >> z;
		if (z==F)
		{
			cout << "correct" << endl;
			correctCount++;
		}
			else
			{
				cout << "incorrect" << endl;
				incorrectCount++;
			}

	}
	cout << "You got " << correctCount << " right" << endl;
	cout << "You got " << incorrectCount << " wrong\n" << endl;

	return correctCount;
}



int subtraction (int N, int max)
{
	int answer;
	int correctCount = 0;
	int incorrectCount = 0;

	for (int i=1; i<=N; i++)
	{
		int x = (1+rand()%(max+1));
		int y = (1+rand()%(max+1));

		cout << x << " - " << y << " = ";
		cin >> answer;

		if (answer== x-y)
		{
			cout << "correct" << endl;
			correctCount++;

		}
						else
							{
								cout << "incorrect" << endl;
								incorrectCount++;

							}
	}



	cout << "You got " << correctCount << " right" << endl;
	cout << "You got " << incorrectCount << " wrong\n" << endl;

	return correctCount;
}

int division (int N, int max)
{
	int x,y;
	int correctCount = 0;
	int incorrectCount = 0;
	int z;
	int quotient;
	int answer;

	for (int i=1; i<=N; i++)
	{
		int x = (1+rand()%(max+1));
		int y = (1+rand()%(max+1));
		z=x*y;
		quotient=z/x;

		cout << z << " / " << x << " = ";
		cin >> answer;

		if (quotient == answer)
		{
			cout << "correct" << endl;
			correctCount++;

		}
					else
							{
								cout << "incorrect" << endl;
								incorrectCount++;

							}


	}

	cout << "You got " << correctCount << " right" << endl;
	cout << "You got " << incorrectCount << " wrong\n" << endl;


	return correctCount;
}

int mountain (int rowCount, int N)
{
    double percent= (rowCount/N) *100.0 ;

    cout<< rowCount<< endl;
    cout<< N<< endl;
    cout<< percent<< endl;

	int rows=  percent; // this is the number of rows (based on quiz score) and also the pyramid's height
	int rowmod= 2*rows - 1;// a modification of rows that equates to half of the pyramid length minus the central piece
   int space;
   int counter= 0;
   int asterisk= 0;
   int decrement= 0;

   cout<<"                                                  |        "<< endl;
   cout<<"                                           \\      |      /  "<< endl;
   cout<<"                                            \\           /  "<< endl;
   cout<<"                                             \\   0000  /        "<< endl;
   cout<<"                                               00000000 "<< endl;
   cout<<"                                              0000000000 "<< endl;
   cout<<"                                      ------ 000000000000-----"<< endl;
   cout<<"                                              0000000000-"<< endl;
   cout<<"                                               00000000--"<< endl;
   cout<<"                                             /   0000   \\" << endl;
   cout<<"                                            /      |     \\      "<< endl;
   cout<<"                                           /       |      \\     "<< endl;

   while(counter< rows)// loop that determines height and length of the pyramid based on rows
   {
	   space= 1;
	   while(space <= rows-decrement)// loop that determines the number of empty spaces from the left
	   {
		cout<<"  ";
		space++;
	   }
	   unsigned int scoreCount= counter-10;
	   cout<<counter+1;
	   int decprox= decrement;
	   while(decprox>= 0)
	   {
		   cout<<"*   ";
		   decprox--;
	   }
	   decrement++;
	   counter++;
	   cout<< endl;
   }
    return 0;
}
