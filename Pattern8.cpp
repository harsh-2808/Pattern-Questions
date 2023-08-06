#include <iostream>
using namespace std;

/*
n=9
A A A A A A A A A
B B B B B B B B B
C C C C C C C C C
D D D D D D D D D
E E E E E E E E E
F F F F F F F F F
G G G G G G G G G
H H H H H H H H H
I I I I I I I I I
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
            char c = 'A' + row - 1; // Typecasting otherwise it will print ASCII value
            cout << c << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}