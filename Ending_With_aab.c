#include<stdio.h>
#include<conio.h>

void main()
{
int i=0,cst=0, test=0,
st[4][2]={ 1, 0,
            2, 1,
            0, 3,
            2, 1 };
char ch,str[20];
printf("Enter the String consisting of a and b:  ");
scanf("%s",&str);
ch = str[0];
while(ch!='\0')
        {
        if(ch=='a')
        cst=st[cst][0];
        else if (ch=='b')
        cst=st[cst][1];
        else
        test=1;
        i++;
        ch=str[i];
        }
  if(cst==3 && test==0)
  printf("The String %s is Accepted with this DFA", str);
  else
  printf(" The String %s is not Accepted with this DFA", str);
}
