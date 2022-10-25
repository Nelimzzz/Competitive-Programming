
#include <iostream>
#include <algorithm>
#include <unordered_map>


using namespace std;

int main () 
{
    double m,n;
    cin>>m>>n;
    double area = m*n;
    cout<<floor(area/2);
    return 0;
}