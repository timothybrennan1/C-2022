#include <iostream>
#include <cstring>
using namespace std;

int main(){
//  This program checks to see if any number is a duodigit 
    int iteration = 0;
    int numberDigits = 0;
    char myString [30] = "";
    cout << "Enter a number, and I'll tell you if it is a duodigit: " << endl;
    cin >> myString;
    
    char x = myString[0];
    for (int i = 1;i<strlen(myString);i++){
        if (myString[i] != myString[i-1]){
            iteration = i;
        }
    }
    char y = myString[iteration];
    
    bool myBool = false;
    for (int i = 0; i < strlen(myString) ;i++){
        if (myString[i] == x || myString[i] == y){
            myBool = false;
        }
        else{
            myBool = true;
            break;
        }
    }
    if (myBool == true){
        cout << "This number is NOT a duodigit";
    }
    else{
        cout << "This number is a duodigit!!";
    }
}
