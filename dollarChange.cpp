#include <iostream>
using namespace std;

int main(){
//    double temp{};
//    cout << "What is the temperature outside: ";cin >> temp;
//    
//    int wind_speed{};
//    cout <<"What is the wind speed outside: ",cin >> wind_speed;
//    
//    const double temp_for_coat{45};
//    const int windspeed_for_coat{20};
//    
//    
//    bool wear_coat{false};
//    
//    wear_coat = ( temp < temp_for_coat && wind_speed > windspeed_for_coat);
//        cout << "You should wear a coat!!! " << wear_coat << endl;
//        
//    wear_coat = (temp < temp_for_coat || wind_speed > windspeed_for_coat);
//        cout << "You should wear a coat!!! " << wear_coat << endl;
//        
//        return 0;
    
      int x;
      int dollars;
      int change;
      int quaters;
      int dime;
      int nickles;
      int pennies;
      
      cout << "Enter the cents: ",cin >> x;
     
       dollars = x / 100 ;
       change = x % 100;
       cout << " Dollar = " << dollars << endl;
      
       quaters = change / 25;
       change = quaters % 25;
       cout << " quater= " << quaters << endl;
       
       dime = change / 10;
       change = dime % 10;
       cout << "dime = " << dime << endl;
       
       nickles = change / 5;
       change = change % 5;
       cout << "nickles = " << nickles << endl;
       
       pennies = change;
       cout << "pennies = " << pennies << endl;
       
       return 0;
       
       
       
      
//      if (change = change % 10  );
//      cout <<" dime = " << change << endl;
//      
//      if (change = change % 5);
//      cout << " nickel= " << change << endl;
//      
//      if (change = change % 1);
//      cout << " pennies= " << change << endl;
//      

}