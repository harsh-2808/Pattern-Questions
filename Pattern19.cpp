#include <iostream>
using namespace std;

/*
n=7
      *
     **
    ***
   ****
  *****
 ******
*******
*/

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Loop for printing space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        // Loop for printing stars
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}
