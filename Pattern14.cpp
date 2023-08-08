#include <iostream>
using namespace std;

/*
n=5
A
B C
D E F
G H I J
K L M N O
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    char c = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << c << " ";
            col++;
            c++;
        }
        cout << endl;
        row++;
    }
}