#include <stdio.h>


int main()

{

int i,N,j;

int count=0;

scanf("%d",&N);

for(i=2;i<N;i++)

{



for(j=1;j<=i;j++)

{

if(i%j==0)
count++;

}
 
if(count==2)

{
 
printf("%d ",i);
 
}

count=0;

} 


}