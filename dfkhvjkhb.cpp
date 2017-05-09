// math quiz
// Brett Rohde, Richard Tobing, Brian Canales

/* hello world for our final project, we made a math quiz in which the user can determine the number of questions, the type operation for each question, and the range of numbers which each problem will consist of*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int multiplication(int,int);
int addition (int,int);
int subtraction(int,int);
int division(int,int);
int mountain (double, double);

int main()/* the main function defines each variable we use and asks the user for the number of questions they want, the range, and the type of operation they will use, the program then uses a switch statement, and calls
one of four funcions based on the operation chosen by the user; these inculde, addition, subtraction, multiplycation, and division*/
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

/* for our addition and multiplication are prett much identical fnctions; for example in our multiplication funcion, we are inputting our number questions, N, and our range of numbers max. We use a loop that runs however 
many problems the user wants. Within the loop, we have two random number generators that will initialize two variables that will not exceed your chosen range. It compares the user's input z, to the actual answer F which
is calculated by the program. An if statement will test to see if the answer is correct and increment a counter if your answer is correct */

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

int addition(int N, int max)
{
	int correctCount = 0;
	int incorrectCount = 0;
	int x,y,F;
	int z;

	for (int i=1; i<=N; i++)
		{
			x = (1+rand()%max);
			y = (1+rand()%max);
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

/* in our subtraction, we add one to our randomly generated number so we wont divide by zero, in order to prvent a negative answer, we created an if statment to display the greater number first. In order to keep the keep
the random number below maximum, we used a modulus operator to get the remainder of the random number divided by the chosen maximum, we use this remainder for each operation instead of the initial random number
for instance, if our chosen max is 20, and the the random number is 42, the number used for operation will be the remainder of 42/20+ 1, which is 3*/
int subtraction (int N, int max)
{
	int answer;
	int correctCount = 0;
	int incorrectCount = 0;

	for (int i=1; i<=N; i++)
	{
		int x = (1+rand()%max);
		int y = (1+rand()%max);
        if (x>y)
        {
            cout << x << " - " << y << " = ";
            cin >> answer;
        }
        else
        {
            cout << y << " - " << x << " = ";
            cin >> answer;
        }

		if (answer== abs(x-y))
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

/* in our our division function, we need to make sure that we dont end up with a remainder or a decimal answer, in order to do this, find the product of two non-zero random numbers and ask the user for the
quotient of that product divided one of the two random numbers, so technically our chosen maximum will limit our answer*/
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
		int x = (1+rand()%max);
		int y = (1+rand()%max);
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

int mountain (double rowCount, double N)
{

    double percent= (rowCount/N) *100.0 ;

    cout<< "SCORE: "<< percent << "%"<< endl;

	int rows=  percent; // this is the number of rows (based on quiz score) and also the pyramid's height
    int rowmod= 2*rows - 1;// a modification of rows that equates to half of the pyramid length minus the central piece
   int space;
   int counter= 0;
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
	   cout<<counter+1<<"%";
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
