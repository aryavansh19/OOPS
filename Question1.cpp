#include <iostream>
using namespace std;
int main()
{
    float unit = 0, bill = 0;
    string name;
    cout << "Enter " << " name of user and his unit:\n";
    cin >> name >> unit;
    if (unit <= 100)
        bill = unit * 0.6;
    else if (unit <= 300)
        bill = 60 + (unit - 100) * 0.8;
    else
        bill = 220 + (unit - 300) * 0.9;
    if (bill < 50)
        bill = 50;
    else if (bill > 300)
        bill = bill + (bill * 0.15);
    cout << name << " charges are: Rs " << bill << endl;

}
