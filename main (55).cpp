#include <iostream>

using namespace std;

int main(){
    int width,length,height,mass;
    bool bulky = false;
    bool heavy = false;
    cout << "Enter the width (in centimeters) of this package: ";
    cin >> width;
    cout << "Enter the height (in centimeters) of this package: ";
    cin >> height;
    cout << "Enter the length (in centimeters) of this package: ";
    cin >> length;
    cout << "Enter the mass (in kilograms) of this package: ";
    cin >> mass;
    
    int volume = width * height * length;
    if (mass >= 20){
        heavy = true;
    }
    else if (volume == 1000000 || width >= 150 || height >= 150 || length >= 150){
       bulky = true;
    }
    if (heavy == true && bulky == true){
        cout << "This package is REJECTED";
    }
    else if (heavy == true || bulky == true){
        cout << "This package is SPECIAL";
    }
    else{
        cout << "This package is STANDARD";
    }
    
    
    
    
    
    
    
}