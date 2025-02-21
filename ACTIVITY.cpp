#include <iostream>
using namespace std;

int main() {
    double grams;
    
    cout << "Enter weight in grams: ";
    cin >> grams;
    cout << grams << " grams is equal to " << grams * 0.00220462 << " pounds." << endl;
    
    return 0;
}

