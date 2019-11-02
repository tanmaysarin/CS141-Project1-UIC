/******************************************************
 * Style feedback by Lydia Tse:
 * - Missing descriptive header (see syllabus for an example)
 * - Slightly redundant code -- see Prof Reed's solution
 * - Needs more meaningful comments
 ******************************************************/
#include <iostream>   // For cin and cout
#include <cstdlib>    // For system("clear") used to clear the screen
#include <chrono>     // Used in pausing for some milliseconds using sleep_for(...)
#include <thread>     // Used in pausing for some milliseconds using sleep_for(...)
using namespace std;

//---------------------------------------------------------------------------
//  Main loop
int main() {
	char userInputCharacter;   // User input for some character
	int  userInputNumber;      // User input for some numerical value
    int numberOfBlankSpaces;     // Number of blank spaces between each Alphabet as per the user 
	
	cout << endl
		 << "Go Flames! Choose from among the following options: \n"
		 << "   1. Display U I C as horizontal block letters\n"
		 << "   2. Display U I C as vertical block letters \n"
         << "   3. Display U I C as an animation \n"
	     << "   4. Exit the program \n"
		 << "Your choice -> ";
	cin >> userInputCharacter;
	cout << endl;
	
	// Handle the "Exit" option
	if( userInputCharacter == '4') {
		exit( -1);
	}
	
	// Display UIC horizontally
	else if( userInputCharacter == '1') {
		cout << "\n"
             << "------------------------"
             << "\n"
             << "*    * ****    * * \n"
			 << "*    *  **    *    \n"
			 << "*    *  **   *     \n"
			 << "*    *  **   *     \n"
             << "*    *  **    *    \n"
			 << "  **   ****    * * \n"  
             << "\n"
             << "------------------------"
			 << endl;
	}
    
    // Display UIC vertically
	else if( userInputCharacter == '2') {
		cout << "\n"
             << "------- \n"
             << "\n"
             << "*     * \n"
			 << "*     * \n"
			 << "*     * \n"
			 << "*     * \n"
             << "*     * \n"
			 << "  * *   \n"  
             << "\n"
             << " **** \n"
             << "  **  \n"
             << "  **  \n"
             << "  **  \n"
             << "  **  \n"
             << " **** \n"
             << "\n"
             << "    * * \n"
             << "  *     \n"
             << " *      \n"
             << " *      \n"
             << "  *     \n"
             << "    * * \n"
             << "------- \n"
             <<"\n"
			 << endl;
	}
	
	// Display UIC as an animation
	else if( userInputCharacter == '3') {
        char clearScreen;
        cout<< "Clear the screen between displays? (Y/N) -> \n";
        cin >> clearScreen;
        if (clearScreen == 'Y'){
            system ("clear");
        }
        else if(clearScreen == 'N'){
          //nothing
        }
        else{
            cout<<"Please input a valid character (Y or N) -> \n";
        }
		cout << "How many sets of letters? -> \n";
		cin >> userInputNumber;
        
        cout <<"How many blanks between letters (0..30)? -> \n";
        cin >> numberOfBlankSpaces;
		
		for( int setsOfLetters = 0; setsOfLetters < userInputNumber; setsOfLetters++) {
            
            for (int a=0; a<(17+numberOfBlankSpaces*2); a++) cout << "-"; cout << endl;

            
             if (setsOfLetters % 4 == 0) {
                // Set #1
                for( int i=0; i<9; i++) {
                    if(      i==0) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "  * *  "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    if(      i==0) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "****"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "****"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    if(      i==0) { cout    << "   * *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << " *     "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << "*      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << "*      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << " *     "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << "   * *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    cout << endl;
                }
            }
            else if (setsOfLetters % 4 == 1) {
                // Set #2
                for( int i=0; i<9; i++) {
                    if(      i==0) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "  * *  "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    if(      i==0) { cout    << "****"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << "****"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    if(      i==0) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "   * *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << " *     "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << "*      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << "*      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << " *     "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "   * *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    cout << endl;
                }
            }
            else if (setsOfLetters % 4 == 2) {
                // Set #3
                for( int i=0; i<9; i++) {
                    if(      i==0) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << "  * *  "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    if(      i==0) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "****"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "****"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    if(      i==0) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << "   * *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << " *      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << "*      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << "*      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << " *     "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "   * *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    cout << endl;
                }
            }
            else if (setsOfLetters % 4 == 3) {
                // Set #4
                for( int i=0; i<9; i++) {
                    if(      i==0) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << "*     *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "  * *  "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    if(      i==0) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << "****"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << " ** "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "****"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "    "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    if(      i==0) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==1) { cout    << "   * *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==2) { cout    << " *     "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==3) { cout    << "*      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==4) { cout    << "*      "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==5) { cout    << " *     "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==6) { cout    << "   * *"; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==7) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    else if( i==8) { cout    << "       "; for(int j=0; j<numberOfBlankSpaces; j++) cout << " "; }
                    
                    cout << endl;
                }
            }
                for (int a=0; a<(17+numberOfBlankSpaces*2); a++) cout << "-"; cout << endl;
            
            // Clear the screen after the letters are displayed.
			this_thread::sleep_for(chrono::milliseconds( 185));	// Sleep for 185 milliseconds
			system( "clear");   // Clear the screen.  Comment out this line if you don't want them erased.

        }
    }
    return 0;
}

