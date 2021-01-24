#include <iostream>
#include <cmath>
using namespace std;

string bin_input()
{
    string bin = "";
    cout << "Enter Binary: ";
    cin >> bin;
    cout << "\n";
    return bin;
}

int bin2dec(string bin)
{
    int sum = 0;
    int len = bin.length();
    for (int i = 0; i < len; ++i)
    {
        if (bin[i] - '0' == 1)
            sum += pow(2, len - 1 - i);
        else if (bin[i] - '0' != 0)
            return -1;
    }
    return sum;
}

int main()
{
    string bin = bin_input();
    int dec = bin2dec(bin);
    if (dec != -1)
        cout << dec << "\n";
    else
        cout << "Cannot convert non-binary value\n";
    system("pause");
    return 0;
}