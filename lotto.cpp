#include "hw05.h"

vector<int> const lotto(int spots, int selection) {

    // random number generator
	mt19937 generator(random_device{}());
	
    // initialize vectors
	vector<int> numbers;
	vector<int> result;

    // reserve space in HEAP and size vectors 
	numbers.reserve(spots);
	numbers.resize (spots);

	result.reserve(selection);
	result.resize (selection);

    // fill vector with number of spots, exluded zero
	for(int i = 1; i <= spots; i++) 
		numbers[i-1] = i;

    // perform shuffle
	shuffle(numbers.begin(), numbers.end(), generator);

    // set vector to have correct number of randomly selected winning numbers
	for(int i = 0; i < selection; i++)
		result[i] = numbers[i]; 

    // return winning number vector
	return result;
}

