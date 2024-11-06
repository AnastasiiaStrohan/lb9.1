#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "n= ";
    cin >> n;

   
    int C1 = -1;  
    int C2 = 6;   

   
    int r1 = 2;  
    int r2 = 3; 

    
    double an = C1 * pow(r1, n) + C2 * pow(r2, n);

    
    cout << " a_n = " << C1 << " * " << r1 << "^n + " << C2 << " * " << r2 << "^n" << endl;

    
    cout << " a_" << n << " = " << an << endl;

    return 0;
}