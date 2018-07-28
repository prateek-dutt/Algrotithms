/*

Divide and Conquer Algorithm using Merge-Sort;
*/

#include<stdio.h>
#include<limits.h>


//Merge the two sorted function into one sorted function.//The Conquer Approach
void Merge(int A[],int p,int q,int r){
   int n1=q-p+1;
   int n2=r-q;

   int L[n1],R[n2];
   int i,j;
   for(i=1;i<=n1;i++){
    L[i]=A[p+i-1];
   }
   for(j=1;j<=n2;j++){
    R[j]=A[q+j];
   }
   L[n1+1]=INT_MAX;
   R[n2+1]=INT_MAX;
   i=1;j=1;
   int k;
   for(k=p;k<=r;k++){
    if(L[i]<=R[j]){
        A[k]=L[i];
        i=i+1;
    }
    else{
        A[k]=R[j];
        j=j+1;
    }
   }



}
//Divide the big array into smaller arrays and apply Merge() to them.//Divide Approach
void Merge_Sort(int A[],int p,int r){

if(p<r){
    int q=(p+r)/2;

    Merge_Sort(A,p,q);
    Merge_Sort(A,q+1,r);
    Merge(A,p,q,r);
}
else{}
}
//Driver Function
int main(){
    int n=6;
    int A[]={1,3,5,2,8,9};
     int p=0;
     int r=5;
     Merge_Sort(A, p,r);
     int i;
     for(i=0;i<n;i++){
            printf("%d\n",A[i]);
     }



return 0;


}
//Code is created by : Prateek Kumar //
