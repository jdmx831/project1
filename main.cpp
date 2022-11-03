// Description: this program acts as a simple ATM
#include <iostream>
using namespace std;
int main() 
{
  int acc_num, pin, pin_test, option;
  double bal, deposit, withdraw;
  
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
    cout << "We're sorry. Please try again later withdraw a positive initial balance.";
}
    else
{
      cout << "Congratulations! Your account (" << acc_num << ") was successfully created.\n";
      cout << "Enter your PIN to continue: ";
      cin >> pin_test;
}
        
  if (pin_test != pin)
{
    cout << "Incorrect PIN. You can try one more time.\n";
    cout << "Enter your PIN: \n";
    cin >> pin_test;
}
  if (pin_test != pin)
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
      cin >> option;
  }
  // start of while loop for options
    while (option >=1 && option <= 3)
    {
      while (option == 1)
    {
        cout << "\nHow much do you want to deposit? ";
        cin >> deposit;
        bal += deposit;
        cout << "\nYour new balance is $" << bal;
        cout << "\n\nSelect your transaction: ";
        cout << "\n \t\t 1: deposit";
        cout << "\n \t\t 2: withdrawal";
        cout << "\n \t\t 3: inquiry";
        cout << "\n \t\t 4: exit\n";
        cin >> option;
    }
      while (option == 2)
      {
        cout << "\nHow much do you want to withdraw? ";
        cin >> withdraw;
        bal -= withdraw;
        
        if (bal < 0)
      {
          cout << "This is over your current balance.\n\n";
      }
          else
        {
            cout << "\nYour new balance is $" << bal;
            cout << "\n\nSelect your transaction: ";
            cout << "\n \t\t 1: deposit";
            cout << "\n \t\t 2: withdrawal";
            cout << "\n \t\t 3: inquiry";
            cout << "\n \t\t 4: exit\n";
            cin >> option;
        }
        }
      
      while (option == 3)
      {
        cout << "\nYour account number: " << acc_num;
        cout << "\nYour PIN: " << pin;
        cout << "\nCurrent balance: $" << bal;
        cout << "\n\nSelect your transaction: ";
        cout << "\n \t\t 1: deposit";
        cout << "\n \t\t 2: withdrawal";
        cout << "\n \t\t 3: inquiry";
        cout << "\n \t\t 4: exit\n";
        cin >> option;
        }
        }
// closing of first while loop (line 80)  

    if (option == 4)
  {
    cout << "\nThank you for using Hartnell ATM."; 
  }
  
  return 0;
  }
