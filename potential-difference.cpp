// Use C++ to write  program to find the potential difference in a circuit using the formular. PD=I*R
#include <iostream>
using namespace std;

int main()
{

    //Declare my units and variables 
    double I, R, PD;

    cout << "Enter the value for I: ";

    // Stores a floating point number in variable I
    cin >> I;

    cout << "Enter the value for R: ";
    // Stores a floating point number in variable R
    cin >> R;
 

    // Performs multiplication and stores the result in variable PD
    PD = I * R;  

    cout << "PD = " << PD;    
    
    return 0;
}
