#include <iostream>
    using std::cout;
    using std::endl;
    
#include <vector>
    using std::vector;
    
#include <numeric>

#include <algorithm>
 
void displayData(const vector<int>& averages)
{
    for (int currentAverage : averages)
        cout << currentAverage << endl;
}

double calculateAverage(vector<int> numbers)
{
    double average = std :: accumulate (numbers.begin(),
                            numbers.end(), 0.0) / numbers.size();
    return average;
 
}
int main()
{
    //creating the vector 
    vector<int> numbers = {10, 20, 30, 40, 50};
    
    displayData(numbers);
     
    // displaying the average using calculateAverage function
    double average = calculateAverage(numbers);
    cout << "Average is " << average<< endl;
    
    // remove the lowest score and displaying it
    vector<int>::iterator itMinimum = std::min_element(numbers.begin(), numbers.end());
    cout << "The smallest value in dataValues is " << (*itMinimum) << endl;
    
    numbers.erase(std::min_element(numbers.begin(), numbers.end()));
    
    displayData(numbers);
    
    //displaying average after removing minimum score
    average = calculateAverage(numbers);
    cout << "Average is " << average<< endl;
    
    //Finding the perfect score and displaying it
    int searchValue1 = 60;
    
    cout << "\nSearching for " << searchValue1 << "\n" ;
    vector<int>::iterator itOfSearchValue1 = std::find(numbers.begin(), numbers.end(), searchValue1);
    if (itOfSearchValue1 != numbers.end())
    cout << searchValue1 << " was found:  " << (*itOfSearchValue1) << endl;
    else
    cout << searchValue1 << " was not found.\n";

    return 0;
    
}