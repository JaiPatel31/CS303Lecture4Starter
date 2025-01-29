// CS303Lecture4Starter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "VectorClass.h"

template<typename ItemType>
void printVector(const mySpace::vector<ItemType> const& v1) {
    std::cout << "Current vector: ";
    for (int i = 0; i < v1.size(); i++)
        std::cout << v1[i] << "\t";
    std::cout << std::endl;
}

int main()
{
 
    mySpace::vector<std::string> myVector;
    for (int i = 0; i < 11; i++) {
        myVector.pushBack(std::to_string(i));   // at index 10, the vector will reallocate double the space
    }

    printVector(myVector);

}

