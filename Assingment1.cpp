#include <iostream>
#include <string>
using namespace std;

// --> TASK # 1:
class Student
{
    // private Attributes 
private: // access specifiers  
    int rollNumber;
    string name;
    string address;
    string phoneNumber;
    char grade;

public:
    // Member Functions::
    // constructor as a setters for each attribute.
    Student(int a, string b, string c, string d, char e)
    {
        rollNumber = a;
        name = b;
        address = c;
        phoneNumber = d;
        grade = e;
    }
    //  getters for each attribute.
    int getrollNumber()
    {
        return rollNumber;
    }
    string getname()
    {
        return name;
    }
    string getaddress()
    {
        return address;
    }
    string getphoneNumber()
    {
        return phoneNumber;
    }
    char getgrade()
    {
        return grade;
    }
};

int main()
{
    Student student1(353, "Alber", "lahore", "31231231231", 'A');
    cout << student1.getrollNumber() << endl;
    cout << student1.getname() << endl;
    cout << student1.getaddress() << endl;
    cout << student1.getphoneNumber() << endl;
    cout << student1.getgrade() << endl;
    return 0;
}

// --> TASK # 2:
// class BankAccount
// {
//     // Attributes
// private:
//     int accountNumber;
//     string accountHolderName;
//     double balance;

//     // MeMber Functions
// public:

//     BankAccount(int a, string b, double c)
//     {
//         accountNumber = a;
//         accountHolderName = b;
//         balance = c;
//     }

// // getters functions:
//     int setaccountNumber()
//     {
//         return accountNumber;
//     }
//     string setaccountHolderName()
//     {
//         return accountHolderName;
//     }
//     double setbalance()
//     {
//         return balance;
//     }

// // ● Function to deposit money into the account
// // ● Function to withdraw money from the account
//     int depositmoney(int amount)
//     {
//         balance = balance + amount;
//     }
//     int withdraw(int amount)
//     {
//         balance = balance - amount;
//     }

// // ● Function to display account details
//     void display(){
//         cout<<"Yours amount details are :"<<endl;
//         cout<<"Account Number :\n"<<setaccountNumber()<<endl;
//         cout<<"Account Holdername :\n"<<setaccountHolderName()<<endl;
//         cout<<"Your Account balance is :\n"<<setbalance()<<endl;
//     }
// };

// int main()
// {
//     BankAccount acc1(1, "Alber", 0);
//     acc1.depositmoney(5000);
//     acc1.withdraw(2500);
//     acc1.display();
//     return 0;
// }

// -->Task # 3
// class book
// {
// private:
//     string title;
//     string author;
//     int publishedYear;
//     int price;

// public:
//     // constructor as a setters:
//     book(string a, string b, int c, int d)
//     {
//         title = a;
//         author = b;
//         publishedYear = c;
//         price = d;
//     }

//     // Getters :
//     string gettitle()
//     {
//         return title;
//     }
//     string getauthor()
//     {
//         return author;
//     }
//     int getpublishedYear()
//     {
//         return publishedYear;
//     }
//     int getprice()
//     {
//         return price;
//     }
//     // discounted price calculation :
//     int discountedPrice()
//     {
//         int discount = price * 0.1;
//         int discountedPrice =price-discount;
//         cout << "The discounted price of book is :\n" << discountedPrice << endl;
//     }
//     // Member to display details of books:
//     void display()
//     {
//         cout << "The Title of book is :\n"
//              << gettitle() << endl;
//         cout << "The Author of book is :\n"
//              << getauthor() << endl;
//         cout << "The Published Year of book is :\n"
//              << getpublishedYear() << endl;
//         cout << "The Price of book is :\n"
//              << getprice() << endl;
//     }
// };
// int main()
// {
//     book T1("Treasure Island","Robert Lious Steveson",1958,300);
//     T1.display();
//     T1.discountedPrice();
// }
// --> Task # 4
// Its is too lengthy and we don't have our oops concepts cleared.so thats why it is undone .