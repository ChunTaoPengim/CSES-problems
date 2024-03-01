#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    if( (n % 4 == 1) || (n % 4 == 2))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        vector<int> a;
        vector<int> b;
        a.clear();
        b.clear();
        if(n == 3)
        {
            a.push_back(1);
            a.push_back(2);
            b.push_back(3);
        }
        else if(n %4 == 0)
        {
            for(int i=1 ; i<=n ; i++)
            {
                if((i%4 == 1) || (i%4 ==0))
                {
                    a.push_back(i);
                }
                else
                {
                    b.push_back(i);
                }
            }
        }
        else
        {
            a.push_back(1);
            a.push_back(2);
            b.push_back(3);
            for(int i = 4; i<=n; i++)
            {
                if((i%4 == 3) || (i%4 ==0))
                {
                    a.push_back(i);
                }
                else
                {
                    b.push_back(i);
                }
            }
        }

        cout << a.size()<< endl;
        for(int i = 0; i<a.size();i++)
        {
            cout<< a[i]<<" ";
        }
        cout << "\n"<< b.size()<< endl;
        for(int i = 0; i<b.size();i++)
        {
            cout<< b[i]<<" ";
        }
        

    }

}