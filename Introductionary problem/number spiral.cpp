#include<iostream>
using namespace std;
int main ()
{
    int n = 0;
    cin >> n;
    for (int i=1; i<= n; i++)
    {
        long long int x, y;
        cin >> x;
        cin >>y;
        if(x >=y)
        {
            if (x%2 ==0)
            {
                long long int result = 0;
                result = x*x - (y-1);
                cout << result <<endl;
            }
            else
            {
                long long int result = 0;
                result = (x-1)*(x-1) + y;
                cout << result <<endl;
            }

        }
        else
        {
             if (y%2 ==0)
            {
                long long int result = 0;
                result = (y-1)*(y-1) + x;
                cout << result <<endl;
            }
            else
            {
                long long int result = 0;
                result = y*y - (x-1);
                cout << result <<endl;
            }
        }
    }
    return 0;
}