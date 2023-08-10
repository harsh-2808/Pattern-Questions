#include <iostream>
using namespace std;

/*
n=6
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
        // Loop for printing space
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        // Loop for printing stars
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}