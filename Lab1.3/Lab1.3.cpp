#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Fraction.h"
#include <string>
#include <sstream> 
using namespace std;

int main()
{
    Fraction N,M,A,C;
    N.Read();
    cout << "-------------------------------\n";
    cout << "\nNumber 1:\n ";
    N.Display();
    cout << "-------------------------------\n";

    M.Read();
    cout << "-------------------------------\n";
    cout << "\nNumber 2:\n ";
    M.Display(); 
    cout << "-------------------------------\n";

    A=Sub(N,M);

    cout <<"after sub:\n" << A.toString() << endl;

    cout << "Less="     << Less(N, M) << endl;
    cout << "Great="    << Great(N, M) << endl;
    cout << "Equal="    << Equal(N, M) << endl;
    cout <<"NLess="     << NLess(N, M) << endl;
    cout << "NGreat="   << NGreat(N, M) << endl;
    cout << "NEqual="   << NEqual(N, M) << endl;
    return 0;
}
