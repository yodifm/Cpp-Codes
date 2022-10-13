// Prints Fibonacci series 0 1 1 2 3 5 8 13 21 .........

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int sum = 0, n;
    int a = 0;
    int b = 1;
    cout << " Enter the value ";
    cin >> n;
    cout << "Fibonacci series: ";
    clock_t start = clock();
    while (sum < n)
    {
        cout << sum <<" ";
        a = b;
        b = sum;
        sum = a + b;
    }
    int stop = clock();
    double time = double(stop - start) / CLOCKS_PER_SEC;
    cout << endl;
    cout << time<<" secs";

    return 0;
}
