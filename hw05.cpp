#include "hw05.h"

/**************************************************
 * simple lottery program
 * -----------------------------------------------
 *  takes input from the user for the amount of 
 *  number spots and the amount of winning
 *  selections. Than create a vector of the
 *  number of numbers and shuffles the vector
 *  than outputs the number of winning selections.
 *  *********************************************/

int main() {

    // output  for class heading
	cout << "***********************************\n";
	cout << "Programmed By: Nathan Milton\n";
	cout << "Student Id   : 1204398\n";
	cout << "Assignment   : HW05\n";
	cout << "CS1C         : T/TH 1:30\n";
 	cout << "***********************************\n" << endl;

    int spots, selection;
	vector<int> winners;

    // IN & OUT - input number of lotto spots and winner spots
    cout << "Input number of lotto spots: ";
    cin >> spots;
    cout << "Input number of winning numbers: ";
    cin >> selection;
    cout << "*****WINNERS*****" << endl;
    
    // CALC - create vector and preform shuffle return vector of winning spots
	winners = lotto(spots, selection);

    // OUTPUT - winning selection
	for(int i = 0; i < selection; i++)
		cout << winners[i] << endl;

	return 0;
}
