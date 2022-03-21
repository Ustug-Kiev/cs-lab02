#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:" << endl;
    double a, b;
    cin >> a >> b;

    cout << "A + B = " << a+b << '\n'
         << "A - B = " << a-b << '\n'
         << "A * B = " << a*b << '\n'
         << "A / B = " << a/b << '\n';
    if (a > b)
    {
        cout << "max = " << a<< endl;
    }
    else{
        cout << "max = " << b << endl;
    }
        return 0;
}
