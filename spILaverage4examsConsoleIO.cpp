#include <iostream> //input output stream header

using namespace std; // using namespace

int main(){         //execution of the program

//Prompting the user for the score and possible score and displaying it//
    cout<<"First score: "<<endl;
    int first_score{0};
    cin>> first_score;
    
    cout<<"Second Score: "<<endl;
    int second_score{};
    cin>> second_score;
    
    cout<<"Third Score: "<<endl;
    int third_score{};
    cin>> third_score;
    
    cout<<"Fourth Score: "<<endl;
    int fourth_score{};
    cin>> fourth_score;
    
    cout<<"=========================="<<endl;
    cout<<"\nPossible First score: "<<endl;
    int possible_first_score{};
    cin>> possible_first_score;
    
    cout<<"Possible Second score: "<<endl;
    int possible_second_score{};
    cin>> possible_second_score;
    
    cout<<"Possible Third score: "<<endl;
    int possible_third_score{};
    cin>> possible_third_score;
    
    cout<<"Possible Fourth score: "<<endl;
    int possible_fourth_score{};
    cin>> possible_fourth_score;
    
    //calculating the average score 
    double sum_of_score{(first_score + second_score + third_score + fourth_score)};
    double sum_of_possible_score{(possible_first_score + possible_second_score
            + possible_third_score + possible_fourth_score)};
    
    cout<<"=========================="<<endl;
    double average_score {(sum_of_score / sum_of_possible_score) * 100};
    cout<<"Average Score: "<<average_score<<endl;
    
    return 0; //inform OS of normal exit
    
}
    