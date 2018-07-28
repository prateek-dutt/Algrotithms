import java.io.*;

import sun.security.util.Length;

public class InsertionSort{

     public static void main(String[] args) {
        
    int[] arr= new Array[10];

    for (int j=1;j<10;j++){
   
        key=arr[j];
        int i=j-1;
        while (i>0 && arr[i]>key){
         arr[i+1]=arr[i];
         i=i-1;

        }
        arr[i+1]=key;
    }

    }
}
