#include<iostream>

/**
 * Computer deals with memory. Memory is everything.
 * Everything is done in memory
 * Pointer - is a integer that stores a memory address
 *
 *
 */

namespace p {
    void increment(int* val)
    {
        // dereference the pointer and increment
        (*val)++;
    }

    void incrementByReference(int& val)
    {
        val++;
    }

    struct Vector3 {
        float x, y, z;

        Vector3() :
            x(1.0f), y(2.0f), z(3.0f) {}
    };

    void run() {
        int var = 8;
        int* ptr = &var;
        // Dereference
        *ptr = 10;

        std::cout << "Hello World!\n" << var << std::endl;

        // allocate 8 byte of memory and returning the pointer to the begining of the memory
        char* buffer = new char[8];
        memset(buffer, 0, 8);
        delete[] buffer; // Delete the buffer

        // When you declare a reference you have to immediately set its value
        // Pass by reference 
        int a = 5;
        int& ref = a;
        ref = 20;

        increment(&ref);
        incrementByReference(ref);

    }
}
