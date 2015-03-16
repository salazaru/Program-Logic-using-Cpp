/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 16, 2015, 8:10 AM
 * Purpose: Paycheck -> Independent If-Statements
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Formatting Library
#include <fstream>      //I/O File
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    ofstream output;            //Output the reults in a file
    float hrsWkd;               //Hours Worked (hra)
    float payRate;              //Pay Rate ($'s/hr)
    float oRate = 1.5f;         //Multiplicative factor of payRate
    float oTime = 40.0f;        //Where overtime begins (hr)
    float payChk;               //Gross Pay ($'s)
    
    //Open the file
    out.open("Payroll.dat");
    
    //Prompt
    cout << "How many hours?"
    cin >> hrsWkd;
    cout << "What is pay rate?"
    cin >> payRate;
    
    //Calculate the paycheck
    if (hrsWkd < oTime) {
            payChk = payRate * hrsWkd;
    }
    if (hrsWkd >= oTime) {       
            payRate * (hrsWkd + (oRate - 1) * (hrsWkd - oTime));
    }
            
    //Output
    cout << fixed << setprecision(2) << showpoint;
    cout << "Hours Worked = " << hrsWkd << "(hrs)" <<endl;
    cout << "Pay Rate = $" << payRate << "(/hr)" <<endl;
    cout << "Overtime Rate = " << oRate <<endl;
    cout << "Overtime begins at " << oTime << "(hrs)" <<endl;
    cout << "Gross Pay = $" << payChk << "(hrs)" <<endl;
            
    //Output Results to the file
    out << fixed << setprecision(2) << showpoint;
    out << "Hours Worked = " << hrsWkd << "(hrs)" <<endl;
    out << "Pay Rate = $" << payRate << "(/hr)" <<endl;
    out << "Overtime Rate = " << oRate <<endl;
    out << "Overtime begins at " << oTime << "(hrs)" <<endl;
    out << "Gross Pay = $" << payChk << "(hrs)" <<endl;
      
    //Close the file
    out.close();
    
    //Exit Stage Right!
    return 0;
}
