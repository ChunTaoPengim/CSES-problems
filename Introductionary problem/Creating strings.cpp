#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> record;
void permute(string a, int i)
{
    if (i == a.size()-1)
    {
        record[a] = 1;
        return;
    }
    else
    {
        for(int j=i; j < a.size(); j++)
        {
            if(a[i] == a[j] && j!=i)
            {
                continue;
            }
            else
            {
                swap(a[i], a[j]);
                permute(a, i+1);
                swap(a[i], a[j]);
            }            
        }
    }
    

}

int main()
{
    string s;
    cin>> s;
    permute(s, 0);
    
    record[s] = 1;
    cout << record.size()<< endl;
    vector<string> temp;
    for( const auto&n : record)
    {
        temp.push_back(n.first);
    }
    
    sort(temp.begin(), temp.end());
    for( const auto&n : temp)
    {
        cout << n << endl;
    }
    return 0;
}