#include <iostream>
using namespace std;

/*
n=5
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << "  ";
            space--;
        }

        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col++;
        }

        int start = row - 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        row++;
    }
}