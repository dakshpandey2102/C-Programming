#include<stdio.h>
int main(){
    int arr [] = {5,8,107,9,4,7,78,5,28};
    int n = sizeof(arr) /4;
    int mx = arr[0];
    for(int i;i<n;i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
        
    }
    printf("%d",mx);
}