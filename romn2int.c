    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
     
    int digit(char);
    int main(){
     
        char a[1000];
        int i=0;
        long int b =0;
        scanf("%s",a);
     
        while(a[i])
        {
             if(digit(a[i])>=digit(a[i+1]))
             {
                 b=b+digit(a[i]);
             }
             else
             {
                 b=b+(digit(a[i+1])-digit(a[i]));
                 i++;
             }
             i++;
        }    
        printf("%ld",b);
        return 0;
    }
     
    int digit(char c)
    {
        int b=0;
        switch(c)
        {
             case 'I':b= 1;break;
             case 'V':b=5; break;
             case 'X':b= 10;break;
             case 'L':b= 50;break;
             case 'C':b= 100;break;
             case '\0':b=0;break;
             default:b=-1; 
        }
        return b;
    }
