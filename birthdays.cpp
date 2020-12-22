/**
 * birthdays.cpp
 * Project UID: d27ac2f9d9ef51141f8207ca61bd9b22d96076f1
 * 
 * <#Name#>
 * <#Uniqname#>
 *
 * EECS 183: Project 2
 *
 * <#description#>
 */

#include <cmath>
#include <iostream>
#include <string>


using namespace std;


/**
 * REQUIRES: nothing
 * MODIFIES: cout
 * EFFECTS:  Prints out the initial heading for the program
 */
void printHeading();


/**
 * REQUIRES: nothing
 * MODIFIES: cout
 * EFFECTS:  Prints out the final greeting for the program
 */
void printCloser();


/**
 * REQUIRES: nothing
 * MODIFIES: cout 
 * EFFECTS:  Prints the menu text. Does not read from cin.
 */
void printMenu();

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * REQUIRES: nothing
 * MODIFIES: cout, cin
 * EFFECTS:  1. Prints the menu
 *           2. Reads the input from the user
 *           3. Checks to make sure the input is within range for the menu
 *              If not prints "Invalid menu choice"
 *           4. Continues to print the menu and read an input until 
 *              a valid one is entered
 *           5. Returns the user's choice of menu options
 * 
 *           This function must call printMenu().
 */
int getMenuChoice();

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * REQUIRES: month, day, year represent a valid date
 * MODIFIES: nothing
 * EFFECTS:  Returns true if the date is in the limits
 *           of the Gregorian calendar otherwise returns false
 *           See the spec for definition of "limits of the Gregorian calendar"
 */
bool isGregorianDate(int month, int day, int year);

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * REQUIRES: year is a Gregorian year
 * MODIFIES: nothing
 * EFFECTS:  returns true if the year is a leap year
 *           otherwise returns false.
 *           See the spec for definition of a leap year.
 */
bool isLeapYear(int year);

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * REQUIRES: month, day, year may represent a date
 * MODIFIES: nothing
 * EFFECTS:  returns true if the date is valid
 *           otherwise returns false
 *           See the spec for definition of "valid"
 */
bool isValidDate(int month, int day, int year);

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * REQUIRES: month, day, year is a valid date
 *           i.e., the date passed to this function has already passed
 *               isValidDate()
 * MODIFIES: nothing
 * EFFECTS:  returns the value f that Zeller's formula calculates
 */
int determineDay(int month, int day, int year);

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * REQUIRES: day is a value of f output by Zeller's formula
*            (0 represents Saturday, 1 Sunday, 2 Monday, 3 Tuesday, etc)
 * MODIFIES: cout
 * EFFECTS:  prints the day of the week corresponding to day, suchas
 *           "Sunday", "Monday", ..., "Saturday"
 */
void printDayOfBirth(int day);

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * REQUIRES: nothing
 * MODIFIES: cout, cin
 * EFFECTS:  Asks for the month / day / year of the user's birthday.
 *           If the date is valid, it will print the day
 *           of the week you were born on
 *           Otherwise, it will print "Invalid date" prompt.
 */
void determineDayOfBirth();

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * REQUIRES: nothing
 * MODIFIES: cin, cout
 * EFFECTS:  Asks for a Gregorian year and prints the
 *           10 leap years after (not including) the year entered.
 *           If the year is invalid, it prints nothing.
 */
void print10LeapYears();


void birthdays() {    
    // TODO: implement
  printHeading();

  int choice = getMenuChoice();
  cout << "Choice was: " << choice << endl << endl;
}



void printHeading() {
    cout << "*******************************" << endl
         << "      Birthday Calculator      " << endl
         << "*******************************" << endl << endl;
    return;
}


void printCloser() {
    cout << endl;
    cout << "****************************************************" << endl
         << "      Thanks for using the Birthday Calculator      " << endl
         << "****************************************************" << endl
         << endl;
    return;
}


void printMenu() {
    cout << endl;
    cout << "Menu Options" << endl
         << "------------" << endl;
    cout << "1) Determine day of birth" << endl;
    cout << "2) Print the next 10 leap years" << endl;
    cout << "3) Finished" << endl << endl;
    
    cout << "Choice --> ";
    return;
}

int getMenuChoice() {
  // TODO: implement
  
  int choice = 0;
  bool first_time = true; 

  while ((choice < 1) || (choice > 3))
    {
      if (!(first_time)) cout << "Invalid Menu Choice" << endl;
      first_time=false;

      printMenu();
      
      cin >> choice;
      // remove the return character from the cin stream buffer
      string junk;
      getline(cin, junk);
    }
  
  return(choice);
    
}

bool isGregorianDate(int month, int day, int year) {
    // TODO: implement

    // returning false to avoid compile error
    return false;
}

bool isLeapYear(int year) {
    // TODO: implement
    
    // returning false to avoid compile error
    return false;
}


bool isValidDate(int month, int day, int year) {
    // TODO: implement
    
    // returning false to avoid compile error
    return false;
}


int determineDay(int month, int day, int year) {
    // TODO: implement
    
    // returning 0 to avoid compile error
    return 0;
}


void printDayOfBirth(int day) {
    // TODO: implement
    
    return;
}


void determineDayOfBirth() {
    // TODO: implement
    
    return;
}

void print10LeapYears() {
    // TODO: implement
    
    return;
}
