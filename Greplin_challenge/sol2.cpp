#include<iostream>
int prime[1000000];
int main(){
    int n = 227000;
    //std::cout<<"lll";
    int i;
    for(i = 2; i<1000000;i++)
      prime[i]=1;
    for(i = 2; i<1000;i++){
        if(!prime[i]) continue;
        int j;
        for(j=i*i;j<1000000;j+=i){
            prime[j] = 0;
        }
    }

    int num = 1;
    int nextnum = 1;
    int newnum;
    while(1){
        newnum = num+nextnum;
        if(newnum>n && prime[newnum]) break;
        num = nextnum;
        nextnum = newnum;
    }
    int sum = 0;
    for(int i=2;i<newnum+1;i++){
        if(prime[i] && (newnum+1)%i==0){
            sum+=i;
        }
    }
    std::cout<<sum;
    return 0;

}