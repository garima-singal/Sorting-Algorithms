class Solution: 
    def selectionSort(self, arr):
        n=len(arr)
        for i in range(0,n-1,1):
            minindex = i
            for j in range(i+1,n,1):
                if arr[j]<arr[minindex]:
                    minindex = j
            arr[i],arr[minindex]=arr[minindex],arr[i]