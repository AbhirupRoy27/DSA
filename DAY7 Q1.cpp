// Alice went for shopping and bought 8 goods costing different prices. At the time of billing she realises that she did not have enough money. Now, she have decided to remove the item costing maximum amount and replace it with another item whose price is same as the item costing minimum amount. Help Alice and display final prices on the screen.

// Note: if more than one element cost maximum price, replace the first item.

// Example 1: Input: 250 1000 50 20 10 100 200 25
// Output: 250 10 50 20 10 100 200 25

// Example 2: Input: 2500 2500 50 20 10 100 200 25
// Output: 10 2500 50 20 10 100 200 25
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
        cin >> arr[i];
    int min = arr[0], max = arr[0], minIndex, maxIndex;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == max)
        {
            arr[i] = min;
            break;
        }
    }
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";
    return 0;
}