// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxprofit(int arr[], int start , int end)
// {
//     if(end<=start)
//     {
//         return 0;
//     }
//     int profit=0;
//     for(int i=0 ; i<end ;i++)
//     {
//         for(int j=i+1 ; j<=end ;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 int currprofit=arr[j]-arr[i]+maxprofit(arr, start ,i-1)+maxprofit(arr,i+1 ,end);
//                 profit=max(currprofit,profit);
//             }
//         }
//     }
//     return profit;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<maxprofit(arr,0,n-1)<<endl;
//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxprofit(int arr[], int start, int end)
{
    if(end <= start)
    {
        return 0;
    }
    int profit = 0;
    for(int i = start; i < end; i++)
    {
        for(int j = i+1; j <= end; j++)
        {
            if(arr[i] < arr[j])
            {
                int currprofit = arr[j] - arr[i] + maxprofit(arr, start, i-1) + maxprofit(arr, i+1, end);
                profit = max(currprofit, profit);
            }
        }
    }
    return profit;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxprofit(arr, 0, n-1) << endl;
    return 0;
}
