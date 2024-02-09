#include<iostream>
using namespace std;
 
 int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
 }


int main(){
 int n;
 cin>>n;

 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 } 
  int key;
  cin>>key;
cout<<binarysearch(arr,n,key)<<endl;

    return 0;
}
// //using namespace std;
 
// // Function to find insert position of K
// int find_index(int arr[], int n, int K)
// {
//     // Traverse the array
//     for (int i = 0; i < n; i++)
//         // If K is found
//         if (arr[i] == K)
//             return i;
//         // If current array element exceeds K
//         else if (arr[i] > K)
//             return i;
//     // If all elements are smaller than K
//     return n;
// }
 
// // Driver Code
// int main()
// {
//     int arr[] = { 1, 3, 5, 6 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int K = 2;
//     cout << find_index(arr, n, K) << endl;
//     return 0;
// }
 2