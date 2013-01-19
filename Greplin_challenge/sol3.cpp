#include<iostream>
int count = 0;
void numbers(int *a ,int n , int i , int sum){
    if(sum<0) return;
    if(sum == 0) {
        count++;
        return;
    }
    int j;
    for(j=i;j<n;j++){
        numbers(a,n,j+1,sum-a[j]);
    }
}
int main(){
    int a[] = { 3 ,4,9,	14,15,19,28,37,	47,50,	54,56,	59,61,	70,73,	78,81,	92,95,	97,99};
    int n = sizeof(a)/sizeof(a[0]);
    int i;
    for(i=n-1;i>0;i--){
        numbers(a,i,0,a[i]);
    }
    std::cout<<count<<std::endl;
}