#include <iostream>
using namespace std;

/*
n=7
1 2 3 4 5 6 7 7 6 5 4 3 2 1
1 2 3 4 5 6 * * 6 5 4 3 2 1
1 2 3 4 5 * * * * 5 4 3 2 1
1 2 3 4 * * * * * * 4 3 2 1
1 2 3 * * * * * * * * 3 2 1
1 2 * * * * * * * * * * 2 1
1 * * * * * * * * * * * * 1
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // Loop for printing first triangle(Number increasing)
        int start = 1;
        while (start <= n - row + 1)
        {
            cout << start << " ";
            start++;
        }

        // Loop for printing 2nd Triangle(stars)
        int stars = 2 * (row - 1);
        while (stars)
        {
            cout << "* ";
            stars--;
        }

        // Loop for printing third triangle(Number decreasing)
        start = start - 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        row++;
    }
}