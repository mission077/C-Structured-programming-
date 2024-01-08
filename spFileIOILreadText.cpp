#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;


int main(){
        ifstream inputFile ("charString.txt");
        
        //First Line of the Output
        char ch;
        inputFile.get(ch);
        cout << ch << " is the character and";
        
        string name;
        getline(inputFile,name);
        cout << name << " is the name." << endl;
        
        
        //Second Line of the Output
        char cch;
        inputFile.get(cch);
        cout << cch << " is the character and " ;
        
        inputFile.ignore();
        string next_name;
        getline (inputFile,next_name);
        cout << next_name << " is the name." << endl;
        
        
        //Third Line of the Output
        char ccch;
        inputFile.get(ccch);
        cout << ccch << " is the character and " ;
        
        inputFile.ignore();
        string name3;
        getline (inputFile,name3);
        cout << name3 << " is the name." << endl;
        
        
        //Fourth Line of the Output
        char chh;
        inputFile.get(chh);
        cout << chh << " is the character and " ;
        
        string name4;
        getline (inputFile,name4);
        cout << name4 << " is the name." << endl;
        
        
        //Fifth Line of the Output
        char chhh;
        inputFile.get(chhh);
        cout << chhh << " is the character and " ;
        
        inputFile.ignore();
        string name5;
        getline (inputFile,name5);
        cout << name5 << " is the name." << endl;
        
        
        //Sixth Line of the Output
        char cchh;
        inputFile.get(cchh);
        inputFile.ignore();
        cout << cchh << " is the character and " ;
        
        inputFile.ignore();
        string name6;
        getline (inputFile,name6);
        cout << name6 << " is the name." << endl;
        
        
        //Seventh Line of the Output
        char ccchh;
        inputFile.get(ccchh);
        inputFile.ignore(2);
        cout << ccchh << " is the character and " ;
        
        inputFile.ignore();
        string name7;
        getline (inputFile,name7);
        cout << name7 << " is the name." << endl;
        
    return 0;
}