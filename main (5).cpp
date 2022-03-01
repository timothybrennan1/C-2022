#include <iostream>
using namespace std;
int FiguresFunction(int figures);
int WheelFunction(int wheels);
int BodyFunction(int bodies);
int main(){
    
    cout << "Problem" << endl << endl << "You work in a toy car workshop, and your job is to build";
    cout << " toy cars from a collection of parts. Each toy car needs";
    cout << " 4 wheels, 1 car body, and 2 figures of people to be placed";
    cout << " inside. The user will enter the total number of wheels, car bodies and"; 
    cout << " figures available, how many complete toy cars can you make?" << endl;
    int figures = 0;
    int wheels = 0;
    int bodies = 0;
    
    
    int a[3];
    a[0] = WheelFunction(wheels);
    a[1] = BodyFunction(bodies);
    a[2] = FiguresFunction(figures);
    int temp = a[0];
    for (int i = 0;i<3;i++){
        if (temp > a[i]){
            temp = a[i];
        }
    }
    cout << "You have the materials to make " << temp << " toy cars";
}
int BodyFunction(int bodies){
    int BodiesForCars;
    cout << "How many bodies? ";
    cin >> bodies;
    
    BodiesForCars = bodies;
    return BodiesForCars;
}
int WheelFunction(int wheels){
    int WheelsForCars;
    cout << "How many wheels? ";
    cin >> wheels;
    
    WheelsForCars = wheels/4;
    return WheelsForCars;
}
int FiguresFunction(int figures){
    int FiguresForCars;
    cout << "How many figures? ";
    cin >> figures;
    
    FiguresForCars = figures/2;
    return FiguresForCars;
}

