#include <iostream>
using namespace std;

/*
n=6
A B C D E F
A B C D E F
A B C D E F
A B C D E F
A B C D E F
A B C D E F
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char c = 'A' + col - 1; // Typecasting otherwise it will print ASCII value
            cout << c << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}