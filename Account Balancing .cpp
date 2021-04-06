#include<iostream>
#include<string>
using namespace std;
int main()
{
    int accno, accno1; //Accounts i.e Saving or Checking 
    int op;
    float saving = 0, checking = 0;  //inialization
    string account;
    float balance;
    float mantain;
    if (account == "saving")
   {
        if (balance < mantain)
        {
            saving - 10.00;
        }
        if (balance >= mantain)
        {
            saving + 4.00 / balance * 100;
        }
    }
    else if (account == "checking")
    {
        if (balance < mantain)
        {
            checking - 25.00;
        }
    }
    if (balance > 5000)
    {
        checking + 3 / balance * 100;
    }
    else if (balance < 5000)
    {
        checking + 5 / balance * 100;
    } 
    cout << " Enter Amount you want to mantain for your account " << endl;
    cin >> mantain;
    cout << " Enter option '1' for Saving '2' for Checking "<<endl;
    cin >> op;
    if (op == 1)
    {
    	cout<<" Enter your account type = "<<endl;
    	cin>>account;
        cout << " Enter your account number =" << endl;
        cin >> accno;
        cout << " Enter your account Balance or Savings " << endl;
        cin >> saving;
        cout << " Account type =  "<<account<<"\t "<<  "Account number = " << accno << "\t" << "Account balance or Savings = $ " << saving << "\t" << "Mantain amount = $" << mantain << endl;

    }
    else if (op == 2)
    {
    	cout<<" Enter your account type "<<endl;
    	cin>>account;
        cout << " Enter your account number = " << endl;
        cin >> accno1;
        cout << " Enter your account balance = " << endl;
        cin >> checking;
        cout << " Account type = "<<account <<"\t "<< " Account number = " << accno1 << "\t" << " Account balance or Savings = $ " << checking << "\t" << "Mantain amount =$ " << mantain << endl;
    }
    system("pause");
    return 0;
}
