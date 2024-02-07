#include <iostream>
using namespace std;

/*
Practice Problem 1
*/
int main() {
    //declare variables
    char playerOne, playerTwo, playerChoice;
    bool playAgain;

    do {
        //get inputs
        cout << "Player One! Enter Rock (R), Paper(P), or Scissors (S): " << endl;
        cin >> playerOne;

        cout << "Player Two! Enter Rock (R), Paper(P), or Scissors (S): " << endl;
        cin >> playerTwo;

        if (playerOne == 'P' || playerOne == 'p') {
            if (playerTwo == 'P' || playerTwo == 'p') {
                cout << "Both are paper! It is a tie!";
            }
            else if (playerTwo == 'R' || playerTwo == 'r') {
                cout << "Paper beats rock! Player one wins!";
            }
            else if (playerTwo == 'S' || playerTwo == 's') {
                cout << "Scissors beats paper! Player two wins!";
            }
        }
        else if (playerOne == 'R' || playerOne == 'r') {
            if (playerTwo == 'R' || playerTwo == 'r') {
                cout << "Both are rock! It is a tie";
            }
            else if (playerTwo == 'P' || playerTwo == 'p') {
                cout << "Paper beats rock! Player two wins!";
            }
            else if (playerTwo == 'S' || playerTwo == 's') {
                cout << "Rock beats scissors! Player one wins!";
            }
        }
        else if (playerOne == 'S' || playerOne == 's') {
            if (playerTwo == 'S' || playerTwo == 's') {
                cout << "Both are scissors! It is a tie";
            }
            else if (playerTwo == 'P' || playerTwo == 'p') {
                cout << "Paper beats scissors! Player Two wins!";
            }
            else if (playerTwo == 'R' || playerTwo == 'r') {
                cout << "Scissors beats rock! Player one wins!";
            }
        }
        else {
            cout << "There might be some invalid input" << endl;
        }
        cout << endl;
        //asking if they want to play again
        cout << "Do you want to play again? Yes (y) or No (n):" << endl;
        cin >> playerChoice;

        if (playerChoice == 'y' || playerChoice == 'Y') {
            playAgain = true;
        }
        else {
            playAgain = false;
        } 

    } while (playAgain == true);


    return 0;
}