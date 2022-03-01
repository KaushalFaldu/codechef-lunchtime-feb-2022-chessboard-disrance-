#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        int c = max(abs(a1 - a2), abs(b1 - b2));
        cout << c <<endl;
    }
    return 0;
}