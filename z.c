
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
    int i,P=1,max,min,N,s,c=0,first,chose,r=0,temp,th,Val,y,tump;
    float a,j=0,A=0;
printf("\n Part 1 :\n");
    printf("How many numbers do you wanna enter?: ");
    scanf("%d",&N);
    while(N<=0 || 100<N)
        {if(0>=N)
        {printf("Error.\n");}
       else if(N>100)
        printf("The size of the vector is 100. We cannot enter more.\n");
    printf("Enter again : ");
    scanf("%d",&N);}
   for(i=0;i<N;i++){
        printf("number %d: ",i+1);
     scanf("%d",&T[i]);}
     max=T[0];
     min=T[0];
     first=T[0];
    for(i=0;i<N;i++)
          {if(T[i]<0)
            {A=A+T[i];
            j++;}
            else if(T[i]>0)
                {P=P*T[i];
                s++;}}
       if(j>0)
          {a = A/j;}
       else {a = 0;}

          if(0==s)
          {P=0;}
          for(i=1; i<N; i++)
            {if(T[i]==first)
            {c=1;}
          else {c=0; break;}}

    if(N==1)
       { printf("No min and max because it requires a group of numbers.\n ");}
    else if(c==1)
          { printf("No min and max because it requires different numbers.\n ");}
       else if(c!=1)
       {for(i=0;i<N;i++)
        {if(max<=T[i])
      {max=T[i];}}
       printf("The maximum number: %d\n",max);
      for(i=0;i<N;i++)
      {if(min>=T[i])
      {min=T[i];}}
       printf("The minimum number: %d\n ",min);}
       printf("The average of negative numbers is: %.2f\n ",a);
       printf("The product of positive numbers is: %d\n\n ",P);
printf("\n Part 2 :\n");
       printf("choose a number among them : ");
       scanf("%d",&chose);
       for(i=0; i<N; i++)
        if(T[i]==chose)
        {r++;}
        printf("  %d occured %d time(s).\n\n",chose,r);

            for(i=0; i<N/2; i++)
            {temp=T[i];
            T[i]=T[N-i-1];
            T[N-i-1]=temp;}

        for(i=0; i<N; i++)
            {printf("%d ",T[i]);}

printf("\n Part 3 :");
            printf("\n choose a random number on your mind : ");
       scanf("%d",&Val);
            printf("choose the position : ");
        scanf("%d",&th);
        th--;
         for(i=N; i>th; i--)
            {T[i]=T[i-1];}
            T[th]=Val;
             N++;
            for(i=0; i<N; i++)
            {printf("%d ",T[i]);}

            printf("\n");
            printf("\n Part 4 :\nRemoving all zeros :\n");
            for(i=0; i<N; i++)
            {if(T[i]==0)
             {
                 for(y=i; y<N-1; y++)
                {T[y]=T[y+1];}
                 i--;
               N--;}}

               for(i=0; i<N; i++)
            {printf("%d ",T[i]);}
              printf("\n");
              printf("\n Part 5 :\nMoving all negative numbers to the left side :\n");
            for(i=0; i<N; i++)
                {if(T[i]<0)
                 {for(y=0; y<i; y++)
                 {if(T[y]>=0)
                 {tump=T[y];
            T[y]=T[i];
            T[i]=tump;}}}}

               for(i=0; i<N; i++)
            {printf("%d ",T[i]);}








    return 0;
}
