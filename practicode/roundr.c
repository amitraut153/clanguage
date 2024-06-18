#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
typedef struct process
{
char pname[10];
int bt;
int at;
int wt;
int rt;
int tat;
}p1;

int main()
{
p1 p[10];
float avg_tat=0;
float avg_wt=0;
float avg_rt=0;
int n;
int i;
int j;
int k=0;
int l=0;
p1 swap;
p1 result[10];
p1 e[10];
int nextprocess=0;
int total_burst=0;
int realtime=0;
int tq;
printf("\n ENTER THE NUMBER OF PROCESS :");
scanf("%d",&n);
printf("\nENTER THE TIME QUANTUM:");
scanf("%d",&tq);
for(i=0;i<n;i++)
{

sprintf(p[i].pname,"p%d",i+1);

p[i].rt=-1;
p[i].wt=0;
p[i].tat=0;

printf("\nENTER THE BURST TIME :");
scanf("%d",&p[i].bt);
total_burst=total_burst+p[i].bt;
printf("\nENTER THE ARRIVAL TIME:");
scanf("%d",&p[i].at);
}

for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
    {
       if(p[i].at>p[j].at)
       {
       swap=p[i];
       p[i]=p[j];
       p[j]=swap;
       }
     }
 }

for(i=0;i<n;i++)
  {
	 e[l]=p[i];
	 if(i!=(n-1))
	 nextprocess=p[i+1].at;
	 else
	 nextprocess=10000;

	 while(total_burst>=realtime && nextprocess>(realtime+tq))
	      {
	      if(e[0].bt>tq)
	      {
	      e[0].wt=e[0].wt+realtime-e[0].tat;

	      if(e[0].rt==-1)
	      e[0].rt=realtime;

	      realtime=realtime+tq;
	      e[0].tat=realtime;
	      e[0].bt=e[0].bt-tq;
		   swap=e[0];
		   for(j=0;j<=(l-1);j++)
		   e[j]=e[j+1];
		   e[j]=swap;

	      }

	      else
	      {
	      if(e[0].bt!=0)
	       {
	       if(e[0].rt==-1)
	       e[0].rt=realtime;
	       e[0].wt=e[0].wt+realtime-e[0].tat-e[0].at;
	       realtime=realtime+e[0].bt;
	       e[0].tat=realtime-e[0].at;
	       }

	       result[k]=e[0];
	       k++;
	       for(j=0;j<=(l-1);j++)
	       e[j]=e[j+1];
	       l=l-1;
	       }

       }
       l++;
}


for(i=0;i<n;i++)
{

avg_tat=avg_tat+result[i].tat;
avg_rt=avg_rt+result[i].rt;
avg_wt=result[i].wt+avg_wt;
}
avg_wt=avg_wt/n;
avg_tat=avg_tat/n;
avg_rt=avg_rt/n;
printf("\nAVERAGE WAITING TIME : %f",avg_wt);
printf("\nAVERAGE TURN ARROUND TIME :%f",avg_tat);
printf("\nAVERAGE RESPONSE TIME :%f",avg_rt);
return 0;
}

