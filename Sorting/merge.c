#include <stdio.h>
void merge(int arr[],int left,int middle,int right)
{
     int i,j,k,n1,n2;
     //Creating two temp arrays
     n1 = middle - left + 1;
     n2 = right - middle;
     int one[n1],two[n2];
     for (i = 0; i < n1; i++)
          one[i] = arr[i];
     for (i = 0; i < n2; i++)
          two[i] = arr[i];
     i = 0;
     j = 0;
     k = 0;
     while (i < n1 && j < n2)
    {
        if (one[i] <= two[j])
        {
            arr[k] = one[i];
            i++;
        }
        else
        {
            arr[k] = two[j];
            j++;
        }
        k++;
    }
     while(i < n1)
     {
          arr[k] = one[i];
          k++;
          i++;
     }
     while(j < n2)
     {
          arr[k] = two[j];
          k++;
          j++;
     }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main(int argc, char const *argv[]) {
     int arr[] = {5,4,3,2,1},n = 5,i,j;
     mergeSort(arr,0,n);
     for (i = 0; i < n; i++) {
          printf("%d ",arr[i]);
     }
     return 0;
}
