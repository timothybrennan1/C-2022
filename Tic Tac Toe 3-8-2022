#include <iostream>
using namespace std;
void BoardArray (string BoardArray[3][3]);
void printBoard (string BoardArray[3][3]);
void updateBoard (string userMove,string BoardArray[3][3]);
void updateBoard2 (string userMove2,string BoardArray[3][3]);
bool checkBoard (string BoardArray[3][3]);
int main(){
    string userMove = "";
    string userMove2 = "";
    string BoardArray[3][3];
    BoardArray[0][0] = "0,0";
    BoardArray[0][1] = "0,1";
    BoardArray[0][2] = "0,2";
    BoardArray[1][0] = "1,0";
    BoardArray[1][1] = "1,1";
    BoardArray[1][2] = "1,2";
    BoardArray[2][0] = "2,0";
    BoardArray[2][1] = "2,1";
    BoardArray[2][2] = "2,2";
    cout << "Here is the coordinate system for this tic tac toe game: "<< endl;
    printBoard(BoardArray);
    
    cout << "User 1, enter a move: ";
    getline (cin,userMove,'\n');
    updateBoard(userMove,BoardArray);
    printBoard(BoardArray);
    
    cout << "User 2, enter a move: ";
    getline (cin,userMove2,'\n');
    updateBoard2(userMove2,BoardArray);
    printBoard(BoardArray);
    
    cout << "User 1, enter a move: ";
    getline (cin,userMove,'\n');
    updateBoard(userMove,BoardArray);
    printBoard(BoardArray);
    
    cout << "User 2, enter a move: ";
    getline (cin,userMove2,'\n');
    updateBoard2(userMove2,BoardArray);
    printBoard(BoardArray);
    
    cout << "User 1, enter a move: ";
    getline (cin,userMove,'\n');
    updateBoard(userMove,BoardArray);
    printBoard(BoardArray);
    
    checkBoard(BoardArray);
    

    if (checkBoard(BoardArray) == false){
        return 0;
    }
    
    cout << "User 2, enter a move: ";
    getline (cin,userMove2,'\n');
    updateBoard2(userMove2,BoardArray);
    printBoard(BoardArray);
    
    
    
    checkBoard(BoardArray);
    if (checkBoard(BoardArray) == false){
        return 0;
    }
    
    cout << "User 1, enter a move: ";
    getline (cin,userMove,'\n');
    updateBoard(userMove,BoardArray);
    printBoard(BoardArray);
    
    checkBoard(BoardArray);
    if (checkBoard(BoardArray) == false){
        return 0;
    }
    
    cout << "User 2, enter a move: ";
    getline (cin,userMove2,'\n');
    updateBoard2(userMove2,BoardArray);
    printBoard(BoardArray);
    
    checkBoard(BoardArray);
    if (checkBoard(BoardArray) == false){
        return 0;
    }
    
    cout << "User 1, enter a move: ";
    getline (cin,userMove,'\n');
    updateBoard(userMove,BoardArray);
    printBoard(BoardArray);
    
    checkBoard(BoardArray);
    if (checkBoard(BoardArray) == false){
        return 0;
    }
    
    cout <<"Cat's game";
}
void BoardArray (string BoardArray[3][3]){
    BoardArray[0][0] = "0,0";
    BoardArray[0][1] = "0,1";
    BoardArray[0][2] = "0,2";
    BoardArray[1][0] = "1,0";
    BoardArray[1][1] = "1,1";
    BoardArray[1][2] = "1,2";
    BoardArray[2][0] = "2,0";
    BoardArray[2][1] = "2,1";
    BoardArray[2][2] = "2,2";
}
void printBoard (string BoardArray[3][3]){
    for (int rows = 0;rows<3;rows++){
        for (int columns = 0;columns<3;columns++){
            cout << BoardArray[rows][columns] << "\t";
        }
        cout << endl;
    }
}
void updateBoard (string userMove,string BoardArray[3][3]){
    if (userMove == "0,0" && BoardArray[0][0] != "X" && BoardArray[0][0]!="O"){
        BoardArray[0][0] = "X";
    }
    else if (userMove == "0,1"&& BoardArray[0][1] != "X" && BoardArray[0][1]!="O"){
        BoardArray[0][1] = "X";
    }
    else if (userMove == "0,2"&& BoardArray[0][2] != "X" && BoardArray[0][2]!="O"){
        BoardArray[0][2] = "X";
    }    
    else if (userMove == "1,0"&& BoardArray[1][0] != "X" && BoardArray[1][0]!="O"){
        BoardArray[1][0] = "X";
    }
    else if (userMove == "1,1"&& BoardArray[1][1] != "X" && BoardArray[1][1]!="O"){
        BoardArray[1][1] = "X";
    }
    else if (userMove == "1,2"&& BoardArray[1][2] != "X" && BoardArray[1][2]!="O"){
        BoardArray[1][2] = "X";
    }
    else if (userMove == "2,0"&& BoardArray[2][0] != "X" && BoardArray[2][0]!="O"){
        BoardArray[2][0] = "X";
    }
    else if (userMove == "2,1"&& BoardArray[2][1] != "X" && BoardArray[2][1]!="O"){
        BoardArray[2][1] = "X";
    }
    else if (userMove == "2,2"&& BoardArray[2][2] != "X" && BoardArray[2][2]!="O"){
        BoardArray[2][2] = "X";
    }
    else{
        
    }     
    
}
void updateBoard2 (string userMove2,string BoardArray[3][3]){
    if (userMove2 == "0,0"&& BoardArray[0][0] != "X" && BoardArray[0][0]!="O"){
        BoardArray[0][0] = "O";
    }
    else if (userMove2 == "0,1"&& BoardArray[0][1] != "X" && BoardArray[0][1]!="O"){
        BoardArray[0][1] = "O";
    }
    else if (userMove2 == "0,2"&& BoardArray[0][2] != "X" && BoardArray[0][2]!="O"){
        BoardArray[0][2] = "O";
    }    
    else if (userMove2 == "1,0"&& BoardArray[1][0] != "X" && BoardArray[1][0]!="O"){
        BoardArray[1][0] = "O";
    }
    else if (userMove2 == "1,1"&& BoardArray[1][1] != "X" && BoardArray[1][1]!="O"){
        BoardArray[1][1] = "O";
    }
    else if (userMove2 == "1,2"&& BoardArray[1][2] != "X" && BoardArray[1][2]!="O"){
        BoardArray[1][2] = "O";
    }
    else if (userMove2 == "2,0"&& BoardArray[2][0] != "X" && BoardArray[2][0]!="O"){
        BoardArray[2][0] = "O";
    }
    else if (userMove2 == "2,1"&& BoardArray[2][1] != "X" && BoardArray[2][1]!="O"){
        BoardArray[2][1] = "O";
    }
    else if (userMove2 == "2,2"&& BoardArray[2][2] != "X" && BoardArray[2][2]!="O"){
        BoardArray[2][2] = "O";
    }
    else{
        
    }    
    
}
bool checkBoard (string BoardArray[3][3]){
    if (BoardArray[0][0] == "X" && BoardArray[0][1] == "X" && BoardArray[0][2] == "X"){
        cout << "Player 1 wins!!" << endl;
        return false;
    }
    else if (BoardArray[0][0] == "X" && BoardArray[1][1] == "X" && BoardArray[2][2] == "X"){
        cout << "Player 1 wins!!" << endl;
        return false;
    }
    else if (BoardArray[0][0] == "X" && BoardArray[1][0] == "X" && BoardArray[2][0] == "X"){
        cout << "Player 1 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[1][0] == "X" && BoardArray[1][1] == "X" && BoardArray[1][2] == "X"){
        cout << "Player 1 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[2][0] == "X" && BoardArray[2][1] == "X" && BoardArray[2][2] == "X"){
        cout << "Player 1 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[2][0] == "X" && BoardArray[1][1] == "X" && BoardArray[0][2] == "X"){
        cout << "Player 1 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[0][0] == "O" && BoardArray[0][1] == "O" && BoardArray[0][2] == "O"){
        cout << "Player 2 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[0][0] == "O" && BoardArray[1][1] == "O" && BoardArray[2][2] == "O"){
        cout << "Player 2 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[0][0] == "O" && BoardArray[1][0] == "O" && BoardArray[2][0] == "O"){
        cout << "Player 2 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[1][0] == "O" && BoardArray[1][1] == "O" && BoardArray[1][2] == "O"){
        cout << "Player 2 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[2][0] == "O" && BoardArray[2][1] == "O" && BoardArray[2][2] == "O"){
        cout << "Player 2 wins!!"<< endl;
         return false;
    }
    else if (BoardArray[2][0] == "O" && BoardArray[1][1] == "O" && BoardArray[0][2] == "O"){
        cout << "Player 2 wins!!"<< endl;
         return false;
    }
    else{
        return true;
    }
}










