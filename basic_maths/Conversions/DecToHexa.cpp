// c++ program to convert from decimal to hexadecimal

#include <iostream>
using namespace std;

// function to convert decimal to hexadecimal
void decToHexa(int decVal)
{
    // string variable to store hexadecimal number
    string hexa_Val = "";

    while (decVal)
    {
        // rem variable to store remainder
        int rem = decVal % 16;

        // ch variable to store each character
        char ch;

        if (rem < 10)
        {
            ch = rem + 48;
        }
        else
        {
            ch = rem + 55;
        }

        // updating hexa_val with the character variable
        hexa_Val += ch;
        decVal /= 16;
    }

    // reversing the hexa_val string to get the final result
    int i = 0, j = hexa_Val.size() - 1;
    while (i <= j)
    {
        swap(hexa_Val[i], hexa_Val[j]);
        i++;
        j--;
    }

    cout << hexa_Val << endl;
}

// driver code
int main()
{
    // decValue variable to store decimal value
    int decVal;
    cin >> decVal;

    decToHexa(decVal);

    return 0;
}