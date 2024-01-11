#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::fixed;
using std::setprecision;

#include <cmath>

int findQuadraticRoots(double a, double b, double c, double& x1, double& x2)
{
    double discriminant = pow(b, 2) - 4 * a * c;
    int x = 0;
    if (discriminant < 0 )
    {
       x = 0;
       
    }
    
    else if (discriminant == 0)
    {
    
        x1 = -b / (2 * a);
        x = 1;
    }
    
    else (discriminant > 0);
    {
     x1 = (- b + sqrt(discriminant)) / (2.0 * a);
     x2 = (- b - sqrt(discriminant)) / (2.0 * a);  
     
     x = 2; 
    }
    return x;
}

int findCircleIntersections (double h, double k, double r, double& x1, double& x2){

int a = 1;
double b = -2 * h;
double c = pow(h, 2) + pow(k, 2) - pow(r, 2);

double cross_x_axis = findQuadraticRoots (a, b, c, x1, x2);

return cross_x_axis;
}

int main(){
    
    double x1, x2;
    //Testing points for Quadratic equation
    findQuadraticRoots (-2, 6, 4, x1, x2);
    findQuadraticRoots (-1, 2, -1, x1, x2);
    cout << "x1 = " << x1 << endl;
    findQuadraticRoots ( -1, 2, 3, x1, x2);
    cout << "x1 = " << x1 << " x2 = " << x2 << endl;
    
    //Testing points for circle
    findCircleIntersections(2, 4, -2, x1, x2 );
    findCircleIntersections(5, 3, 3, x1, x2); 
    cout << "x1 = " << x1 << "." << endl;
    findCircleIntersections(2, 0, 6, x1, x2); 
    cout << "x1 = " << x1 << " and x2 = " << x2 << endl;

    return 0;
    
    
}


