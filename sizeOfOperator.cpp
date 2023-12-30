// Size of the Operator

#include <iostream>
#include <climits>      // Determine the size of the operators 

using namespace std;

int main(){
    cout<<"Size of The Operator"<<endl;
    cout<<"=========================="<<endl;
    
    cout<<"char:"<<sizeof(char)<< " bytes"<<endl;
    cout<<"int:"<<sizeof(int)<< " bytes"<<endl;
    cout<<"unsigned int:"<<sizeof(unsigned int)<< " bytes"<<endl;
    cout<<"short:"<<sizeof(short)<< " bytes"<<endl;
    cout<<"long:"<<sizeof(long)<< " bytes"<<endl;
    cout<<"long long:"<<sizeof(long long)<< " bytes"<<endl;
    
    cout<<"==========================="<<endl;

    cout<<" Size of Float"<<endl;
    
    cout<<"Float:"<<sizeof(float)<<" bytes."<<endl;
    cout<<"Double:"<<sizeof(double)<<" bytes."<<endl;
    cout<<"Long Double:"<<sizeof(long double)<<" bytes."<<endl;
    
    cout<<"============================"<<endl;
    
    cout<< "Mininum values "<<endl;
    
    cout<<"Char:"<<CHAR_MIN<<endl;
    cout<<"Int:"<<INT_MIN<<endl;
    cout<<"Short:"<<SHRT_MIN<<endl;
    cout<<"Long:"<<LONG_MIN<<endl;
    cout<<"Long Long:"<<LLONG_MIN<<endl;
    
    cout<<"============================="<<endl;
    
     cout<< "Miximum values "<<endl;
    
    cout<<"Char:"<<CHAR_MAX<<endl;
    cout<<"Int:"<<INT_MAX<<endl;
    cout<<"Short:"<<SHRT_MAX<<endl;
    cout<<"Long:"<<LONG_MAX<<endl;
    cout<<"Long Long:"<<LLONG_MAX<<endl;
    
    cout<<"============================="<<endl;
    
    cout<<" Sizeof using Variable name"<<endl;
    
    int age{20};
    cout<<"age:"<<sizeof age<<" bytes"<<endl;
    
    double wage {20.50};
    cout<<"wage:"<<sizeof wage<<" bytes"<<endl;
    
}