#include <iostream>
using namespace std;
struct student
{
    int id;
    student *next;
};
student *create()
{
    student *head,*temp;
    int num,n=0;
    head=new student;
    temp=head;
    cin>>num;
    while(num!=-1)
    {
	n++;
	temp->id=num;
	temp->next=new student;
	temp=temp->next;
	cin>>num;
    }
    if(n==0) head=NULL;
    else temp->next=NULL;
    return head;
}
student *dele(student *head,int n)
{
    student *temp,*follow;
    temp=head;
    if(head==NULL)
    {
	return(head);
    }
    if(head->id==n)
    {
	head=head->next;
	delete temp;
	return(head);
    }
    while(temp!=NULL&&temp->id!=n)
    {
	follow=temp;
	temp=temp->next;
    }
    if(temp==NULL)
	cout<<"Not found."<<endl;
    else
    {
	follow->next=temp->next;
	delete temp;
    }
    return(head);
}
student *insert(student *head,int n)
{
    student *temp,*unit,*follow;
    temp=head;
    unit=new student;
    unit->id=n;
    unit->next=NULL;
    if(head==NULL)
    {
	head=unit;
	return(head);
    }
    while((temp->next!=NULL)&&(temp->id<n))
    {
	follow=temp;
	temp=temp->next;
    }
    if(temp==head)
    {
	unit->next=head;
	head=unit;
    }
    else
    {
	if(temp->next==NULL)
	    temp->next=unit;
	else
	{
	    follow->next=unit;
	    unit->next=temp;
	}
    }
    return(head);
}
int main()
{
    student *pointer=create();
    while(pointer->next!=NULL)
    {
	cout<<pointer->id<<endl;
	pointer=pointer->next;
    }
    return 0;
}
