using namespace std;
#include <iostream>

int main()
{
int rows= 100; // this is the number of rows (based on quiz score) and also the pyramid's height
int rowmod= 2*rows - 1;// a modification of rows that equates to half of the pyramid length minus the central piece
  int space;
  int counter= 0;
  int asterisk= 0;
  int decrement= 0;

  cout<<"		    | "<< endl;
  cout<<"	       \\    |     / "<< endl;
  cout<<"		\\        / "<< endl;
  cout<<" 		 \\ 0000 / "<< endl;
  cout<<"		 00000000 "<< endl;
  cout<<" 		0000000000 "<< endl;
  cout<<"         ----- 000000000000-----"<< endl;
  cout<<" 		0000000000-"<< endl;
  cout<<" 		 00000000--"<< endl;
  cout<<" 	 	 / 0000 \\" << endl;
  cout<<"		/   |    \\ "<< endl;
  cout<<" 	       /    |     \\ "<< endl;

  while(counter< rows)// loop that determines height and length of the pyramid based on rows
  {
	space= 1;
	while(space <= rows-decrement)// loop that determines the number of empty spaces from the left
	{
		cout<<" ";
		space++;
	}
	unsigned int scoreCount= counter-10;
	cout<<counter+1;
	int decprox= decrement;
	while(decprox>= 0)
	{
		cout<<"* ";
		decprox--;
	}
	decrement++;
	counter++;
	cout<< endl;
  }
  return 0;
}
