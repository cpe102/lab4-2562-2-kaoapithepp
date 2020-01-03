#include <iostream>

using namespace std;

int findDivisor(int x){
    int i=2;
    while (i > 1){
        if (x%i == 0){
            return i;
        } else {
            i++;
        }
    }
}

int main(){

    int yourNumber;
    cout << "Enter Your Number: ";
    cin >> yourNumber;
    cout << "The lowest number that can divide yours: " << findDivisor(yourNumber) << endl;

    return 0;
}
