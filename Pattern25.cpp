#include <iostream>
using namespace std;
/*
n=4
   1
  23
 456
78910
*/
int main()
{
    int n;
    cin >> n;
    int row = 1;
    int start = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int col = 1;
        while (col <= row)
        {
            cout << start;
            start++, col++;
        }
        cout << endl;
        row++;
    }
}