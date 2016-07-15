//  Name:           Permutations Test (permutations.cpp)
//  Author:         Grayson M. Dubois
//  Description:    Tests a method of using a common permutation array to
//                      reorder another array, and then put it back into 
//                      the proper order.

#include <iostream>
#include <algorithm>
#include <ctime>
#include <random>

using namespace std;

template <typename T> void printArray(T array[], int size);
int myrandom (int i) { return std::rand()%i;}

int main() {

    srand(time(0));

    // Variable Declarations
    const int arraySize = 26;


    // Generate our permutation array
    int permutation[arraySize];
    for ( int i = 0; i < arraySize; i++ ) {
        permutation[i] = i;
    }

    random_shuffle(permutation, permutation + arraySize, myrandom);

    // Generate our array to reorder
    char alphabet[arraySize];

    for ( int i = 0; i < arraySize; i++ ) {
         alphabet[i] = 'a' + i;
    }


    // Print the alphabet array before reordering
    cout << "The array before reordering:\n";
    printArray(alphabet, arraySize);


    // Map the alphabet array using the permutations array
    char mixedArray[arraySize]; 
    for ( int i = 0; i < arraySize; i++ ) {
        mixedArray[i] = alphabet[ permutation[i] ];
    }
    for ( int i = 0; i < arraySize; i++ ) {
        alphabet[i] = mixedArray[i];
    }

    // Print the mixed alphabet array
    printArray(alphabet, arraySize);


    // Reorder the alphabet array
    for ( int i = 0; i < arraySize; i++ ) {
        mixedArray[permutation[i]] = alphabet[i];
    }
    for ( int i = 0; i < arraySize; i++ ) {
        alphabet[i] = mixedArray[i];
    }
    
    // Print the re-ordered alphabet array
    printArray(alphabet, arraySize);

    return 0;
}

template <typename T>
void printArray(T array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << " ";
    }
    cout << "\n";
}
