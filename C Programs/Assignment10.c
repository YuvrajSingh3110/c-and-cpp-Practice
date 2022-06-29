#include <stdio.h>
struct store
{
    int soap;
    float rice;
    int shampoo;

};

/*CP of
soap = 30
rice = 60
shampoo = 75
*/

int main ()
{
    int a,b,c;
    float y,q;
    int x,z,p,l,m,n,r;
struct store s;
  
printf(" WELCOME TO THE MINI  STORE\n\n");


printf("ITEM AVAILABLE IN THE STORE \n 1.Soap |(Rs 50/piece)     |(90 piece) \n 2.Rice |(Rs 80 per kg)    |(600 kg) \n 3.Shampoo |(Rs 90 /piece) |(100 pieces)");

printf("\nEnter the amount u need in sequence as mentioned above and put zero if no need:");
scanf("%d%f%d",&s.soap,&s.rice,&s.shampoo);
if (s.soap<90 && s.rice<600 && s.shampoo<800)
{
x=s.soap*45;
y=s.rice*80;
z=s.shampoo*90;

printf("Your bill is-:\n1.cost of soap= Rs %d \n2.cost of rice= Rs %f \n3.cost of shampoo= Rs %d ",x,y,z);
}
else
{
printf("amount is unavailable");
p=s.soap*50;
q=s.rice*80;
r=s.shampoo*90;

printf("Your bill is:\n1.cost of soap= Rs %d\n2.cost of rice= Rs %.2f \n3.cost of shampoo= Rs %d \n",p,q,r);
l=s.soap-90;
m=s.rice-600;
n=s.shampoo-800;
printf("New stock available is \n1.soap is %d piece \n2.rice is %f kg \n3.shampoo is %d piece\n",l+90,m+600.00,n+800);}
a=s.soap*20;
b=s.rice*20;
c=s.shampoo*15;
printf("\nTotal profit is: Rs %d", a+b+c);
}