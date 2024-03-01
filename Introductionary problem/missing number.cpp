#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int> v(n);
    for(long long int i=0;i<n-1;i++)
    {
        cin>>v[i];
    }
    long long int sum=0;
    for(long long int i=0;i<n-1;i++)
    {
        sum+=v[i];
    }
    cout<<(n*(n+1)/2)-sum;
    return 0;
}