#pragma once
#include <iostream>

namespace mySpace {

    template<typename ItemType>
    class vector {
    private:
        // Data fields
        /** The initial capacity of the array */
        static const size_t INITIAL_CAPACITY = 10;
        /** The current capacity of the array */
        size_t currentCapacity;
        /** The current numItems of the array  */
        size_t numItems;
        /** The array to contain the data */
        ItemType* theData;

    public:
        // Member Functions  
        /** Constructs an empty vector with the default initial capacity.
        */

        vector<ItemType>() :
            currentCapacity(INITIAL_CAPACITY),
            theData(new ItemType[INITIAL_CAPACITY]),
            numItems(0) {
            std::cout << "Default Constructor called\n";
        };

        const ItemType& operator[](size_t index) const {
            // Verify that the index is legal.
            if (index >= numItems) {
                throw std::out_of_range
                ("index to operator[] is out of range");
            }
            return theData[index];
        }

        const int size() const {
            // Verify that the index is legal.
            return numItems;
        }

        void reserve(size_t newCapacity) {

            if (newCapacity > currentCapacity) {
                if (newCapacity > 2 * currentCapacity)
                    currentCapacity = newCapacity;
                else
                    currentCapacity *= 2;  // Double the capacity.

                ItemType* newData = new ItemType[currentCapacity];
                // Copy the data over.
                for (size_t i = 0; i < numItems; i++)
                    newData[i] = theData[i];
                // Free the memory occupied by the old copy.
                delete[] theData;
                // Now point to the new data.
                theData = newData;
            }
        }


        void pushBack(const ItemType& the_value) {
            // Make sure there is space for the new item.

            // Insert the new item.
             
            
            //increase numItems
        }


        void insert(size_t index, const ItemType& the_value) {
            // Validate index.
 
            // Ensure that there is space for the new item.
 
            // Move data from index to numItems - 1 down.
 
            // Insert the new item.


            //increase numItems
 
        }

        void erase(size_t index) {
            // Validate index.
 
            // Move items below the removed one up.

            //decrease numItems
 
        }


        void swap(vector<ItemType>& other) {
            std::swap(numItems, other.numItems);
            std::swap(currentCapacity, other.currentCapacity);
            std::swap(theData, other.theData);
        }


        //copy constructor
        vector<ItemType>(const vector<ItemType>& other) {
            std::cout << "Copy Constructor called\n";
            currentCapacity = other.currentCapacity;
            numItems = other.numItems;
            theData = new ItemType[other.currentCapacity];


            for (size_t i = 0; i < numItems; i++)
                theData[i] = other.theData[i];
        }


        //copy assignment operator
        vector<ItemType>& operator= (const vector<ItemType>& other) {
            std::cout << "Copy Assignment Operator called\n";
            // Make a copy of the other vector.
            vector<ItemType> the_copy(other);
            // Swap contents of self with the copy.
            swap(the_copy);
            // Return -- upon return the old value will be destroyed.
            return *this;
        }

        ~vector<ItemType>() {
            std::cout << "Destructor called\n";
            delete[] theData;
            theData = nullptr;
        }




    };
};