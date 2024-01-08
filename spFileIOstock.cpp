#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <string>
using std::string;

#include <iomanip>
using std::fixed;
using std::setprecision;



int main(){ //main function
    // Table header with alignments
    cout << "Stock Name";
    cout.width(30);
    cout << "Value";
    cout.width(20);
    cout << "Quantity";
    cout.width(20);
    cout << "Total Worth" << endl;
    
    ifstream inputfile("spFileIOHWstock.txt");
        //Reading and ignoring the unnecessary data from the txt file
        inputfile.ignore(6);
        string name;
        getline(inputfile, name, '~');
        
        double value;
        inputfile >> value;
        inputfile.ignore(40);
        
        
        int quantity;
        inputfile >> quantity;
        
        double total_worth = value * quantity; // calculation 
        
       cout << name;
       cout.width(26);
       cout << value;
       cout.width(20);
       cout << quantity;
       cout.width(20);
       cout << fixed << setprecision(2); 
       cout << total_worth<<endl;
        
        
        inputfile.ignore(7);
        string name2;
        getline(inputfile, name2, '~');
        
        double value2;
        inputfile >> value2;
        inputfile.ignore(40);
        
        int quantity2;
        inputfile >> quantity2;
        
        double total_worth2 = value2 * quantity2; // calculation
        
        
        cout << name2;
        cout.width(31);
        cout << value2;
        cout.width(20);
        cout << quantity2;
        cout.width(20);
        cout << fixed << setprecision(2);
        cout << total_worth2 << endl;
        
        
        inputfile.ignore(7);
        string name3;
        getline(inputfile,name3, '~');
        
        double value3;
        inputfile >> value3;
        inputfile.ignore(40);
        
        int quantity3;
        inputfile >> quantity3;
        
        double total_worth3 = value3 * quantity3; // calculation
        
                
        cout << name3;
        cout.width(15);
        cout << value3;
        cout.width(20);
        cout << quantity3;
        cout.width(20);
        cout << fixed << setprecision(2);
        cout << total_worth3 << endl;
        
        
        inputfile.ignore(7);
        string name4;
        getline(inputfile,name4, '~');
        
        double value4;
        inputfile >> value4;
        inputfile.ignore(41);
        
        int quantity4;
        inputfile >> quantity4;
        
        double total_worth4 = value4 * quantity4; // calculation
        
        
        cout << name4;
        cout.width(30);
        cout << value4;
        cout.width(20);
        cout << quantity4;
        cout.width(20);
        cout << fixed << setprecision(2);
        cout << total_worth4 << endl;
        
        
        inputfile.ignore(6);
        string name5;
        getline(inputfile,name5, '~');
        
        double value5;
        inputfile >> value5;
        inputfile.ignore(41);
        
        int quantity5;
        inputfile >> quantity5;
        
        double total_worth5 = value5 * quantity5; // calculation
        
        
        cout << name5;
        cout.width(30);
        cout << value5;
        cout.width(20);
        cout << quantity5;
        cout.width(20);
        cout << fixed << setprecision(2);
        cout << total_worth5 << endl;
    
        return 0;
}