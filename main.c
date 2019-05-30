#include <stdio.h> 

#include <stdlib.h>

#include <string.h>



int main()

{

    char num[10][3]={"箂","滁","禠","把","竩","ヮ","嘲","琺","","╤"};

    char ch[3][3]={"","ㄕ","珺"};

    char wan[3][3]={"","货","窾"};

    int i, j, len, group51, start51, digit, c=0, flag=0;

    char n[16];


    printf("叫块俱计(计惠璶16计)" );

    scanf("%s",n); 

    len = strlen(n);

    if (len>16)  

    {

                printf("俱计禬筁16计, 礚猭锣传...\n");

                exit(0);

    }

    group51=(len-1)/4+1;

    printf("锣传挡狦");

    for(i=0;i<group51;i++)

    {

                        flag=0;

                        if (i==0) start51=(4-len%4)%4;

                        else start51=0;

                        for (j=start51;j<4;j++)

                        {

                            digit=n[c++]-48;

                            if(digit==0) continue; 

                            printf("%s",num[digit]);

                            if(j!=3) 

                             printf("%s",ch[j]);

                             flag=1;

                        }

                        if (group51!=1 && i!=group51-1 && flag!=0)

                        {

                                     printf("%s",wan[4-group51+i]);

                        }

    }

    printf("\n");

    system("pause");

    return 0;

}
