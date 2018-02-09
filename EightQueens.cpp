#include <iostream>
#include <math.h>
using namespace std;
#define max 8

int queen[max];

bool check(int n){
	for(int i = 0; i<n; i++){
		if((queen[i]==queen[n])||(abs(queen[i]-queen[n])==n-i)) return false;
	}
	return true;
}

void print(){
	printf("***************\n");
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			if(j==queen[i]) printf("X ");
			else printf("O ");
		}
		printf("\n");
	}
}

void put(int n)
{
    int i;
    for(i = 0; i < max; i++)
    {       
        queen[n] = i; 
        if(check(n))
        {           
            if(n == max - 1)
            {
                print();
            }         
            else
            {
                put(n + 1); 
            }
        }
    }
}

int main(void){
	put(0);
	system("pause");
} 
