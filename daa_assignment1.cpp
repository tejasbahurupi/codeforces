#include <bits/stdc++.h>
using namespace std;
struct item
{
    int profit;
    int weight;
    float ratio;
};

int partition(item items[], int low, int high, vector<int> &initial_index)
{
    double pivot = items[high].ratio;
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (items[j].ratio < pivot)
        {
            i++;
            swap(items[i], items[j]);
            swap(initial_index[i], initial_index[j]);
        }
    }
    swap(items[i + 1], items[high]);
    return (i + 1);
}

void quickSort(item items[], int low, int high, vector<int> &initial_index)
{
    if (low < high)
    {
        int pi = partition(items, low, high, initial_index);
        quickSort(items, low, pi - 1, initial_index);
        quickSort(items, pi + 1, high, initial_index);
    }
}

int main()
{
    int n, total_weight, r_weight;
    vector<int> initial_index;
    float profit = 0;
    cout << "Enter number of items : ";
    cin >> n;
    item items[n];
    cout << "Enter total weight capacity of knapsack : ";
    cin >> total_weight;
    r_weight = total_weight;
    for (int i = 0; i < n; i++)
    {

        cout << "Enter the item " << i + 1 << " profit : ";
        cin >> items[i].profit;
        cout << "Enter the item " << i + 1 << " weight : ";
        cin >> items[i].weight;
        items[i].ratio = (float)items[i].profit / items[i].weight;
        initial_index.push_back(i);
    }
    cout << "\nBefore sorting : " << endl;
    // cout << "         P   W   P/W" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "item " << i + 1 << " : ";
        cout << items[i].profit << " ";
        cout << items[i].weight << " ";
        cout << items[i].ratio << endl;
    }
    quickSort(items, 0, n - 1, initial_index);
    cout << "\nAfter Sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "item " << initial_index[i] + 1 << " : ";
        cout << items[n - i - 1].profit << " ";
        cout << items[n - i - 1].weight << " ";
        cout << items[n - i - 1].ratio << endl;
    }
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (r_weight > 0)
        {
            if (items[i].weight <= r_weight)
            {
                r_weight = r_weight - items[i].weight;
                profit = profit + items[i].profit;
                arr[initial_index[i]] = 1;
                // cout<<profit<<endl;
            }
            else
            {
                arr[initial_index[i]] = (double)r_weight / items[i].weight;
                profit = profit + (float)items[i].ratio * r_weight;
                r_weight = 0;
                // cout<<"tejas"<<endl;
                // cout<<profit<<endl;
                break;
            }
        }
        else
        {
            break;
        }
    }
    cout << "\nInitial Sequence : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Total profit is : " << profit << endl;

    return 0;
}