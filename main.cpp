/**------------------------------------------
    Program 1: ASCII Flowers
    Prompt for the number of flower layers and display

    Course: CS 141, Fall 2023
    System: Linux_x86_64 and G++
    Author: Hiba Mirza
 ---------------------------------------------**/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // display the prompt to the user
    cout << "Program 1: ASCII Flowers\n"
         << "Choose from the following options:\n"
         << "   1. Display the HELLO graphic\n"
         << "   2. Display The Flower\n"
         << "   3. Exit the program\n"
         << "Your choice -> ";

    // read in the user's choice
    int menu_option;
    cin >> menu_option;

    // handle option to quit
    if (menu_option == 3) {
        exit(0);
    }

    // handle the HELLO graphic choice
    if (menu_option == 1) {
        char frame;
        cout << "Enter your frame character: ";
        cin >> frame;
        //top border
        cout << endl;
        for (int i=0; i<2; i++) {
            cout << setfill(frame) << setw(36) << ' ' << endl;
        }
        //message
        cout << setfill(frame) << setw(3) << right << " "
             << "** ** ***** **    **    *****"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** ***** **    **    *****"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** **    **    **    ** **"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "***** ***** **    **    ** **"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "***** ***** **    **    ** **"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** **    **    **    ** **"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** ***** ***** ***** *****"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** ***** ***** ***** *****"
             << setfill(frame) << setw(3) << left << " " << endl
             << right;
        //bottom border
        for (int i=0; i<2; i++) {
            cout << setfill(frame) << setw(36) << " " << endl;
        }
    }

    // handle the floral pattern TODO for students
    if (menu_option == 2) {
      int numberOfSections;
      int sectionNumber;
      // counter variable
      int ctr;
      
      cout << "Enter number of sections: ";
      // get user input
      cin >> numberOfSections;

      // draws flower
      for (sectionNumber = 1; sectionNumber <= numberOfSections; sectionNumber++) {
        // draws dashes after certain number of whitespace
        cout << setfill(' ') << setw(numberOfSections + 3) << "---" << endl;
        // draw parts of the flower based on user input
        for (ctr = 1; ctr < sectionNumber; ctr++) {
          cout << setfill(' ') << setw(numberOfSections - ctr) << " " << "{" << setfill(':') << setw(2 * ctr + 1) << "" << "}" << endl;
          }
          cout << setfill(' ') << setw(numberOfSections - sectionNumber) << "" << '{' << setfill(':') << setw(sectionNumber) << "" << '@' << setfill(':') << setw(sectionNumber) << "" << '}' << endl;
        for (ctr = sectionNumber - 1; ctr > 0; ctr--) {
          cout << setfill(' ') << setw(numberOfSections - ctr) << " " << "{" << setfill(':') << setw(2 * ctr + 1) << "" << "}" << endl;
          }
        }
      cout << setfill(' ') << setw(numberOfSections + 3) << "---" << endl;
      
      // loop to draw the stem
      for (sectionNumber = 1; sectionNumber <= numberOfSections; sectionNumber++) {
        if (sectionNumber % 2 == 0) {
          // if statement is odd, leaves will draw to the left
          cout << setfill(' ') << setw(numberOfSections + 2) << "\\|" << endl;
        }
          // otherwise, leaf will draw to the right
        else {
          cout << setfill(' ') << setw(numberOfSections + 3) << "|/" << endl;
        }
        // draw 1 line between every leaf
        cout << setfill(' ') << setw(numberOfSections + 2) << "|" << endl;
      }
    }
    return 0;
}