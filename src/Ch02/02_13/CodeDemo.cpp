// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

using namespace std; 

int main() {
    int array[5]; 
    float avg; 

    cout << "Please enter 5 ints seperated by a enter" << endl; 
    cin >> array[0]; 
    cin.sync(); 
    cin >> array[1]; 
    cin.sync();
    cin >> array[2]; 
    cin.sync(); 
    cin >> array[3]; 
    cin.sync(); 
    cin >> array[4]; 

    avg = (array[0] + array[1] + array [2] + array[3] + array[4])/5.0;

    cout << "the average is: " << avg << "!";  

    cout << endl << endl;

    
}
