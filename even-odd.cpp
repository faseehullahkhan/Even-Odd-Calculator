#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int number, count = 0, remainder, even = 0, odd = 0, status;
  cout << "Enter A Number = " << endl;
  cin >> number;
  cout<<"Tell Us What You Want \n 1) Even \n 2) Odd"<<endl;
  cin>>status;
  while (number > 0)
  {
    remainder = number % 10;
    if (status == 1)
    {
      if (remainder % 2 == 0)
      {
        even = even * 10 + remainder;
        count++;
      }
    }

    else if (status == 2)
    {
      odd = odd * 10 + remainder;
      count++;
    }
    number = number / 10;
  } // 7513, 684
  cout << "Number Even Is = " << even << endl;
  cout << "Number Odd Is = " << odd << endl;
  return 0;
}
