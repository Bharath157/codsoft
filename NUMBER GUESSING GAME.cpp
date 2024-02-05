#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
 {
    srand(time(0));

    
    int randomNumber = rand() % 100 + 1;
    int Guessnumber;

    while (true)
	{
        
        cout << "Guess the number between 1 to 100 :  ";
        cin >> Guessnumber;

       
        if (Guessnumber == randomNumber)
		{
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
		 else if (Guessnumber < randomNumber)
		{
            cout << "Too low! guess again." << endl;
        } else
		{
            cout << "Too high! guess again." << endl;
        }
    }

    return 0;
}

