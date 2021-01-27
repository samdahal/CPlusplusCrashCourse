// CPlusplusCrashCourse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "pointer_example.h"
#include "functional_pointer.h";

#if PR_DEBUG == 1
#define LOG(x) std::cout << x << std::endl
#elif defined(PR_RELEASE)
#define LOG(x)
#endif

#define WAIT std::cin.get()



int main()
{
    // Function pointer example
//    p::run();

    fp::run();

    /*

    // Alloc data in stack
    int value = 5; // This is in stack memory
    int array[5];
     array[0] = 1;
     array[1] = 2;
     array[2] = 3;
     array[3] = 4;
     array[4] = 5;
    Vector3 vector;

    // Heap
    int* hvalue = new int;
    *hvalue = 5;
    int* harray = new int[5];
    harray[0] = 1;
    harray[2] = 2;
    harray[3] = 3;
    harray[4] = 4;
    Vector3* hvector = new Vector3();
   
    LOG(a);

    delete hvalue;
    delete[] harray;
    delete hvector;
  
    WAIT; */
}
