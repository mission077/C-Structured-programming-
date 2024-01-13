#include <iostream>
using std::cout;
using std :: cin;
using std :: endl;

int main(){
    int dividend;
    int quotient;
    int divisor;
    cout << " Enter the dividend: " ;
    cin >> dividend;
    cout << "Enter the divisor: " ;
    cin >> divisor;
    
    while(divisor <= 0 || dividend <= 0){
        cout << "Enter the dividend: " ;
        cin >> dividend;
        cout << "Enter the divisor: " ;
        cin >> divisor;
    }
    
    int ans = dividend;
    while (ans >= divisor){
        ans = ans - divisor;
        quotient++;
    }
    if (ans != 0){
        cout << dividend << " = " << quotient << " * " << divisor 
             << " + " << ans << endl;
    }
    
    else {
        cout << dividend << " = " << quotient << " * " << divisor << endl;
    }
    return 0;
}