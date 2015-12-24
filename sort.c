//Sorting Techniques
#include<stdio.h>
#include<conio.h>

#define MAX 5

int a[MAX];

void quick_sort(int a[], int l, int h){
	int temp, key, low, high;
	low=l; high=h;
	key=a[(low+high)/2];
	do{
		while(key>a[low]){
			low++;
		}
		while(key<a[high]){
			high--;
		}
		if(low<=high){
			temp=a[low];
			a[low++]=a[high];
			a[high--]=temp;
		}
     }
     while(low<=high);
     if(l<high)
		quick_sort(a, l, high);
     if(low<h)
		quick_sort(a, low, h);
}
                                                                                                     
void insertion_sort(){
     int k, j, n=MAX, temp;
     for(k=1; k<=n; k++)
     {
              temp=a[k];
              j=k-1;
              while((temp<a[j]) && (j>=0))
              {
                               a[j+1]=a[j];
                               j=j-1;
              }
              a[j+1]=temp;
     }
     
}
              
void selection_sort() 
{
     int min, loc, temp, i, j, n=MAX;
     min=a[0];
     for(i=0; i<=n-1; i++)
     {
              min=a[i];
              loc=i;
              for(j=i+1; j<=n-1; j++)
              {
                         if(a[j]<min)
                         {
                                     min=a[j];
                                     loc=j;
                         }
              }
              if(loc!=i)
              {
                        temp=a[i];
                        a[i]=a[loc];
                        a[loc]=temp;
              }
     }
     
}

void create()
{
     int i; 
     printf("\nEnter Elements: \n");
     for(i=0; i<MAX; i++)
     {
              scanf("%d", &a[i]);
     }
}

void display()
{
     int i; 
     printf("\nArray Elements are: ");
     for(i=0; i<MAX; i++)
     {
              printf("%d\t", a[i]);
     }
}
  
int a[MAX];                                                                   

int main()
{
    int c, ch=1;
    printf("\n\t\tSorting techniques\n\n");
    while(ch)
    {
                  printf("\n1. Enter Array");
                  printf("\n2. Selection Sort");
                  printf("\n3. Insetion Sort");
                  printf("\n4. Quick Sort");
                  printf("\n5. Display");
                  printf("\n6. Exit");
                  printf("\nEnter your Choice: ");
                  scanf("%d", &c);
                  
                  switch(c){
                            case 1:
                                 create();
                                 break;
                            case 2:
                                 selection_sort();
                                 break;
                            case 3:
                                 insertion_sort();
                                 break;
                            case 4:
                                 {
                                 int h=MAX;
                                 int l=0;                                
                                 quick_sort(a, l, h);
                                 }
                                 break;
                            case 5:
                                 display();
                                 break;
                            case 6:
                                 //exit(0);
                            default:
                                 printf("\nInvalid Choice!");
                            }
                  printf("\nDo you want to continue(1/0)? ");
                  scanf("%d", &ch); 
    }
    return 0;
}
