#include <iostream>       //input output stream header
using namespace std;      // using namespace

int main(){               //Execution of the program
    
    double voltage;       //variable stored in double
    cout<<"Enter the Voltage: "<<endl; 
    cin>>voltage; 
    
    
    double resistance;     //variable stored in double
    cout<<"Enter the resistance (except zero or above zero): "<<endl;
    cin>>resistance;    //use value except or greater zero 
    
    double current{(voltage / resistance)}; //variable stored in double
    cout<<"\nCurrent: "<<current<<endl;
    
    
    return 0; //inform os of normal exit
    

}
