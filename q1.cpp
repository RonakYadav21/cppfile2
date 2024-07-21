#include<iostream>
#include<string.h>
using namespace std;
#define max 5
struct data{
	char job[10];
	int prno;
	int ord;
};
class pque{
	data d[max];
	int rear ,front;
	int i;
	public :
	qpue(){
		rear=front=-1;
		for( i=0 ;i<max ;i++)
		strcpy(d[i].job,"\0");
		d[i].ord=d[i].prno=0;
	}
	void add(data dt);
	void sort();
	data remove();
	void display();
};
void pque :: add(data dt)
{
	if(rear==max-1)
	{
		cout<<"the queue is full ";
	}
	else
	{
		rear++;
		d[rear]=dt;
		if (front==-1)
		front=0;
		sort();	
	}
}
void pque ::sort()
{
	data temp;
	for( int i=front;i<rear;i++)
	for(int j=i+1;j<=rear;j++)
	if(d[i].prno>d[j].prno)
	{
		temp=d[i];
		d[i]=d[j];
		d[j]=temp;
	}
	else
	if (d[i].prno==d[j].prno)
	if(d[i].ord>d[j].ord)
	{
		temp=d[i];
		d[i]=d[j];
		d[j]=temp;
	}
	
}
data pque::remove()
{
	data t ;
	// strcpy(t.job," ");
	// t.ord=t.prno=0;
	if(front==-1)
	{
		cout<<"queue is empty";
		
	return(t);	
	}
	
		data temp ;
		temp=d[front];
		d[front]=t;
		if (rear==front)
		 front=rear=-1;
		else 
		front++;
     	return (temp);	
	
}
// void pque::display(){
	// int i;
	// for(i=front;i<=rear;i++){
		// cout<<d[i];
	// }

// }
// 
int main ()
{
	pque q ; 
	data dt ;
	int j=0;
	cout<<"enter the job discription and priority :";
	for(int i =0 ;i<=max;i++){
	
	cin>>dt.job>>dt.prno;
	dt.ord=j++;
	q.add(dt);
}
cout<<endl<<"job priority "<<endl;
for(int i =0; i<max ;i++)
{
	// p.display();
	data temp;
	// data temp=q.remove();
	cout<<temp.job<<" "<<temp.prno;
	cout<<endl;
}
// q.display();
return 0;
}
