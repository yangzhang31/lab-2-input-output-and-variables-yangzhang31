//Yang Zhang
//Lab 2
//9.17.2024

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Part 1
    //Naming Variables for part 1
    string crealName;   //Userinputted Variables
    float caloriesPerServing;   //Userinputted Variables
    float ouncesPerServing;   //Userinputted Variables
    float caloriesPerOunce;   //Computer Calculated Variable

    //Userinput for creal information
    cout << endl;
    cout << "Input the name of choosen creal without any spaces: ";
    cin >> crealName;
    cout << endl;
    cout << "The amount of calories per serving: ";
    cin >> caloriesPerServing;
    cout << endl;
    cout << "The amount of ounces per serving: ";   
    cin >> ouncesPerServing; 
    cout << endl;

    //Caluculation of calories per ounce
    caloriesPerOunce = caloriesPerServing / ouncesPerServing;

    //Printing Sentence
    cout << "One Serving of " << crealName << " is " << ouncesPerServing << " ounces and has " << caloriesPerOunce << " calories per ounce. " << endl;

    //Part 2
    //Naming Variables for part 2
    float caloriesWillingToEat;     //Userinput Variable 
    float ouncesUserEat;        //Computer Caluculated Variable

    //Userinput for calories willing to eat
    cout << endl;
    cout << "How many calories of cereal are you willing to eat today?";
    cout << endl;
    cout << "Answer: ";
    cin >> caloriesWillingToEat;
    cout << endl;

    //Caluculation of amount of ounces user can eat
    ouncesUserEat = caloriesWillingToEat / caloriesPerOunce;

    //Printing Sentence
    cout << "You are able to eat " << ouncesUserEat << " ounces of " << crealName << " today" << endl;

    return 0;
}
