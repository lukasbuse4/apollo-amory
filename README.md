# apollo-amory

#include <iostream>
#include <string>

using namespace std;

int reverseInteger(int num){

    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;

    //need to see if rev-Num is greater than userInput number
}
int primeNumbers(int num, bool is_prime){
    while(num > 0){
        is_prime = true;

        if(num == 0 || num == 1){
            is_prime = false;
        }
        for (int i = 2; i <= num/2; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
            if (is_prime){
                cout << num << ", ";
                ++ num;
            }
        }
    }//while loop done
    return num;
}

int menu(){
    cout << "Menu working???" << endl;
    int askUser;
    string validInput;
    int option1 = 1;
    int option2 = 2;
    int enterInt;




    cout << "Welcome to the program" << endl << "What would you like to do?" << endl;
    cout << "1)  Check if the reverse of an integer is greater" << endl;
    cout << "2)  Find prime numbers less than or equal to an integer" << endl;
    cout << "Choice: ";
    cin >> askUser;

    while (askUser == option1 || askUser == option2) {
        if (askUser == option1) {
            cout << "do 1 functionality ";
            cout << "Enter an integer";
            cin >> enterInt ;
            cout << endl;
            cout << "You entered" << enterInt;


            //reverse algorithm w/ forloop

            //deterimne if reverese algo is > than

        }
        if (askUser == option2) {
            cout << "Do 2 functionality";

        }//nested if statemnts for ether option 1 or option 2
            //then add functionality
        else {
            cout << "You did not enter a valid number." << endl;
            cout << "Would you like to continue?" << endl;
            cin >> validInput;
            cout << "Enter 'yes', 'y', 'no' or 'n'):  " << validInput;

            if (validInput == "yes" || 'y') {
                cout << "What would you like to do?";
                cout << "1)   Check if the reverse of an integer is greater" << endl;
                cout << "2)  Find prime numbers less than or equal to an integer" << endl;
                cout << "Choice: ";
            } if (validInput == "no" || "n") {
                //quit the program!!!
            } else {
                cout << "You did not enter valid input.  You entered:" << validInput;
            }
        }
    }
} //end of function


int main() {
    int rev_num = 45673;
    int num = 15;
    cout << "The reverse of the number " << reverseInteger(rev_num) << endl;
    cout << "The prime numbers are" << primeNumbers(num, true)<< endl;
    std::cout << "Hello, World!" << std::endl;

    menu();



    return 0;
}
