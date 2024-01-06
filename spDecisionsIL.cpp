#include <iostream>
using namespace std;

int main(){ //initialization function
    int num;
    cout << "Enter the number : " ;
    cin >> num;
    
    if (num % 2 == 0) //use of conditional statement
    {
    cout << num << " is an even number." << endl;
    }
    else{
        cout << num << " is an odd number." << endl;
    }
    
    double diving_score;
    cout << "Enter the diving score: ";
    cin >> diving_score;
    int new_diving_score = diving_score * 10; // calculation 
    if ( 0 <= diving_score && diving_score <= 10 && new_diving_score % 5 == 0)
        {
        cout << diving_score << " is a diving score." <<endl;
        }
    else{
        cout << diving_score << " is not a diving score." << endl;
    }
    return 0;
}
