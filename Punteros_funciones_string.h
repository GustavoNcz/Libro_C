#include <stdio.h>
#include <stdlib.h>

void invertir(int *s,int *t)
{
    int temp;
    temp=*s;
    *s=*t;
    *t=temp;
}

void strcopy(char *s,char *t)
{
    while(*s!='\0')
    {
        *t=*s;
        s++,t++;
    }
}

void strncopy(char *s,char *t,int n)
{
    while(n!=0)
    {
        if (*s=='\0')
            n=0;
        *t=*s;
        t++,s++,n--;
    }
    *t='\0';
}

void strcat(char *s,char *t)
{
    while(*s!='\0')
        s++;
    
    while(*t!='\0')
    {
        *s=*t;
        s++,t++;
    }
    s='\0';
}

void strncat(char *s,char *t,int n)
{
    while(*s!='\0')
        s++;
    
    while(n!=0)
    {
        *s=*t;
        t++,s++,n--;
    }
    *s='\0';
}

int strlen(char *s)
{
    int cont=0;
    while (*s!='\0')
        cont++,s++;
    return cont;
}



int main ()
{
    int A,B;
    A=5,B=7;
    printf("A = %d - B = %d\n",A,B);
    invertir(&A,&B);
    printf("A = %d - B = %d\n",A,B);
    char uno[]="hola esta es una cadena";
    char dos[]="copia esto en la otra cadena";
    char can1[]={};
    char can2[]={"esto es una cadena"};
    //strcopy(&uno,&dos);
    printf("lista uno =: %s \nlista dos =: %s \n",uno,dos);
    //strcat(uno,dos);
    printf("La lista uno ahora es: %s \n",uno);
    printf("Tamaño de cadena uno es %d \n",strlen(uno));
    strncat(uno,dos,13);
    printf("Tamaño de cadena uno es %s \n",uno);
    strncopy(can2,can1,11);
    printf("Tamaño de cadena 1 es %s \n",can1);
}
