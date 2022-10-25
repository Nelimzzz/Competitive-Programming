//import neccessary libraries
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int x,numswaps = 0;
    cin >> x;
    vector<int> a(x);
    for(int a_i = 0;a_i < x;a_i++)
    {
       cin >> a[a_i];
    }
    // Track number of elements swapped during a single array round
    for (int i = 0; i < x; i++) 
    {
        int numberOfSwaps = 0;
        
    // Swap adjacent elements if they are in decreasing order
        for (int j = 0; j < x - 1; j++) 
        {
        if (a[j] > a[j + 1]) 
        {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    // If no elements were swapped during a round, array is sorted
    numswaps+=numberOfSwaps;
    if (numberOfSwaps == 0) 
    {
        break;
    }
}
    printf("Array is sorted in %d swaps.\n",numswaps);
    printf("First Element: %d\nLast Element: %d\n",a[0],a[x-1]);
    return 0;
}