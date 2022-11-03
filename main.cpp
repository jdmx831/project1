// Title: project1
// Description: this program acts as a simple ATM
// Author: Daniel Paniagua
// Date: 11/2/22
#include <iostream>
using namespace std;
int main() 
{
int acc_num, pin, pintest, opt;
double bal, dep, with;
  cout << "***** Welcome to The Bank of Hartnell *****\n";
  cout << "Account Creation\n";
  cout << "Enter your account number: ";
  cin >> acc_num;
  cout << "Enter your PIN: ";
  cin >> pin;

if (pin < 1000 || pin > 9999) 
{
  cout << "Invalid PIN number.\nUse a number between 1000 and 9999\n";
  cout << "Enter your PIN: ";
  cin >> pin;
}

if (pin < 1000 || pin > 9999)
{
  cout << "Sorry. You can’t create an account.\n";
  cout << "Thank you for using Hartnell ATM.";
}

else 
{
  cout << "Enter the initial balance: ";
  cin >> bal;
}

if (bal <= 0)
{
  cout << "The initial balance must be a positive value. Please try again." << endl;
  cout << "Enter the initial balance: ";
  cin >> bal;
}

if (bal <= 0)
{
  cout << "We're sorry. Please try again later with a positive initial balance.";
}

else
{
  cout << "Congratulations! Your account (" << acc_num << ") was successfully created.\n";
  cout << "Enter your PIN to continue: "; 
}
  
cin >> pintest;

if (pintest != pin)
{
  cout << "Incorrect PIN. You can try one more time.\n";
  cout << "Enter your PIN: \n";
  cin >> pintest;
}

if (pintest != pin)
  {
    cout << "Incorrect PIN. Your account is suspended.\n";
    cout << "Contact the bank directly.";
  }

  else 
  {
    cout << "Select your transaction: ";
    cout << "\n \t\t 1: deposit";
    cout << "\n \t\t 2: withdrawal";
    cout << "\n \t\t 3: inquiry";
    cout << "\n \t\t 4: exit\n";
    cin >> opt;
  }

  
  while (opt >=1 && opt <= 3)
    {
      
    while (opt == 1)
  {
    cout << "How much do you want to deposit? ";
    cin >> dep;
    bal += dep;
    cout << "Your new balance is $" << bal;
    cout << "\n\nSelect your transaction: ";
    cout << "\n \t\t 1: deposit";
    cout << "\n \t\t 2: withdrawal";
    cout << "\n \t\t 3: inquiry";
    cout << "\n \t\t 4: exit\n";
    cin >> opt;
  }
  
    while (opt == 2)
    {
      cout << "How much do you want to withdraw? ";
      cin >> with;
      bal -= with;
  
      if (bal < 0)
    {
        cout << "This is over your current balance.\n\n";
    }
      else
      {
        cout << "Your new balance is $" << bal;
        cout << "\n\nSelect your transaction: ";
        cout << "\n \t\t 1: deposit";
        cout << "\n \t\t 2: withdrawal";
        cout << "\n \t\t 3: inquiry";
        cout << "\n \t\t 4: exit\n";
        cin >> opt;
      }
      }
      
    while (opt == 3)
    {
      cout << "\nYour account number: " << acc_num;
      cout << "\nYour PIN: " << pin;
      cout << "\nCurrent balance: $" << bal;
      cout << "\n\nSelect your transaction: ";
      cout << "\n \t\t 1: deposit";
      cout << "\n \t\t 2: withdrawal";
      cout << "\n \t\t 3: inquiry";
      cout << "\n \t\t 4: exit\n";
      cin >> opt;
    }
      
      }

  if (opt == 4)
  {
    cout << "Thank you for using Hartnell ATM."; 
  }

  return 0;
  }