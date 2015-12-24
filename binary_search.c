//Binary Search
#include<stdio.h>
int binary_search(int a[], int low, int high, int item){
	int loc=-1;
	while(low<=high){
		int mid=((low+high)/2);
		if(item==a[mid]){
            loc=mid;
            break;
        }
        else if(item<a[mid])
            high=mid-1;
        else
            low=mid+1;
	}
	return loc;
}
int main(){
    int arr[100], i, f, n, item;
    printf("number of elements: ");
    scanf("%d", &n);
    printf("\nenter %d elements: \n", n);
    for(i=0; i<n;i++)
        scanf("%d", &arr[i]);
    printf("\nenter element to search: ");
    scanf("%d", &item);
    f=binary_search(arr, 0, n-1, item);
    if(f==-1)
        printf("\nelement not found");
	else
		printf("\nelement found at %d", f+1);
	return 0;
}
