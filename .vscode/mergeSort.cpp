#include <vector>
#include<iostream>
using namespace std;
void mergeArrays(int arr[], int s, int e, int mid){
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];
    
    // filling values in the arrays
    int index = s;
    int i = 0;
    while( i < leftLength){
        leftArr[i] = arr[index];
        i++;
        index++;
    }

    // filling the values in the right array
    index = mid+1;
    i = 0;
    while(i < rightLength){
        rightArr[i] = arr[index];
        i++;
        index++;
    }

    // merging the both arrays
    int leftindex = 0;
    int rightindex = 0;
    int mainindex = s;

    while(leftindex < leftLength && rightindex < rightLength){
        if(leftArr[leftindex] < rightArr[rightindex]){
            arr[mainindex] = leftArr[leftindex];
            leftindex++;
            mainindex++;
        }
        else{
            arr[mainindex] = rightArr[rightindex];
            rightindex++;
            mainindex++;
        }
    }

    // now we will handle the elements which are left
    while(leftindex < leftLength){
        arr[mainindex] = leftArr[leftindex];
        leftindex++;
        mainindex++;
    }
    while(rightindex < rightLength){
        arr[mainindex] = rightArr[rightindex];
        rightindex++;
        mainindex++;
    }

    //free the temp memory
    delete [] leftArr;
    delete [] rightArr;

}
void mergeSort(int arr[], int s, int e){
    // base case
    if(s >= e) return;

    int mid = (s+e)/2;
    //solving the left part
    mergeSort(arr, s, mid);
    //solving the right part
    mergeSort(arr, mid+1, e);

    // at last merging the arrays
    mergeArrays(arr, s, e, mid);
}

int main()
{
    int arr[] = {1,9,5,3,9,7,10,1,2,4,5,6};
    for(int i : arr) cout<<i<<" ";
    cout<<endl;
    mergeSort(arr, 0, 11);
    for(int i : arr) cout<<i<<" ";
    cout<<endl;
return 0;
}