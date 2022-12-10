#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double r, answer;
    cin >> r;
    answer = r * r * 3.141592653;
    cout << setprecision(11) << answer;
}