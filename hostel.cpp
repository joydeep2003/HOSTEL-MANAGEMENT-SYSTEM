// JOYDEEP GHOSH ****************HOSTEL MANAGEMENT SYSTEM******************************
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    start:
	int A,B,C,D,E,F,G,H,I,J,total,temp,rollno[15],phone_no[10],father_phoneno[10];
    char name[100],sec,father_name[50],mother_name[50],gender[10];
    
    system("color A");
	printf("\n\t***************************");
    printf("\n\t**                       **");
    printf("\n\t** WELCOME TO ABC HOSTEL **");
    printf("\n\t**                       **");
    printf("\n\t***************************");
    printf("\n\tAre You VACCINATED?\n\tGive:1 for Yes\n\t     0 for No\n\t");
    scanf("%d",&A);
   
    if(A==1)
    {
       
       printf("\n\t**************************************");
	   printf("\n\t*YOU ARE ELIGIBLE TO JOIN THE HOSTEL!*");
	   printf("\n\t**************************************");
       printf("\n\tDo you want Hostel?\n\tGive:1 for Yes\n\t     0 for No\n\t");
       scanf("%d",&B);
       
       if(B==1)
       {           
           printf("\n\t***************************");
           printf("\n\t***************************");
	       printf("\n\t1.Enter Your Name:");
           scanf("%s",&name);
           printf("\n\t2.Enter Your Section:");
           scanf("%s",&sec);
           printf("\n\t3.Enter Your RollNumber:");
           scanf("%d",&rollno);
           printf("\n\t4.Enter Your father_name:");
           scanf("%s",&father_name);
           printf("\n\t5.Enter Your mother_name:");
           scanf("%s",&mother_name);
           printf("\n\t6.Enter Your father_phoneno:");
           scanf("%d",&father_phoneno);
           printf("\n\t7.Enter Your phone_no:");
           scanf("%d",&phone_no);
           printf("\n\t8.Enter Your gender:");
           scanf("%s",gender);
           printf("\n\t***************************");
           printf("\n\t***************************");
          
           total=2000;
           temp=total;  
           printf("\n\tNormal room fee amount is%d",total);
           printf("\n\tDo You Want Luxury Room(2 Share Bedroom with AC)?Fees=1000\n\tGive:1 for Yes\n\t     0 for No\n\t");
           scanf("\n%d",&C);
            if(C==1)
           {
               total=total+1000;
               printf("\n\tTotal amount is%d",total);
           }  
           printf("\n\tDo you want Food Facility?Fees=500\n\tGive:1 for Yes\n\t     0 for No\n\t");
           scanf("\n%d",&D);
           if(D==1)
           {
               total=total+500;
               printf("\n\tTotal amount is %d",total);
           }
           printf("\n\tDo you want Internet Facility?Fees=500\n\tGive:1 for Yes\n\t     0 for No\n\t");
           scanf("\n%d",&E);
           if(E==1)
          {
              total=total+500;
              printf("\n\tTotal amount is%d",total);
          }
           printf("\n\tDo you want GYM?Fees=300\n\tGive:1 for Yes\n\t     0 for No\n\t");
           scanf("%d",&F);
           if(F==1)
           {
               total=total+300;
               printf("\n\tTotal amount is%d",total);
           }
           printf("\n\tIs your family Income<500000?\n\tGive:1 for Yes\n\t     0 for No\n\t");
           scanf("\n%d",&G);
           if(G==1)
          {
               H=0.1*total;
              
               I=total-H;
               
               printf("\n\tAMOUNT TO BE PAID=%d",I);
               printf("\n\t                       ");
               printf("\n\t                       ");
               printf("\n\t***********************");
               printf("\n\t**     THANK YOU     **");
               printf("\n\t***********************");
                printf("\n\t----------------------*-------------------");
              
           }
           else
           {
           	I=total;
           	
           	printf("\n\tAMOUNT TO BE PAID=%d",I);
           	printf(" \n\t                            ");
           	printf("  \n\t                           ");
            printf("\n\t******************************");
            printf("\n\t**      THANK YOU           **");
            printf("\n\t******************************");
             printf("\n\t----------------------*----------------------");
		   }
       }
       
      else
    {
	
            
			printf("\n\tPLESE VISIT THE HOSTEL AGAIN");
    	    printf("\n\t************************************");
            printf("\n\t**          THANK YOU             **");
            printf("\n\t************************************");
			printf(" \n\t                            ");
            printf("  \n\t                           ");
            printf("\n\t----------------------*-------------------");
			
     }
  
    }
    else
    {
    	
	    printf("\tPLEASE GET VACCINATED!!");
        printf(" \n\t                            ");
        printf("  \n\t                           ");
        printf("\n\t********************************");
        printf("\n\t**        THANK YOU           **");
        printf("\n\t*********************************");
        
	
        
	}
	
	
    printf("\n\t------------------------------------------------------------");
    printf("\n\tWANT TO REGISTER A NEW CANDIDATE?\n\tGive:1 for Yes\n\t     0 for No\n\t");
	scanf("%d",&J);
	if(J==1)
	goto start;
	

}

