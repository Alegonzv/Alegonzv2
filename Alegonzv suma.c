
#include<stdio.h>
int main(){
    int a=3,b;
    int l;
    printf("Ingrese un numero");
    scanf("%d",&b);
    printf("La suma de %d mas %d es %d",a,b,a+b);
    return 0;
}



//problema 2 clase

 main(){
     int fahr , celsius;
     int lower, upper,step;

     lower=0;
     upper=300;
     step=20;

     fahr=lower;
     while (fahr <=upper){
        celsius=5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr +step;
    }
    
    
    //programa 3
    
    
    #include<stdio.h>

main(){
    int c;
    c=getchar();
    while (c != EOF){
        putchar(c);
        c=getchar();
    }

}

//programa 4 

#include<stdio.h>
main (){
    float nc;

    nc=0;
    while(getchar ()!=EOF)
        ++nc;
    printf("%f\n",nc);

}


//programa 5 


