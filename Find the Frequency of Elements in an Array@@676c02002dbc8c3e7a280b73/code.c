#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int oc=0,ec=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    printf("%d %d",ec,oc);
}