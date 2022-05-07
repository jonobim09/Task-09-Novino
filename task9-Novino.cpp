//Programmed by: Jolly Novino
//Date Completed: May 07, 2022

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
    
    char ans = 'y';

    const int SENTINEL = -1;
    
    do {
        int t = 0; // variable to store test scores
        int n =0; //variable to store number of students
        int passers = 0;
        int failed = 0;
        int A = 0;
        int B = 0; 
        int C = 0;
        int F = 0;
         //Ask user for input of test scores
        cout << "Please enter test scores and " << SENTINEL << " to stop: ";
        cin >> t;
        
        //SENTINEL to stop getting input of scores from user
        while (t != SENTINEL)
        {
            
            if (t >= 90 && t <= 100)
            {
                A++;
                //count everytime t is > 89
            }
            else if (t >= 80 && t <= 89)
            {
                B++;
                //count everytime t is > 79
            }
            else if (t >= 75 && t <= 79)
            {
                C++;
                //count everytime t is > 74
            }
            else if (t < 75 && t >=40)
            //failed scores
            {
                F++;
                failed++;
                //count everytime t is > 40 but <75
            }
            else
            {
                cout << "invalid input!" << endl;
                //accept only valid test scores from 40 - 100
            }
            
            if (t >= 40 && t <= 100)
            {
                n++;
                //count of test scores that equate to number of students
                
            }
            
            if (t >= 75) 
            {
                passers++;
                //count total passers with test scores 75 and above
            }
            
            cin >> t;
            //get another input of test score
        }
    
        double passingRate = 0.00;
        passingRate = ((double)passers / (double)n) * 100;
        //convert int to double to perform operation
        
        cout << setprecision(2) << fixed;
        //manipulate the output of passing rate
        
        
        cout << "Result Summary:" << endl;
        cout << "Total students: " << n << endl;
        cout << "# of Passers: " << passers << endl;
        cout << "# of Failed: " << failed << endl;
        cout << endl;
        cout << "# of A's: " << A <<endl;
        cout << "# of B's: " << B <<endl;
        cout << "# of C's: " << C <<endl;
        cout << "# of F's: " << F <<endl;
        cout << endl;
        
        cout << "You have " << passingRate << " of passing rate." << endl;
        
        //ask user to perform another operation
        cout << "Do you want to perform another calculation? Y/N: ";
        cin >> ans;

        
    }
    while (ans == 'Y' || ans == 'y');
    
    return 0;
}