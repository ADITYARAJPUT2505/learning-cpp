// #include <iostream>


// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;  
//     int n2 = right - mid;     

//     int leftSubarray[n1];
//     int rightSubarray[n2];

    
//     for (int i = 0; i < n1; i++) {
//         leftSubarray[i] = arr[left + i];
//     }
//     for (int j = 0; j < n2; j++) {
//         rightSubarray[j] = arr[mid + 1 + j];
//     }

//     int i = 0; 
//     int j = 0; 
//     int k = left;

//     while (i < n1 && j < n2) {
//         if (leftSubarray[i] <= rightSubarray[j]) {
//             arr[k] = leftSubarray[i];
//             i++;
//         } else {
//             arr[k] = rightSubarray[j];
//             j++;
//         }
//         k++;
//     }

    
//     while (i < n1) {
//         arr[k] = leftSubarray[i];
//         i++;
//         k++;
//     }

    
//     while (j < n2) {
//         arr[k] = rightSubarray[j];
//         j++;
//         k++;
//     }
// }


// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
   
//         int mid = left + (right - left) / 2;

//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         merge(arr, left, mid, right);
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int arrSize = sizeof(arr) / sizeof(arr[0]);

//     std::cout << "Original Array: ";
//     for (int i = 0; i < arrSize; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     mergeSort(arr, 0, arrSize - 1);

//     std::cout << "Sorted Array: ";
//     for (int i = 0; i < arrSize; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    cout<<s<<endl;
    return 0;
}