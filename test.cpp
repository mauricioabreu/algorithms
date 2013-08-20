// test magic number (42)

#include <iostream>

using namespace std;

const int magic_number = 42;

int main()
{
    int number;

    do
    {
        cout << "Type your guess: " << endl;
        cin >> number;
        cout << "Your guess was: " << number << endl;
    } while (number!=magic_number);

    return 0;
}
