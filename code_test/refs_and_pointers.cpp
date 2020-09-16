#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int number = 1234;
    int number2 = 4321;
    int number3 = 23456;
    int number4 = 65432;

    int &ref_number = number;

    int *pnt_number = &number;
    int *pnt_number2 = &number2;
    int *pnt_number3 = &number3;
    int *pnt_number4 = &number4;

    cout << "number: " << number << "\nref_number: "
        << ref_number << "\npnt_number: " << pnt_number
        << "\n*pnt_number: " << *pnt_number << "\npnt_number2: "
        << pnt_number2 << "\npnt_number3: " << pnt_number3 << endl;
}