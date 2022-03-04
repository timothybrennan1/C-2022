#include <iostream>
using namespace std;
int main(){
    string pattern = "1,1";
    string a[9];
    a[0] = "0,0"; 
    a[1]  = "0,1"; 
    a[2]  = "0,2";
    a[3]  = "1,0";
    a[4]  = "1,1";
    a[5] = "1,2";
    a[6] = "2,0";
    a[7] = "2,1";
    a[8] = "2,2";
    cout << "I am looking for the pattern 1,1 in the picture below."<<endl;
    cout << "This is the picture: " << endl;
    cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;
    cout << a[3] << "\t" << a[4] << "\t" << a[5] << endl;
    cout << a[6] << "\t" << a[7] << "\t" << a[8] << endl;
    for (int i = 0;i<5;i++){
        if (a[i] == pattern){
            cout << "The pattern 1,1 is in this picture";
            return 0;
        }
    }
    cout << "Pattern not in picture";


    
}