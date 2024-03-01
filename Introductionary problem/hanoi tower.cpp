#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int moved = 0;
vector<pair<int, int>> movement;
void hanoi(int n, int a, int b, int c)
{
    if(n==1)
    {
        movement.push_back(make_pair(a,c));
        moved++;
    }
    else
    {
        hanoi(n-1, a, c, b);
        hanoi(1, a, b, c);
        hanoi(n-1, b, a, c);

    }
    return ;
}
int main()
{
    int n = 0;
    cin >> n;
    hanoi(n, 1, 2, 3);
    cout << moved << endl;
    for (const auto& n : movement)
    {
        cout<< n.first <<" "<<n.second<< endl;
    }
    
    return 0;
}