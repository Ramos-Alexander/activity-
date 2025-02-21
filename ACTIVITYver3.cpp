#include <iostream>
using namespace std;

int main() {
    double distance, time;
    
    cout << "Enter the distance traveled (in km): ";
    cin >> distance;
    cout << "Enter the time taken (in hours): ";
    cin >> time;
    
    if (time == 0) {
        cout << "Time cannot be zero." << endl;
    } else {
        cout << "The speed of the car is " << distance / time << " km/h." << endl;
    }
    
    return 0;
}
