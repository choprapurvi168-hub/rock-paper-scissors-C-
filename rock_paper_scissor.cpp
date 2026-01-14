#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int user, computer;
    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> user;

    srand(time(0));
    computer = rand() % 3 + 1;

    cout << "Computer choice: " << computer << endl;

    if (user == computer)
    {
        cout << "It's a Tie!" << endl;
    }
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
    {
        cout << "You Win!" << endl;
    }
    else
    {
        cout << "Computer Wins!" << endl;
    }

    return 0;
}
