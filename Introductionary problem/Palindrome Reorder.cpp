#include <iostream>
#include<string>
#include <unordered_map>
using namespace std;

int main()
{
    string a;
    cin >> a;
    unordered_map<char, int> umap;
    for (int i=0; i < a.size(); i++)
    {
        if(umap[a[i]] > 0)
        {
            umap[a[i]] += 1;
        }
        else
        {
            umap[a[i]] = 1;
        }
    }
    string answer = "";
    for (const auto& n : umap) {

        if(n.second %2 == 0)
        {
            
            answer.insert(answer.size()/2,n.second, n.first );
        }
    }
    int count = 0;
    for (const auto& n : umap) {
        

        if(n.second %2 == 1)
        {
            count ++;
            if(count > 1)
            {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            answer.insert(answer.size()/2,n.second, n.first );
        }
    }

    cout << answer << endl;
    return 0;
}