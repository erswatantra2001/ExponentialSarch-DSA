#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int lb,int ub,int key){
  int low = lb;
  int high = ub-1;

  while(low <= high){
    int mid = (low+high)/2;

    if(arr[mid] == key){
      return mid;
    }
    else if(arr[mid] < key){
      high++;
    }
    else{
      low--;
    }
  }
}

int expo(int arr[],int n,int key){
  int i = 1;

  if (arr[0] == key){
    return 0;
  }
  while(i < n && arr[i] <= key){
    i = i*2;
    return binarySearch(arr,i/2,min(i,n-1),key);
  }
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for(int i = 0;i < n;i++){
    cin >> arr[i];
  }

  int key;
  cin >> key;

  int result  = expo(arr,n,key);
 if(result == -1){
   cout << "element is not present in array ";
 }
 else{
   cout << "element is present at index " << result << endl;
 }
  return 0;
} 