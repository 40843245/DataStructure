#include <iostream>
using namespace std;

class NODE
{
public:
	NODE *prev;
	NODE *next;
	char value;
public:
	NODE(char value)
	{
		this->value=value;
	}
};
class SET:
{
private:
	NODE *head;
	NODE *tail;
	int length;
public:
	SET(){this->length=0;this->head=NULL;this->tail=NULL;}
	void CREATE_SET(char val)
	{
		NODE node(val);
		if(this->head==NULL)
		{
			this->head=node;
		}
		if(this->tail==NULL)
		{
			this->tail=node;
		}
	}
	void DISPLAY()
	{
		cout<<"Display;"<<endl;
		SET x=this;
		while()
		{
			
		}
	}
};
class DISJOINT_SET:public SET
{
private:	
	int numOfSet;
	SET *first;
	SET *last;
public:
	DISJOINT_SET(){this->numOfSet=0;this->first=NULL;this->last=NULL;}
	//void MAKE_SET(char val)
	void MAKE_SET(char val)
	{
		SET 
	}
};
int main()
{
	DISJOINT_SET DS;
	cout<<"hello!"<<endl;
	return 0;
}
