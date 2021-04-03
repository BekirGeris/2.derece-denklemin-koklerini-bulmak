#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float a=0.0,b=0.0,c=0.0,x1=0.0,x2=0.0,d=0.0;
    
    printf("x^2 teriminin katsayisini giriniz:");
    scanf("%f",&a);
    
    printf("x teriminin katsayisini giriniz:");
    scanf("%f",&b);
    
    printf("sabit terimi giriniz:");
    scanf("%f",&c);
    
    d=b*b-4*a*c;
    printf("delta=%.2f\n",d);
    
    if(d==0){
	   printf("iki tane birbirine esit koku vardir\n"); 
	   x1=(-b+sqrt(d))/(2*a);
	   x2=(-b-sqrt(d))/(2*a);
	}
    
    if(d>0){
    	printf("denklemin iki farkli real koku vardir\n");
    	x1=(-b+sqrt(d))/(2*a);
	 	x2=(-b-sqrt(d))/(2*a);
	}
	
	if(d<0){
		printf("denklemin koku yoktur\n");
		return 0;
	}
    
    printf("x1:%.2f\n",x1);
    printf("x2:%.2f",x2);

	return 0;
}
