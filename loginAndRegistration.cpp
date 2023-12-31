#include <iostream>
#include <fstream>
#include <string>

    using namespace std;
    
    bool log_in()
    
    {
        string username, password, un, pw;
        
        cout << "Enter UserName: " ; cin >> username;
        cout << "Enter Password: " ; cin >> password;
        
        ifstream read ( username + ".txt");
        getline (read, un);
        getline (read, pw);
        
        if (un == username && pw == password)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    int main()
    {
        int choice;
        cout<<"Choose the following option" <<endl;
        cout <<"1. Registration \n2. Login " << endl;
        cout << " Choose 1 or 2 !!"; cin >> choice;
        
        if (choice == 1)
        {
            string username, password;
            cout << " New registration!!"<<endl;
            cout <<" Select a username: "; cin >> username;
            cout <<" Select a password: "; cin >> password;
            
            ofstream file;
            file.open( username + ".txt");
            file << username << endl;
            file << password << endl;
            file.close();
            
            main();
            
        }
        else if (choice == 2);
        bool status = log_in();
        
        if (!status)
        {
            cout << " Unknown user !! "<< endl;
            
            return 0;
            
        }
        else
        {
            cout << " Succesfully Login !! "<< endl;
            return 1;
        }
        
    }
    