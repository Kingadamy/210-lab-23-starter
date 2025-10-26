#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

// create main menu function for these options:
// *** GOAT MANAGER 3001 ***
// [1] Add a goat
// [2] Delete a goat
// [3] List goats
// [4] Quit
// Choice --> 

int main_menu() {
 cout << "*** GOAT MANAGER 3001 ***\n"
      << "[1] Add a goat\n"
      << "[2] Delete a goat\n"
      << "[3] List goats\n"
      << "[4] Quit\n"
      << "Choice --> ";

      int choice;
        cin >> choice;
        return choice;
}
      
void add_goat(list<Goat> &trip, string names[], string colors[]) { // create a new goat with random name, color, age
    int name_used = rand() % SZ_NAMES; // select random name from the names array
    int color_used = rand() % SZ_COLORS; // select random color from the colors array
    int age = rand() % (MAX_AGE + 1); // select random age from 0 to MAX_AGE

    Goat new_goat; // here we create the new goat
    new_goat.set_name(names[name_used]); // set the name
    new_goat.set_color(colors[color_used]); // set the color
    new_goat.set_age(age); // set age

    trip.push_back(new_goat); // add the new goat to the list

    cout << "Added goat: " << new_goat.get_name() << ", Age: " << new_goat.get_age()
         << ", Color: " << new_goat.get_color() << endl;
}

void delete_goat(list<Goat> &trip) {


}
   




int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();




    return 0;
}

