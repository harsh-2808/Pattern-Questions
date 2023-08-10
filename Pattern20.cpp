#include <iostream>
using namespace std;

/*
n=10
**********
*********
********
*******
******
*****
****
***
**
*
*/

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Loop for printing stars
        int stars = n - row + 1;
        while (stars)
        {
            cout << "*";
            stars--;
        }

        // Loop for printing space
        int col = 1;
        while (col <= row)
        {
            cout << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}