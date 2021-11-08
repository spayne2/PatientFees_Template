// Chapter 7 - Programming Challenge 19, Patient Fees
// This is the application program that uses the Patient,
// Surgery, and Pharmacy classes.

// Files needed for this project:
// 7_19.cpp (this file)
// PatientAccount.h   -- contains the PatientAccount class declaration
// PatientAccount.cpp -- contains the PatientAccount function definitions
// Surgery.h          -- contains the Surgery class declaration
// Surgery.cpp        -- contains the Surgery function definitions
// Pharmacy.h         -- contains the Pharmacy class declaration
// Pharmacy.cpp       -- contains the Pharmacy function definitions
#include <iostream>
#include <iomanip>
#include <string>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

using namespace std;

// Function prototypes
void displaySurgeryTypes();
void displayMedicationTypes();
void displayCharges(PatientAccount, Surgery, Pharmacy);

int main()
{
	

}// End main function

/*******************************************************************
 *                       displaySurgeryTypes                       *
 * This function displays a menu of surgery types and costs.       *
 * Students may make up their own data.                            *
 *******************************************************************/
void displaySurgeryTypes()
{


}// end displaySurgeryTypes function

/*******************************************************************
 *                     displayMedicationTypes                      *
 * This function displays a menu of medication types and costs.    *
 * Students may make up their own data.                            *
 *******************************************************************/
void displayMedicationTypes()
{


}// end displayMedicationTypes function

/***************************************************************
 *                       displayCharges                        *
 ***************************************************************/
void displayCharges(PatientAccount patient, Surgery surgery, Pharmacy pharmacy)
{


}

/* SAMPLE RUN RESULTS

*** Patient Release Statement ***

How many days was the patient in the hospital?  3

Did the patient have surgery (y/n)? y

Please enter surgery type

	 1 - Minor surgery    $   600
	 2 - Eye surgery      $ 1,250
	 3 - Knee replacement $ 6,000
	 4 - Heart surgery    $12,000
	 5 - Brain surgery    $28,000

3

Did the patient receive medication (y/n)? y

Please enter medication type

	 1 - Asprin             $ 10
	 2 - Sleeping pills     $ 20
	 3 - Pain pills         $ 50
	 4 - Local anesthetic   $ 75
	 5 - General anesthetic $300

5

Did the patient receive other medication (y/n)? y

Please enter medication type

	 1 - Asprin             $ 10
	 2 - Sleeping pills     $ 20
	 3 - Pain pills         $ 50
	 4 - Local anesthetic   $ 75
	 5 - General anesthetic $300

3

Did the patient receive other medication (y/n)? n

		Patient Charges

Hospital: 3 days @ $3500.00 = $10500.00
Surgery charge :              $ 6000.00
Pharmacy charge:              $  350.00
							  _________
Total charges  :              $16850.00

*/
