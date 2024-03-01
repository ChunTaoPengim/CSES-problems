#include<iostream>
using namespace std;
int count5times(int a)
{
    int times = 0;
    while( a%5 ==0)
    {
        times++;
        a = a/5;
        
    }
    return times;
    

}
int main()
{
    long long  n ;
    cin >> n;
    int count = 0;
    for( long long i =5; i<=n ; i = i + 5)
    {
        count += count5times(i);
    }
    cout<< count<<endl;
    return 0;
}