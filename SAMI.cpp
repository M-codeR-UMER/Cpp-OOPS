
#include <iostream>
using namespace std;
class car
{

private:
    string name;
    int price;
    int model;
    string company;
    string type;

public:

    void setdata()
    {
        cout << "Enter the name of car " << endl;
        cin >> name;
        cout << "Enter the manufactures  of car " << endl;
        cin >> company;
        cout << "Enter the price of car " << endl;
        cin >> price;
        cout << "Enter the model of car " << endl;
        cin >> model;
        cout << "Enter the type of car " << endl;
        cin >> type;
    }

    void print()
    {
        cout <<endl<< "Car name: " << name << endl;
        cout <<endl<< "Company: " << company << endl;
        cout <<endl<< "Price: " << price << endl;
        cout <<endl<< "Model: " << model << endl;
        cout <<endl<< "Type: " << type << endl;
    }
};



int main()
{
    int n, i;
    cout << "Enter the number of cars :" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the data of car  : " << i + 1 << endl;
        car i;
        i.setdata();
        i.print();
    }
    return 0;
}