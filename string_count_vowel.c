//count total number of vowwl or constant
#include<stdio.h>
int main()

{
	char a[100],vowel=0,cons=0,space=0,i;
	puts("enter your string= ");
	gets(a);
	puts(a);
		for(i=0;a[i];i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
		vowel++;
		}
		else if(a[i]==' ')
		{space--;
		}
		else{
			cons++;
		}
		
	}
	printf("vowel is= %d\n",vowel);
		printf("consatnt is= %d\n",cons);
}
	
	
	

