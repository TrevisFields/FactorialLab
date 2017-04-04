#include <iostream>
#include <string>

using namespace std;

/*
 Factorials
 7!
 7 * 6!
 7 * 6 * 5!
 7 * 6 * 5 * 4!
 */

int factorial(int n);
void PressEnterMessage();

int main()
{
  cout << "Enter a number: ";
  int number;
  cin >> number;
  
  auto answer = factorial(number);
  cout << endl << "Factoral of " + to_string(number) + " = " + to_string(answer) + "\n";
  int i;
  for(i = 0; i < 1; i++)
  {
	 PressEnterMessage();
  system("read");
	 int j;
	 for(j = 0; j < 15; j++)
		{
		  cout << "\n";
		}
  }

  cout << endl << "Factorial of " + to_string(number - 1) + " = " + to_string(answer / number) + "\n";
 
  for(i = 0; i < 1; i++)
  {
	 PressEnterMessage();
  system("read");
	 int j;
	 for(j = 0; j < 15; j++)
		{
		  cout << "\n";
		}
  }

  //Code does not work for numbers that are greater than 4 to test and see the factorials in a decresing motion. the given answer is more than the actual answer should be
  cout << endl << "Factorial of " + to_string(number - 2) + " = " + to_string((answer /number )/ (number * 2)) + "\n";
  
  for(i = 0; i < 1; i++)
  {
	 PressEnterMessage();
  system("read");
	 int j;
	 for(j = 0; j < 15; j++)
		{
		  cout << "\n";
		}
  }
cout << "End of program.\n";
  return 0;
}

int factorial(int n)
{
  //Is it time to return n
  if(n == 1)
	 {
		return n;
	 }
  return n * factorial(n - 1);
}


void PressEnterMessage()
{
  cout << "Press Enter to Continue!. . .\n";
}
