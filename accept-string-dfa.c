#include<stdio.h>
#define MAX 100

int check(char *arr,int n)
{
   int state=0,i;
   for(i=0;i<n;i++)
   {
      char current_char=arr[i];
      switch(state)
      {
         case 0: if(current_char=='a')
                   {
                     state=1;
                   }
                  else if(current_char=='b')
                  {
                    state=2;
                  } 
                  else
                  {
                    state=6;
                  } 
               break;
          case 1: if(current_char=='a')
                   {
                     state=3;
                   }
                  else if(current_char=='b')
                  {
                    state=4;
                  } 
                  else
                  {
                    state=6;
                  } 
           break;
          case 2: if(current_char=='a')
                   {
                     state=6;
                   }
                  else if(current_char=='b')
                  {
                    state=2;
                  } 
                  else
                  {
                    state=6;
                  } 
           break;
           case 3: if(current_char=='a')
                   {
                     state=3;
                   }
                  else if(current_char=='b')
                  {
                    state=2;
                  } 
                  else
                  {
                    state=6;
                  } 
                 break;
           case 4: if(current_char=='a')
                   {
                     state=6;
                   }
                  else if(current_char=='b')
                  {
                    state=5;
                  } 
                  else
                  {
                    state=6;
                  } 
           break;         
          case 5: if(current_char=='a')
                   {
                     state=6;
                   }
                  else if(current_char=='b')
                  {
                    state=2;
                  } 
                  else
                  {
                    state=6;
                  } 
           break;  
           case 6: if(current_char=='a')
                   {
                     state=6;
                   }
                  else if(current_char=='b')
                  {
                    state=6;
                  } 
                  else
                  {
                    state=6;
                  } 
           break;  
           default:
              state=6;
              break;
      }
   }

   return state;
}

int main()
{
   char arr[MAX];
   int n;
   printf("Enter the size\n");
   scanf("%d",&n);   
   printf("Enter the string\n");
   scanf("%s",arr);
   int val=check(arr,n);
   if(val==1)
   {
     printf("Valid string----a\n");
   }
   else if(val==2||val==4)
   {
      printf("Valid string---a*b+\n");
   }
   else if(val==5)
   {
    printf("Valid string---abb\n");
   } 
   else
   {
     printf("Invalid string\n");
   }

   return 0;
}