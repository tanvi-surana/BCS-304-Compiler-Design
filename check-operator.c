 #include<stdio.h>
#define MAX 100

char check(char *arr,int n)
{
   char state='a';
   int i;
   for(i=0;i<n;i++)
   {  
   	   char current_char=arr[i];

      switch(state)
      {
         case 'a': if(current_char=='=')
                   {
                     state='b';
                   }
                  else if(current_char=='+')
                  {
                    state='c';
                  } 
                  else if(current_char=='-')
                  {
                    state='d';
                  } 
                  else if(current_char=='<')
                  {
                    state='e';
                  }
                  else if(current_char=='>')
                  {
                    state='f';
                  } 
                  else
                  {
                    state='j';
                  }  
               break;
          case 'b': if(current_char=='=')
                   {
                     state='g';
                   }
                  else
                  {
                    state='j';
                  }  
               break;
          case 'c':  
                 state='j';  
               break;     
          case 'd': 
                  state='j';  
               break;      
          case 'e':
                  if(current_char=='=')
                   {
                     state='h';
                   }
                  else
                  {
                    state='j';
                  }  
               break;
           case 'f':
                  if(current_char=='=')
                   {
                     state='i';
                   }
                  else
                  {
                    state='j';
                  }  
               break;
           case 'g':
           case 'h':
           case 'i':
                  state='j';
               break;                          
           default:
              state='j';
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
   char val=check(arr,n);
   if(val=='j')
   {
     printf("Not an operator\n");
   }
   else
   {
      printf("An operator\n");
   }
  

   return 0;
}