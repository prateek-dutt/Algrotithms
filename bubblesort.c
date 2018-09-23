#include<stdio.h>
//bubble sort algorithm
//swap two variables using third one
void swapit(int *xp, int *yp){

    //Bubble sort algorithm

int temp;

temp=*xp;
*xp=*yp;
*yp=temp;

}
void sortArray(int arr[],int n){

int k;
int i;
int temp;
int swap=0; //you should explicitly assign zero to the variable which you will use as a counter, it takes some random value otherwise.
for(k=0;k<n-1;k++){


    for(i=0;i<n-k-1;i++){

        if(arr[i] > arr[i+1]){
          swapit(&arr[i],&arr[i+1]);
            swap++;
        }

    }



}

printf("Your array has been successfully sorted with bubble sorting algorithm");
printf("\nTotal number of swaps required: %d",swap);
}


//driver function
int main(){

    int n;
    printf("Enter the size of your array \n");
    scanf("%d",&n);
    int arr[n];
    int counter;
    printf("Enter the elements of your array starting from index number 0 to index number %d\n",n-1);
    for(counter=0;counter<n;counter++){

        printf("Enter the %d element of your array \n",counter);
        scanf("%d",&arr[counter]);
        }


 sortArray(arr,n);

printf("\nDo you want to print the sorted array");
int ans;
printf("\ 1- yes  2 -No");
scanf("\n %d",&ans);
if (ans==1){
    printf("\n Printing your sorted array\n");
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}

else{

    printf("FUCK YOU RIGHT IN THE ASS, you dont want to print this, you fat fucking bastard");
}



}
