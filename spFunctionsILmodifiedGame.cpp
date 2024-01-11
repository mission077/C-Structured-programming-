#include<iostream>
    using std::cin;
    using std::cout;
    using std::endl;

#include<random>


int generateSecretNumber()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    return dist(mt);
}


int getUserGuess()
{
    int guess;
do
    {
    
    cout << " Enter the integer between 1 and 100: ";
    cin >> guess;
    
}while ( guess <= 0 || guess >= 100);
    cout << " Invalid guess. Please try again." << endl;
    return 0;
}


bool correctGuess (int secret_num , int guess)
{
    if (secret_num == guess);
    bool status;
return 0;
}

void guessingGame()
{
    cout << "I am thinking of a number between 1 and 100.  Can you guess what it is? " << endl;
    int secret_num = generateSecretNumber();
    int guess = getUserGuess();
   
    do{
         if (guess > secret_num || guess < secret_num)
    {
        cout << "That is not the number.  Try again." << endl; 
    }
    else
        
        cout << "CONGRATULATIONS!  You guessed correctly! " << endl;
    }while ( guess != secret_num);
  
}


int main()
{
    guessingGame();
    return 0;
}
