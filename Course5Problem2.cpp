#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeOrNotPrime { Prime = 1, NotPrime = 0 };

float ReadPositiveNumber(string Message)
{
    float Num = 0;

    do {

        cout << Message << "\n";
        cin >> Num;

    } while (Num <= 0);

    return Num;

}

enPrimeOrNotPrime CheckPrime (int Number)
{

    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimeOrNotPrime::NotPrime;
    }

    return enPrimeOrNotPrime::Prime;



}

void PrintPrimeNumbersFrom1ToN( int Number)
{


    for (int i = 1; i <= Number; i++)
    {

        if (CheckPrime(i) == enPrimeOrNotPrime::Prime)

            cout << i << "  ";
    }

}



int main()
{
    
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Enter a positive number"));
}
