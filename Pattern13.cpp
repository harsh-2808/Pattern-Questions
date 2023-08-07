#include <iostream>
using namespace std;

/*
n=6
A
B B
C C C
D D D D
E E E E E
F F F F F F
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char c = 'A' + row - 1;
            cout << c << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}