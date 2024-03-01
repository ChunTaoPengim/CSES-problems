#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.length();
    int max = 0;
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=i;j<n;j++)
        {
            if(a[j] == a[i])
            {
               count++;
            }
            else
            {
                break;
            }
        }
        if(count>max)
        {
            max=count;
        }
        i = i+count-1;
    }
    cout<<max;

}
