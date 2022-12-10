#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int myKey(int i, int j)
{
    int p, q, n, e;
    p = pow(2, i);

    cout << "______________________________________________" << endl;
    cout << "Generating key:" << endl;
    cout << "p = 2 ^ " << i << " = " << p << endl;
    q = pow(3, j);
    cout << "q = 2 ^ " << j << " = " << q << endl;
    n = (p + 2) * (q + 1);
    cout << "n = "
         << "(" << p << " +"
         << " 2"
         << ")"
         << " * "
         << "(" << q << " +"
         << " 1"
         << ")"
         << " = " << n << endl;
    e = (i * j) + n;
    cout << "e = "
         << "(" << i << " * " << j << ")"
         << " + " << n << endl;
    cout << "______________________________________________" << endl;
    return e;
}
int myXOR(int x, int y)
{
    int res = 0; // Initialize result

    // Assuming 32-bit Integer
    for (int i = 31; i >= 0; i--)
    {
        // Find current bits in x and y
        bool b1 = x & (1 << i);
        bool b2 = y & (1 << i);

        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);

        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}
int main()
{
    int m, i, j, e,c;
    cout << "Enter Your Message: ";
    cin >> m;
    cout << "i: ";
    cin >> i;
    cout << "j: ";
    cin >> j;
    e = myKey(i, j);
    c = myXOR(m, e);
    cout << "Encryption:" << endl;
    cout << "c = m XOR e = " << c << endl;
    cout << "______________________________________________" << endl;
    cout << "Decryption:" << endl;
    cout << "m = c XOR e = " << myXOR(c, e) << endl;
}
