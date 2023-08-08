#include <iostream>
using namespace std;

/*
n=4
A
B C
C D E
D E F G
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
            char c = 'A' + row + col - 2;
            cout << c << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}

/*Another way to solve the above pattern

 #include <iostream>
 using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + row - 1;
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
*/