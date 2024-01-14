// #include <iostream>
// using namespace std;

// int main() {
// 	int n,count=0;
// 	cin>>n;
//     int arr[n];
//     for(int i=0 ; i <n ; i++)
//     {
//     	cin>>arr[i];
    	
// 	}

//     for (int i = 0; i < n - 1; i++) {
    	
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 // Swap arr[j] and arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 ++count;
//             }
//         }
//     }

//     // Print sorted array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout<<count<<endl;
//     return 0;
// }
#include<stdio.h>
int main()
{   
    int n,i,j,temp,count;
    printf("write  no of  elements");
    scanf("%d",n);
    int arr[n];
    for(int i=0 ;i<n ;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0 ; i<n ;i++)
	{
		for(j=0 ; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				++count;
			}			
		}
	}
	printf("the sorted array is ");
	for(i=0 ; i<n ; i++)
	{
		printf(" %d\t",arr[i]);
	}
	return 0;
} 