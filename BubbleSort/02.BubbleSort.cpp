class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();  
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1])
                  swap(arr[j],arr[j+1]);
            }
        }
    }
};

//MORE OPTIMIZED 

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        bool swapped = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1])
                 { swap(arr[j],arr[j+1]);
                     swapped=true;
                 }
            }
            if(swapped==false)break;
        }
    }
};