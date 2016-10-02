#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!\n" << endl;

    int monthnumber;

    cout << "Enter in the number of month you were born in: ";
    cin >> monthnumber;

    switch(monthnumber)
{
case 1:
    cout << "You were born in January" << endl;
    break;
case 2:
    cout << "You were born in February" << endl;
    break;
case 3:
    cout << "You were born in March" << endl;
    break;
case 4:
    cout << "You were born in April" << endl;
    break;
case 5:
    cout << "You were born in May" << endl;
    break;
case 6:
    cout << "You were born in June" << endl;
    break;
case 7:
    cout << "You were born in July" << endl;
    break;
case 8:
    cout << "You were born in August" << endl;
    break;
case 9:
    cout << "You were born in September" << endl;
    break;
case 10:
    cout << "You were born in October" << endl;
    break;
case 11:
    cout << "You were born in November" << endl;
    break;
case 12:
    cout << "You were born in December" << endl;
    break;
default:
    cout << "You entered an invalid #." << endl;
}
    return 0;
}
