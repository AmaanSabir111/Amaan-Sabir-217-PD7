#include <iostream>
using namespace std;
void createAccount();

void display();
void deposit();
void withdraw();
string pass;
string name;
int aN, iA;
int option;
int nA;
int cA;
int eA;
main()
{

    cout << " ";
    cout << "****************************************************************************************************************************************************" << endl;
    cout << "*                                                                                                                                                   *" << endl;
    cout << "*                                                             BANK MANAGEMENT SYSTEM                                                                *" << endl;
    cout << "*                                                                                                                                                   *" << endl;
    cout << "*****************************************************************************************************************************************************" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Press 1 to create new account" << endl
         << "Press 2 to deposit cash" << endl
         << "Press 3 withdraw cash" << endl
         << "Press 4 to exchange cash" << endl;
    cin >> option;

    if (option == 1)
    {
        createAccount();
    }
    if (option == 2)
    {
        deposit();
    }
    if (option == 3)
    {
        withdraw();
    }
}

void createAccount()
{
    char YN;
    while (true)
    {
        cout << "Enter your Name:";
        cin >> name;
        cout << "Enter Account Number You Want:";
        cin >> aN;
        cout << "Enter Initial Amount you want to deposit:";
        cin >> iA;
        cout << name << " Your account has been created with an initial balance of " << iA << endl;
        cout << "Create your password:";
        cin >> pass;
        cout << " To You want to exit (Y/N):";
        cin >> YN;
        if (YN == 'Y')
        {
            display();
        }
        if (YN == 'N')
        {
            continue;
        }
    }
}
void deposit()
{
    int amount;
    string p;
    cout << "Enter your passowrd";
    cin >> p;
    if (p != pass)
    {
        cout << "You have entered wrong password"<<endl;
        display();
    }
    else
    {
        cout << "Enter the amount you want to deposit:";
        cin >> amount;
        cA = amount + iA;
        cout << "Your current balance is" << cA<<endl;
        display();
    }
}
void withdraw()
{
    int amount;
    string p;
    cout << "Enter your passowrd";
    cin >> p;
    if (p != pass)
    {
        cout<<"You entered wrong password"<<endl;
        display();
    }
    else
    {
        
            cout << "Enter the amount you want to withdraw:";
            cin >> amount;
            if (amount < cA)
        {
            
            cA = cA-amount;
            cout << "Your current balance is" << cA<<endl;
            display();
        }

        else
        {
            display();
        }
    }
}
void exchange()
{

    int aE;
    string curr;
    cout << "Enter the currency in which you want to exchange:"<<endl;
    cin >> curr;
    cout << "Enter amount which you want to exchange:"<<endl;
    cin >> eA;
    if (eA > cA)
    {
        cout << "You don't have enought amount"<<endl;
        display();
    }
    else
    {
        if (curr == "usd")
        {
            aE = eA / 280;
            cout << "You will get " << aE << curr;
            cout << "Your balance left is:" << cA - eA;
        }
        if (curr == "euro")
        {
            aE = eA * 0.003;
            cout << "You will get " << aE << curr <<endl;
            cout << "Your balance left is:" << cA - eA <<endl;
        }
        if (curr == "inr")
        {
            aE = eA * 0.30;
            cout << "You will get " << aE << curr <<endl;
            cout << "Your balance left is:" << cA - eA <<endl;
        }
        if (curr == "riyal")
        {
            aE = eA * 0.014;
            cout << "You will get " << aE << curr <<endl;
            cout << "Your balance left is:" << cA - eA <<endl;
        }
        if (curr == "aed")
        {
            aE = eA * 0.013;
            cout << "You will get " << aE << curr <<endl;
            cout << "Your balance left is:" << cA - eA <<endl;
        }
        if (curr == "gbp")
        {
            aE = eA * 0.0028;
            cout << "You will get " << aE << curr <<endl;
            cout << "Your balance left is:" << cA - eA <<endl;
        }
        if (curr == "cad")
        {
            aE = eA * 0.0050;
            cout << "You will get " << aE << curr <<endl;
            cout << "Your balance left is:" << cA - eA <<endl;
        }
    }
    display();
}

void display()
{

    cout << "Press 1 to create new account" << endl
         << "Press 2 to deposit cash" << endl
         << "Press 3 withdraw cash" << endl
         << "Press 4 to exchange cash" << endl;
    cin >> option;

    if (option == 1)
    {
        createAccount();
    }
    if (option == 2)
    {
        deposit();
    }
    if (option == 3)
    {
        withdraw();
    }
    if (option == 4)
    {
        exchange();
    }
}
