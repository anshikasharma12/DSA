#include <iostream>
#include<math.h>
using namespace std;
void knapsack(int n, int weight[], int val[], int capacity)
{
    int x[20], tp = 0; // tp=total profit
    int i, j, u;
    u = capacity;

    for (i = 0; i < n; i++)
        x[i] = 0;

    for (i = 0; i < n; i++)
    {
        if (weight[i] > u)
            break;
        else
        {
            x[i] = 1;
            tp = tp + val[i];
            u = u - weight[i];
        }
    }
    if (i < n)
        x[i] = u / weight[i];
    tp = tp + (x[i] * val[i]);

    cout << "The resultant vector is:" << endl;
    for (int i = 0; i < n; i++)
     cout << "\t" << x[i];
        
        cout << "Maximum profit is:" << tp << endl;
}
int main()
{
    int weight[20], val[20], capacity;
    int num, i, j;
    int ratio[20], temp;

    cout << "Enter the number of objects:" << endl;
    cin >> num;

    cout << "Enter the weights and the values of objects:" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> weight[i] >> val[i];
    }
    cout << "Enter the capacity of knapsack:" << endl;
    cin >> capacity;

    for (int i = 0; i < num; i++)
    {
        ratio[i] = val[i] / weight[i];
    }
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j< num; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = val[j];
                val[j] = val[i];
                val[i] = temp;
            }
        }
    }
    knapsack(num, weight, val, capacity);
    return 0;
}
