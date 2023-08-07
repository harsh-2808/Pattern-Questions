#include <iostream>
using namespace std;

/*
n=6
A B C D E F
B C D E F G
C D E F G H
D E F G H I
E F G H I J
F G H I J K
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char c = 'A' + row + j - 2;
            cout << c << " ";
            j++;
        }
        cout << endl;
        row++;
    }
}