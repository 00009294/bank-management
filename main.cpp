#include <iostream>

using namespace std;

class Bank {
    string name, email, gender;
    int balance=0, withdraw;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void Bank::open_account() {
    cout << "Your name: ";
    cin >> name;
    cout << "Your email: ";
    cin >> email;
    cout << "Your gender: ";
    cin >> gender;
    cout << "Your Account Successfully Created!!!!";
}
void Bank::deposit_money() {
    int temp;
    cout << "Deposit[$]: ";
    cin >> temp;
    balance+=temp;
    cout << "Your $" << balance << " has deposited!!!";


}
void Bank::withdraw_money() {
    cout << "Withdraw: ";
    cin >> withdraw;
    balance = balance - withdraw;
    if(balance < 0){
        cout << "Enter a deposit first!!!" << endl;
        balance = 0;
    } else cout << "Now, you have " << balance << endl;
}
void Bank::display_account() {
    cout << "Name: " << name;
    cout << "\nEmail: " << email;
    cout << "\nGender: " << gender;
    cout << "\nBalance: " << balance;
}

int main(){
    int choice;
    char Yes_No;
    Bank num;
    First_step:
    cout << "1. Open an account" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Display account" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter a choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            num.open_account();
            break;
        case 2:
            num.deposit_money();
            break;
        case 3:
            num.withdraw_money();
            break;
        case 4:
            num.display_account();
            break;
        case 5:
            exit(1);
        default:
            cout << "Enter correct choice!!!" << endl;
    }
    cout << "\nDo you want to do other operations?(Y/N)";
    cin >> Yes_No;
    if (Yes_No == 'Y' || Yes_No == 'y') goto First_step;
    else cout << "Good bye!!!" << endl;

    return 0;
}
