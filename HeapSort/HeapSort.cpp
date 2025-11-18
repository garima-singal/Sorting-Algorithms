#include <iostream>
using namespace std;

//Build max heap
//one based indexing
void heapify(int arr[], int n , int i){
    int largest =i;
    int left = 2*i;
    int right=2*i+1;
    
    if(left<=n&&arr[largest]<arr[left]) largest=left;
    if(right<=n&&arr[largest]<arr[right]) largest=right;
    
    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
};

void heapSort(int arr[],int n){
    int t=n;
    while(t>1){
        swap(arr[1],arr[t]);
        t--;
        
        heapify(arr,t,1);
    }
}

int main() {
    int arr[6]={-1,54,55,53,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}