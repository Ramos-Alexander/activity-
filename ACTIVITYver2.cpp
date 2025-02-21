#include <iostream>
using namespace std;

int main() {
    double diameter;
    
    cout << "Enter the diameter of the circle: ";
    cin >> diameter;
    double radius = diameter / 2;
    cout << "The area of the circle is " << 3.14159 * (radius * radius) << " square units." << endl;
    
    return 0;
}

