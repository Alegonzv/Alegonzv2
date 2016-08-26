
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


//programa 5 si es 8igual a nuevas lineas


#include<stdio.h>

main(){

    int c ,n1;
    n1=0;
    while ((c=getchar())!=EOF)
        if (c=='\n')
            ++n1;
    printf("%d\n",n1);

}

// p 9 imprime nuevas lineas palabras y caracteres


#include<stdio.h>

#define IN 1
#define OUT 0


main(){
    int c,nl,nw,nc,state ;
    state=OUT;
    nl=nw=nc=0;
    while (c=getchar() !=EOF){
        ++nc;
        if(c=='\n')
            ++nl;
        if(c==' ' || c=='\n' || c== '\t')
            state=OUT;
        else if(state ==OUT){
            state =IN;
            ++nw;
        }
    }
    printf("%d %d %d \n",nl,nw,nc);


}


//nuevo programa


#include<stdio.h>

#define IN 1
#define OUT 0


main(){
    int c,i.nwhite,nother;
    int ndigit[10];
    
    nwhite=nother=0;
    for(1=0;i<10;++i)
        ndigit[i]=0;
    while ((c=getchar ())!=EOF)
        if (c>='0' && c<='9')
            ++ndigit[c-'0'];
        else
        
        
        
TERMINAR



