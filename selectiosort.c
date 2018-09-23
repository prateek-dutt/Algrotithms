#include<stdio.h>
/*
FileName: selectionsort.c
Author: Prateek Kumar
Basic Info about SelectionSort:It finds the minimum or the maximum element in an unsorted array
and compare it to all the other elements and then put it in its correct position in a sorted array
In this case we are using minimum element technique.We have three function each with its expli
cit job namely printArray : which will print the sorted array on users will
swap(): swap the elements of the array after comparision,
selectionSort(): to perform selection sort on array
main(): driver function.


*/
void printArray(int arr[], int n){
int i;
printf("Printing your sorted array\n");
for(i=0;i<n;i++){
    printf("Element %d : %d\n",i,arr[i]);
}


}
void swap(int *xp,int *yp){
int temp=*xp;
*xp=*yp;
*yp=temp;


}
void selectionSort(int arr[], int n){
int min;

int i;

for(i=0;i<n-1;i++){

    min=i;
    int j;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    swap(&arr[min],&arr[i]);

    }

}

printf("Your array has been sorted successfully by Selection Sort \n");
printf("Do you want to print the sorted array \n");
printf("Press 1 for yes and 2 for No\n");
int answer;
scanf("%d",&answer);
if(answer==1){
    printArray(arr,n);
}

}

int main(){

int arr[]={12,34,87,65};
int n=4;

selectionSort(arr,n);


return 0;}
