//
// Created by lukas buse MAC on 4/11/22.
//

#include "main.h"
#include <iostream>
#include <string>

using namespace std;


int menu(){
    cout << "Welcome to the program" << endl << "What would you like to do?" << endl;
    cout << "1)  Check if the reverse of an integer is greater" << endl;
    cout << "2)  Find prime numbers less than or equal to an integer" << endl;
}

int reverseInteger(int num){

    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
bool primeInteger(int n){
    if (n <= 1){
        return false;
    } for (int i = 2; i < n; i++){
        if (n % i == 0) {
            return false;
        } return true;
    }
}//eo func, prime algo
int printPrime(int n){
    cout << "The prime numbers are: " << endl;
    for(int i = 2; i<= n; i++){
        if(primeInteger(i)){
            cout  << i << " ";
        }
    }
    return n;
}

int main() {

    int userChoice;
    int option1 = 1;
    int option2 = 2;
    int enterInt;
    string userContinue;

    cout << "Enter your choice: " << endl;
    cin >> userChoice;

    if (userChoice == option1) {
        int userReverseInt;
        cout << "You chose 1, check if the reverse of an integer is greater." << endl;
        cout << "Enter an integer: ";
        cin >> userReverseInt;

        int z;
        z = reverseInteger(userReverseInt); //calling the reverse func
        cout << "The reverse is: " <<  z << endl;
    }
    else if (userChoice == option2) {
        int userPrimeInt;
        cout << "You chose 2, Find prime numbers less than or equal to an integer." << endl;
        cout << "Enter an integer: ";
        cin >> userPrimeInt;

        printPrime(userPrimeInt); //calling function

    }
    else {
        cout << "You did not enter a valid number. " << endl;
        //where ask, continue or quit
        do{
            cout << "Would you like to continue (enter 'yes', 'y', 'no', or 'n'): ";
            cin >> userContinue;

            //add functionality to make the menu pop up again. if 1 do... if 2 do
        } while((userContinue == "yes") || (userContinue == "y")); 




    return 0;
}






/*
 *   int userChoice;
    string validInput;
    int option1 = 1;
    int option2 = 2;
    int enterInt;

    do {
        cout << endl;
        menu();

        cin >> userChoice;

        if (userChoice == option1) {
            int reverseInteger(int num);
            //NOT SET UP RIGHT
        }
        if (userChoice == option2) {
            int primeNumbers(int num, bool is_prime);
            //NOT SET UP RIGHT
        }

        if(userChoice != option1 || userChoice != option2){
            cout << "You did not enter a valid number. " << endl;
            cout << "Would you like to continue (enter 'yes', 'y', 'no', or 'n'): ";
            cin >> validInput;
        }

        if (validInput == "yes" || validInput == "y") {
            cout << "What would you like to do?" << endl;
            cout << "1)  Check if the reverse of an integer is greater" << endl;
            cout << "2)  Find prime numbers less than or equal to an integer" << endl;
            cout << "Choice: ";
            cin >> userChoice;
            //loop back to original and do 1 or 2 ()
        }
        if (validInput == "no" || validInput == "n") {
            cout << "Quit Program" << endl;

        } else {
            cout << "This is not a valid choice. Enter, ('yes', 'y', 'no', or 'n'): ";
        }
    } while ();
 */