#include<stdio.h>
#include<string.h>
int main()
{ 
    int choice,Length,j,i,count=0,vowel=0,space=0,cons=0,digit=0;
    char str[100] ,ktr[100];
    char ch,choose;
	printf("Main Menu\n");
	printf("          1.Reverse a string\n");
   	printf("          2.Concatenation\n");
   	printf("          3.Palindrome\n");
   	printf("          4.Copy a string\n");
   	printf("          5.Length of the string\n");
   	printf("          6.Frequency of character\n");
   	printf("          7.Find number of vowels and consonants\n");
   	printf("          8.Find number of blank spaces and digits\n");
   	puts("Please enter the string : ");
   	gets(str);
   	do{
	   	 printf("Please Enter Your Choice : ");
   		 scanf("%d",&choice);
   		 switch(choice)
   		{
   			case 1:
		    printf("The string after reversing is : ");
		    for(i=0;str[i];i++);/*length=i*/
		    for(j=i-1;str[j];j--)
		    {
		     	printf("%c",str[j]);
		    }
			break ;
			
			case 2:  
			printf("Please Enter the string you want concatenation : ");
			scanf("%s",&ktr);
			Length=strlen(str);/*first string length*/
			printf("The string after concatenation is : ");
			for(i=0;ktr[i];i++,Length++)
			{
				str[Length]=ktr[i];
			}
			printf("%s",str);
			break;
			
			case 3: 
			Length=	strlen(str); 
			Length=Length-1;
			for(i=0;i<Length;i++,Length--)
                         {	
                            if(str[Length]!=str[i])
	                            {
	                             printf("The string is not palindrome");
                                 	break;
                            	}
                        	else
	                               {	printf("The string is palindrome");
	                                break;
	                               }	
                         }
               break;
               
            case 4: 
                    printf("Enter the string you want copy : ");
                    scanf("%s",&ktr);
                    printf("The string after copy is : ");
//                  for(i=0;str[i];i++)
//                  {
//   	              ktr[i]=str[i];
//	                }printf("%s",ktr);
	                printf("%s",strcpy(str,ktr));
                    break;
                    
            case 5: 
                    printf("length of the string is : ");
                    for(i=0;str[i];i++);
                    {
                 	}
                  	printf("%d",i);
	                break;
	                
         	case 6:
	                printf("please enter a character u want frequency= ");
   	                scanf("%s",&ch);
		            count=0;
	             	for(i=0;str[i];i++)
	                 	{
		                	if(ch==str[i])
		                      	{
				                  count++;
		                     	}
		                }
	                 	printf("%d",count);
	             	break;
	             	
	    	case 7: 
	            	for(i=0;str[i];i++)
	       	   {
			       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
	                {
		              vowel++;
		            } 
		           else
		            {
	     	          cons++;
	            	}
		            if(str[i]=' ')
		            {
		             space--;
		            }	
            	}
		        printf("The given string number of vowel is= %d\n",vowel);
		        printf("The given string number of constant is= %d\n",cons);
		             break;
		
            case 8: 
               	for(i=0;str[i];i++)
	     	{
		     	if(str[i]>='0' && str[i]<='9')
	              {
		             digit++;
		          } 
	            else if(str[i]==' ')
	           	  {
			         space++;
		          }	
	        }
	
	        	printf("The given string number of digit is= %d\n",digit);
	          	printf("The given string number of space is= %d\n",space);
	        	break;
	        	
		default : 
		     	printf("Enter invalid choice\n");
				
		}
   		
   	         	printf("\nDo you want to continue( for  Yes Y/y and for  No N/n )= "  );
   	        	scanf("%s",&choose);
   		
     }while(choose=='y'||choose=='n'&&choose=='N'||choose=='Y');
   	
 }
