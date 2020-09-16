#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int i = 0;
    int j = 255;

    int *pnt = &i;

    cout << "*pnt: " << *pnt << " pnt: " << pnt << "\n" << "&i: " << &i << endl;

    pnt = &j;

    cout << "*pnt: " << *pnt << " pnt: " << pnt << "\n" << "&j: " << &j << endl;

    *pnt = 200;

    cout << "*pnt: " << *pnt << " pnt: " << pnt << "\n" << "&j: " << &j << " j: " << j << endl;


}