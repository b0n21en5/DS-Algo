// c++ program to convert hexadecimal to decimal

#include <iostream>
using namespace std;

// function to convert hexadecimal to decimal
void hexaToDec(string hexaVal)
{
    int size = hexaVal.size();

    int dec_val = 0;

    // initializing base to 1 i.e. 16^0
    int base = 1;

    // extracting last character as digits
    for (int i = size - 1; i >= 0; i--)
    {
        // if character lies between '0'-'9', converting
        // it to int by subtracting 48 from ASCII value
        if (hexaVal[i] >= '0' && hexaVal[i] <= '9')
        {
            dec_val += base * (int(hexaVal[i]) - 48);
        }

        // if character lies between 'A'-'F', converting
        // it to int by subtracting 55 from ASCII value
        else if (hexaVal[i] >= 'A' && hexaVal[i] <= 'F')
        {
            dec_val += base * (int(hexaVal[i]) - 55);
        }

        // incrementing base by power
        base *= 16;
    }

    cout << dec_val << endl;
}

// driver code
int main()
{

    string num;
    cin >> num;

    hexaToDec(num);
}