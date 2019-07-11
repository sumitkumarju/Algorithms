#include<iostream>
#include<climits>
using namespace std;

// m is size of coins array (number of different coins)
int minCoins(int coins[], int m, int V)
{
    // table[i] will be storing the minimum number of coins
    // required for i value.  So table[V] will have result
    int table[V+1];

    // Base case (If given value V is 0)
    table[0] = 0;

    // Initialize all table values as Infinite
    for (int i=1; i<=V; i++)
        table[i] = INT_MAX;

    // Compute minimum coins required for all
    // values from 1 to V
    for (int i=1; i<=V; i++)
    {
        // Go through all coins smaller than i
        for (int j=0; j<m; j++)
          if (coins[j] <= i)
          {
              int sub_res = 1+table[i-coins[j]];
              table[i]=min(table[i],sub_res);
          }
    }
    return table[V];
}

// Driver program to test above function
int main()
{
    int coins[] =  {25,30,5};
    int m = sizeof(coins)/sizeof(coins[0]);
    int V = 35;
    cout << "Minimum coins required is "
         << minCoins(coins, m, V);
    return 0;
}
