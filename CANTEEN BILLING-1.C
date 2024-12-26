/*
COURSE PROJECT TITLE:CANTEEN BILLING
------------------------------------
DETAILS:
NAME:PAGADALA ANANYA
HALL TICKET NUMBER:2203A52046
YEAR:1st 
SEMISTER:2nd
SECTION:H1
--------------------------------------
ABSTRACT:
-----------------------------------------------------
CREATING A PROGRAM BASED ON BILLING SYSTEM OF CANTEEN
------------------------------------------------------
*/ 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
int c1,a,b,c,d,e,f,g,h,i,j,k,l,m,o,p,q,r,s,T,u,v,w,x,y,z,totalbill=0;
int n;
struct tm*ptr;
time_t t;
t=time(NULL);
ptr=localtime(&t);
h=40;
system("COLOR 0D");
printf("\t\t\t\t----------------------------------");
printf("\n\t\t\t\t\tCANTEEN BILLING\t\t\t\n");
printf("\t\t\t\t-----------------------------------\n\t\t\t\t\t");
    printf("\n1.Burger");
	printf("\n2.French fries");
	printf("\n3.Pizza");
	printf("\n4.Pasta");
	printf("\n5.pav bhaji");
	printf("\n6.Tandoori paneer");
	printf("\n7.Egg curry");
	printf("\n8.hydrabadi biryani");
	printf("\n9.Chicken Tandoori");
	printf("\n10.Mutton Korma\t");
	printf("\n11.Fish Fry");
	printf("\n12.Chicken Manchurian");
	printf("\n13.Frankie");
	printf("\n14.Noodles");
	printf("\n15.Fried Rice");
	printf("\n16.Manchow Soup");
	printf("\n17.Cold Drinks");
	printf("\n18.Pastry");
	printf("\n19.Gulab Jamun");
	printf("\n20.Rasmalai\n\n");
 do{
 printf("\nselect your favourite:");									
  scanf("%d",&n);
switch(n)
{
case 1:
a=60;
printf("burger=%d\n",a);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=a*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 2:
b=40;
printf("%s",asctime(ptr));
printf("French fries =%d\n",b);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=b*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
break;
case 3:
c=100;
printf("Pizza=%d\n",c);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=c*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 4:
d=80;
printf("Pasta=%d\n",d);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=d*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 5:
j=100;
printf("Pav Bhaji=%d\n",j);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=j*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 6:
k=400;
printf("Tandoori Paneer=%d\n",k);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=k*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 7:
l=120;
printf("Egg Curry=%d\n",l);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=l*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 8:
m=190;
printf("Haydrabadi Biryani=%d\n",m);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=m*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 9:
o=500;
printf("Chicken Tandoori=%d\n",o);              
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=o*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 10:
p=600;
printf("Mutton Korma=%d\n",p);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=p*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 11:
q=150;
printf("Fish Fry=%d\n",q);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=q*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 12:
r=70;
printf("Chicken Manchurian=%d\n",r);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=r*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 13:
s=40;
printf("Frankie=%d\n",s);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=s*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 14:
T=110;
printf("Noodles=%d\n",T);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=T*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 15:
u=80;
printf("Fried Rice=%d\n",u);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=u*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 16:
v=190;
printf("Manchow Soup=%d\n",v);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=v*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 17:
w=50;
printf("Cold Drinks=%d\n",w);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=w*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 18:
x=50;
printf("Pastry=%d\n",x);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=x*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
i=g+h;
printf("%s",asctime(ptr));
break;
case 19:
y=25;
printf("Gulab Jamun=%d\n",y);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=y*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
printf("total bill=%d\n",i=g+h);
printf("%s",asctime(ptr));
break;
case 20:
z=40;
printf("Rasmalai=%d\n",z);
printf("quantity=");
scanf("%d",&e);
printf("total=%d\n",f=z*e);
printf("Gst 18%=%d\n",g=(f+(f*18/100)));
printf("dilevery charges=%d\n",h);
//printf("total bill=%d\n",i=g+h);
i=g+h;
printf("%s",asctime(ptr));
break;
}
printf("do you wish to continue if yess press 1 else any other number");
scanf("%d",&c1);
totalbill+=i;
printf("total bill=%d",totalbill);
}
while(c1==1);
return 0; 
}
