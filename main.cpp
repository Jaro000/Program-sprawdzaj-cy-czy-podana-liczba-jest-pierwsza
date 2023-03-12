#include <iostream>
#include <stdlib.h>
#include <vector>
#include <valarray>

using std::cout;
using std::cin;
using std::endl;
void zadanie1();
void zadanie2();
bool isPrime(int number);
int main() {
    zadanie2();
}
void zadanie1(){
    int name;
        int numberToGuess = rand()%100;
        int guessedNumber = -1;

        while (guessedNumber != numberToGuess) {
            cout << ("Guess a number: ") << endl;
            cin >> name;
            guessedNumber = name;

            if (guessedNumber > numberToGuess) {
                cout << ("Too big. Try lower.") << endl;
            }
            if (guessedNumber < numberToGuess) {
                cout << ("Too small. Try higher.") << endl;
            }
        }

        cout << ("Congratulations!") << endl;
    }
    void zadanie2(){
        cout << ("Please input the numbers.") << endl;
        cout << ("Type in a negative number to stop.") << endl;
        std::vector<int> numbersToCheckForPrimality;
        int num = 0;
        while(num >= 0) {
            cin >> num;
            numbersToCheckForPrimality.push_back(num);
        }
        for (int number : numbersToCheckForPrimality) {
            if (isPrime(number)) {
                cout << number << " is prime." << endl;
            } else {
                cout << number << " is not prime." << endl;
            }
        }
    }

bool isPrime(int number) {
    if (number < 2) {
        return true;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}



