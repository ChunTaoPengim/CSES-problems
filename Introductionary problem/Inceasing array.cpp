#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n =0;
    cin>>n;
    vector<long long int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long int count = 0;
    for (int i =1; i<n ; i++)
    {
        if(v[i] >= v[i-1])
        {
            continue;
        }
        else
        {
            count += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    cout << count;
}