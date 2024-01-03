//Primitive Types

#include <iostream>

using namespace std;

int main(){
//Character Type
    char middle_inital {'R'};//Notice the single quotes and characters
    cout<<"My middle inital is "<<middle_inital << endl;
    
//Interger Types
    unsigned short int exam_score{55}; // same as unsigned short exam_score
    cout<<"My exam score was "<<exam_score<<endl;
    
    int countries_respresented {65};
    cout<<"There were " <<countries_respresented << " countries represented in my meeting" <<endl;
    
    long people_in_jonesboro {200000000};
    cout<<"There are about " << people_in_jonesboro <<"people in jonesboro" << endl;
    
//Floating Point types
    float car_payment {401.25};
    cout <<"My monthly car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout <<"Pi is " <<pi<<endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is very big number" << endl;
    
// Boolean Type
    bool game_over {false};
    cout << " The vale of Game Over is " << game_over << endl;
    
// Overflow example 
    int value_1 {2000};
    int value_2 {1000};
    int product { value_1 * value_2};
    cout << " The product of " << value_1 << " and "<< value_2 << " is " << product << endl;
    
    return 0;
    
    
}
