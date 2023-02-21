/*******************************************************************************

 Author: Ahmed Abdullahi
 CISC 192 - Midterm Programming Project
 February 2023
 
 This program demonstrates a menu-driven program that takes
 user input and displays mini-games based on the user input
 The cases are handled with switch cases
 

 ******************************************************************************/
 
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main() {
   
    char option = 'n';
  do
  {
    //Display menu
    cout <<  endl << endl << "*********************************" << endl;
    cout << "Welcome to the Mini-Games Series" << endl;
    cout << "*********************************" << endl << endl;
    cout << "1.  Count Backwards" << endl;
    cout << "2.  Even-Number Series" << endl;
    cout << "3.  Negative Ten Series" << endl;
    cout << "4.  Exit" << endl << endl;
    
    //input option
    cout << "Please choose a number from the options above to play a mini-game or enter 4 to exit: ";
    cin >> option;
    cout << endl << endl;
    
    switch(option)
    {
    case '1': 
        
        //prompt for startNumber
        cout << "Lets play Count Backwards!" << endl;
        cout << "Please enter a positive number that you want to start ";
        cout << "counting backwards from: ";
      
        int startNumber;
        cin >> startNumber;
        
        //validate startNumber to make sure it's not a negative number
        while (startNumber <= 0) {
            cout << "Error, that is an invalid number" << endl;
            cout << "Please enter a positive number: ";
            cin >> startNumber;
            cout << " ";
        }
        cout << endl;
        
        //counting backwards for loop
        for (int i = startNumber; i >= 0; i--) {
            cout << i << " ";
        }
        cout << endl;
        
        
        break;
    
    case '2':    
           
        //prompt for endNumber
        cout << "Lets play Even-Number Series!" << endl;
        cout << "Please enter a even number that you want to";
        cout << " count up to: ";
      
        int endNumber;
        cin >> endNumber;
        
        //validate endNumber to make sure if it's even and greater than zero
        while ( !(endNumber > 0) || !(endNumber % 2 == 0)) {
            cout << "Error, that is an invalid number" << endl;
            cout << "Please enter a even number greater than zero: ";
            cin >> endNumber;
            cout << " ";
        }
        cout << endl;
        
        //for loop for even number counter starting from the number 2
        for (int i = 2; i <= endNumber; i += 2){
            cout << i << " ";
        }
        cout << endl;
        break;
        
           
    case '3':
       
        //prompt for a negative number that is a multiple of ten
        cout << "Lets play Negative Ten Series!" << endl;
        cout << "Please enter a negative number that is a multiple";
        cout << " of ten" << endl << "and we will count up to positve ten starting from that number: ";
        
        int multiple;
        cin >> multiple;
        
        //validate multiple to make sure its a multiple of ten and less than zero
        while (!(multiple < 0) || !(multiple % 10 == 0)) {
            cout << "Error, that is an invalid number" << endl;
            cout << "Please enter a negative number that is a multiple of 10: ";
            cin >> multiple;
            cout << " ";
        }
        cout << endl;
        
        //for loop to count up starting from negative multiples of ten until ten
        int numTimes;
        numTimes = ((multiple / 10) * -1);
        for (int i = 0; i <= numTimes + 1; i++){
            cout << (multiple + (i * 10)) << " ";
        } 
        cout << endl;
            
        break;
       
    case '4' : 
       
        // polite message about program ending
       
        cout << "Thank you for playing the Mini-Games Series." << endl;
        cout << "Goodbye." << endl;
        break;
       
    default:  
    
        // validation for menu option
        cout << "That is not a valid menu option." << endl;
        
        break;
    
    }//end switch
 
    
  //end the while loop
  
  }while(option != '4');

    return 0;
    
}//end main








