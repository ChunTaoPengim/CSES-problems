#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

char changebit(char a)
{
    if(a == '1')
    {
        return '0';
    }
    else
    {
        return '1';
    }
}
int main()
{
    int n = 0;
    cin >> n;
    string a = "";
    a.insert(0,n, '0');
    cout << a<< endl;
    int count = 1;
    while(count < pow(2,n))
    {
        if(count %2 == 1)
        {
            a[n-1] = changebit(a[n-1]);
        }
        else
        {
            int k = a.find_last_of('1');
            a[k-1] = changebit(a[k-1]);
        }
        cout << a << endl;
        count ++;
    }
    return 0;
}