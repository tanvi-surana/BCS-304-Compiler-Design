 #include<stdio.h>
#define MAX 100

int check(char *arr,int n)
{
   int state=0,i;
   for(i=0;i<n;i++)
   {  
   	   int val=arr[i];
   	   char current_char='s';
   	   if(val>=65 && val <=90 || val>=97 && val <=122)
   	   {
   	   	 current_char='l';
   	   }
   	   if(val>=48 && val<=57)
   	   {
   	   	 current_char='d';
   	   }

      switch(state)
      {
         case 0: if(current_char=='l')
                   {
                     state=1;
                   }
                  else if(current_char=='d')
                  {
                    state=2;
                  } 
                  else
                  {
                    state=2;
                  } 
               break;
          case 1: if(current_char=='l')
                   {
                     state=1;
                   }
                  else if(current_char=='d')
                  {
                    state=1;
                  } 
                  else
                  {
                    state=2;
                  } 
           break;
          case 2: if(current_char=='l')
                   {
                     state=2;
                   }
                  else if(current_char=='d')
                  {
                    state=2;
                  } 
                  else
                  {
                    state=2;
                  } 
           break; 
           default:
              state=2;
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
     printf("Identifier\n");
   }
   else if(val==2)
   {
      printf("Not an Identifier\n");
   }
   else
   {
     printf("Not an Identifier\n"); 
   }

   return 0;
}