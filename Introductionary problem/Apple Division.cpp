#include <bits/stdc++.h>
using namespace std;

vector<long int> k;
long long int answer;
long long int total ;
void calculate( int n, long long int n1)
{
    if(n==k.size())
    {
        long long int temp = abs((total-n1)-n1);
        if(temp < answer)
        {
            answer = temp;
        }
        return ;
    }
    else
    {
        calculate(n+1, n1);
        calculate(n+1, n1 + k[n]);
    }
}
int main()
{
    answer = LONG_LONG_MAX;
    total = 0;
    int n;
    cin >> n;
    
    while(n--)
    {
        long int a;
        cin >> a;
        k.push_back(a);
        total += a;
    }
    calculate(0, 0);
    cout << answer << endl;


}