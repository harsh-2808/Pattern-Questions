#include <iostream>
using namespace std;

/*
n=6
123456
 12345
  1234
   123
    12
     1
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        int col = 1;
        int start = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col++;
        }
        cout << endl;
        row++;
    }
}