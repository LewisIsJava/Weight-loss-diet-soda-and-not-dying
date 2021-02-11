// Weight loss, diet soda and not dying.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// the aim of this program is to allow a user to drink as much soda pop as they can without dying to the artificinal sweetner in the drink, assuming that the lethal dose for a mouse is 5 grams
// and the mouse weighs 35 grams
// the drink weighs 350 grams and contains 1/10th of 1% artificinal sweetner
// the user will enter their weights in pounds and it will be converted to grams
// their weight in grams will be divided by the weight of the mouse, this allows us to see how many mice he is in weight
// we can then divide that number by 5 (the lethal dose for a mouse) too see what his lethal dose would be)

int main()
{
    const int mouse_weight_in_grams = 35, mouse_lethal_dose = 5;
    int user_weight_in_grams, user_weight_in_pounds, user_lethal_dose, soda_weight = 350;
    const double fraction_of_sweetner_in_soda = 0.001;
    double sweetener_in_soda = soda_weight * fraction_of_sweetner_in_soda, total_drink;
    
    
    cout << "This program will calculate the amount of soda you can drink without the sweetner killing you\n"
        << "Please enter your wieght in pounds and press enter when done\n";
    cin >> user_weight_in_pounds;
           
    while (user_weight_in_pounds > 0)
    {
        user_weight_in_grams = user_weight_in_pounds * 454;

        cout << "You weight in grams is: " << user_weight_in_grams << endl;

        user_lethal_dose = (user_weight_in_grams / mouse_weight_in_grams) * mouse_lethal_dose;

        cout << "Making your lethal dose in grams: " << user_lethal_dose << endl;

        sweetener_in_soda = soda_weight * fraction_of_sweetner_in_soda;
    
        cout << "you can have: " << user_lethal_dose - 1 << " grams of soda before you will OD" << endl;

        cout << "This is the equivalent to: " << user_lethal_dose / sweetener_in_soda << " cans of soda" << endl;

        cout << "If you would like another calculation please enter your new desired weight: ";

        cin >> user_weight_in_pounds;
    }

     
  
}
// I believe this program to potentially not be correct, the outputs are correct however I think this program could be done a lot better.
