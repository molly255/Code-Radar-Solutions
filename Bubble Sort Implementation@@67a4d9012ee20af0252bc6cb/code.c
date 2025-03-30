#include stdio.h>
void bubbleSort(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[i];
                arr[j+1]=t;
            }
        }
    }
}
int main(){
    int arr[n], int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    bubbleSort(arr,n);
    printf("Sorted Array: ");
    for (int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}