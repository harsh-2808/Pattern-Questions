#include <iostream>
using namespace std;

/*
n=5
E
D E
C D E
B C D E
A B C D E
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + n - row;
        while (col <= row)
        {
            cout << start << " ";
            start = start + 1;
            col++;
        }
        cout << endl;
        row++;
    }
}