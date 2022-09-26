// program to calculate a patient's hospital charges
#include <iostream>

#include "calcTotalCharges.h"   // includes all necessary header files
#include "validateUserInput.h"
using namespace std;

int main()
{
    char patientType;   // determines whether or not a patient is an in-patient or an out-patient
    double numDays, roomRate, serviceCharges, medCharges;   // variables used to calculate hospital charges

    cout << "This program will calculate a patient's hospital charges." << endl     // prompts user for input
         << "Enter I for in-patient or O for out-patient: ";
    cin >> patientType;     // records whether the user is an in-patient or an out-patient

    // input validation for 'patientType'
	while (patientType != 'I' && patientType != 'i' && patientType != 'O' && patientType != 'o')
	{	
		cout << "Invalid Input - Enter I or O: ";
		cin  >> patientType;
	}

    switch (patientType)
    {
        case 'i':       // if user entered either 'I' or 'i'
        case 'I':
            cout << "Number of days spent in the hospital: ";
            cin >> numDays;
            while (validateUserInput(numDays) == false) // loops until true
            {
                cout << "Invalid Input - Input MUST be greater than 0: ";
                cin >> numDays;
            }

            cout << "Daily room rate ($): ";
            cin >> roomRate;
            while (validateUserInput(roomRate) == false)    // loops until true
            {
                cout << "Invalid Input - Input MUST be greater than 0: ";
                cin >> roomRate;
            }

            cout << "Lab fees and other service charges ($): ";
            cin >> serviceCharges;
            while (validateUserInput(serviceCharges) == false)  // loops until true
            {
                cout << "Invalid Input - Input MUST be greater than 0: ";
                cin >> serviceCharges;
            }

            cout << "Medication Charges ($): ";
            cin >> medCharges;
            while (validateUserInput(medCharges) == false)  // loops until true
            {
                cout << "Invalid Input - Input MUST be greater than 0: ";
                cin >> medCharges;
            }

            cout << "Your total hospital bills is $" << calcTotalCharges(numDays, roomRate, serviceCharges, medCharges) << endl;
                 /* prints out total hospital bills      calls 'calcTotalCharges()' for calculations */
            break;

        case 'o':
        case 'O':       // if user entered either 'O' or 'o'
            cout << "Lab fees and other service charges ($): ";
            cin >> serviceCharges;
            while (validateUserInput(serviceCharges) == false)  // loops until true
            {
                cout << "Invalid Input - Input MUST be greater than 0: ";
                cin >> serviceCharges;
            }

            cout << "Medication Charges ($): ";
            cin >> medCharges;
            while (validateUserInput(medCharges) == false)  // loops until true
            {
                cout << "Invalid Input - Input MUST be greater than 0: ";
                cin >> medCharges;
            }

            cout << "Your total hospital bills is $" << calcTotalCharges(serviceCharges, medCharges) << endl;
                 /* prints out total hospital bills      calls 'calcTotalCharges()' for calculations */
            break;
    }

    return 0;
}