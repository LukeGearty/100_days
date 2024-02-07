#include <iostream>
using namespace std;

/*
Practice problems Chapter 3, question 2
*/

const double INTEREST_FIRST_THOUSAND = 1.5;
int main() {

    double balance; // the initial input
    double interest, totalAmountDue, minimumPayment;
    double firstThousand, interestOverThousand;
    char userChoice;
    bool repeatCalculations;

    //get the account balance as input
    
    do {
        cout << "Enter the balance owed: " << endl;
        cin >> balance;

        if (balance <= 1000) {
            interest = balance * (INTEREST_FIRST_THOUSAND / 100);
        } 
        else {
            firstThousand = balance - 1000;
            interestOverThousand = firstThousand * (1.0 / 100);
            interest = (balance * (INTEREST_FIRST_THOUSAND / 100)) + interestOverThousand;
        }

        totalAmountDue = balance + interest;

        if (totalAmountDue <= 10) {
            minimumPayment = totalAmountDue;
        }
        else {
            if ((totalAmountDue * 0.10) < 10) {
                minimumPayment = 10;
            }
            else {
                minimumPayment = totalAmountDue * 0.10;
            }
        }

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout << balance << endl;
        cout << interest << endl;
        cout << totalAmountDue << endl;
        cout << minimumPayment << endl;

        cout << "Do you want to enter do more calculations? Yes (y) or No (n): " << endl;
        cin >> userChoice;

        if (userChoice == 'Y' || userChoice == 'y') {
            repeatCalculations = true;
        }
        else {
            repeatCalculations = false;
        }

    } while (repeatCalculations == true);

    return 0;
}