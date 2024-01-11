#include <iostream>
using namespace std;

int main()
{
    int a, q, d, r;

    cout << "Enter the divisor(d): ";
    cin >> d;
    
    cout << "Enter the dividend(a): ";
    cin >> a;
    
    //calculating the quotient(q) and remainder(r)
    q = a / d ;
    
    r = a % d;
    
    if(r < 0)
        
    {   //using abs to get the positive interger value
        q = q - d / abs(d);
        r = r + abs(d);
    }
    
    cout << "If a = " << a << " and d = " << d << ", then q = " << q
    
    << " and r = "<< r << ", since " << a << " = " << "("<< q << ")("
    
    << d << ") + " << r << "." << endl;
    
    return 0;
}
