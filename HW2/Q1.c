#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Hasan Hut 150119764

void reverseN(int *number,int N){
        int n;
        n = *number; // pointer
        int count=0;

        while(n>0){ //Counting number of digits of number.
            count++;
            n/=10;
        }

        if(N>count){ //Checking if N is more than the number's digits.
            printf("N must be less than %d !",count+1);
        }else{
            int x;
            int reverse_part=0; //reverse_part is used to store the reverse part of the number.
            int i;
            i = N;
            while (i>0){ //Running the N-times loop to reverse N-digits.
                x = *number% 10 ;
                reverse_part = (reverse_part * 10) + x ;
                *number = (*number)/10 ;
                i--;
            }
            *number = (*number * (int)pow(10, N)) + reverse_part;
            printf("%d",*number);
        }

}
int main(){
        int n,N;
        scanf("%d %d",&n,&N);
        reverseN(&n,N);  //Invoking the function.
}
