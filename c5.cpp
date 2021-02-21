// c5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Philip Palcsey
//CIT245 -Z01
// 02/14/2021
//

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <time.h>


using namespace std;


int main()
{


    int i;
    int choice;
    array<int, 20> a{ 0 };
    int occ[10] = { 0 };
    array<int, 10> b { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};



    do {
        //initialize rand 
        srand((unsigned int)time(0));

        //generate random numbers, store in array a
        for (i = 0; i < 20; i++) {

            a[i] = (rand() % 10) + 1;

        }


        //print the original list prior to sorting
        cout << "Original list before sorting " << "\n";

        //print initial array
        for (int i = 0; i < 20; i++) {



            cout << "a[" << to_string(i) << "]" << " " << a[i] << "\n";

        }

        cout << "\n\n";

        //sort the array
        sort(begin(a), end(a));
        //print the sorted array 
        cout << "Original list sorted " << "\n";

        //print sorted array
        for (int i = 0; i < 20; i++) {

            cout << "a[" << to_string(i) << "]: " << " " << a[i] << "\n";

        }
        cout << "\n\n";
        
        int count = 0;
        int j;
        
        
        //number of occurences
        for (i = 0; i < 10; i++) {

            count = 0;

            for (j = 0; j < 20; j++) {
            
                if (a[j] == b[i]) {
                    count++;
                }
                else {}
            
            }
            occ[i] = count;
        }
        
        cout << "N Count\n";
        //print occurence array
        for (i = 0; i < 10; i++) {
        
            cout << to_string(i + 1) << ":" << " " << occ[i] <<"\n";
        
        }
        
        cout << "Recalculate? (1 = yes, 0 = no)\n";
        cin >> choice;

    } while (choice == 1);

    system("pause");

    return 0;
}

