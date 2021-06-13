#include<iostream>
#include<conio.h>

#define SIZE 10
using namespace::std;

template<class T>
class Queue{
	T *data;
	int maxcapacity, front, rear, count, rear1;
	public:
		Queue(int size = SIZE);
		void omit();
		void add(T x[]);
		T summit();
		int size();
		bool is_full();
		bool is_empty();
};

template <class T>
Queue<T>::Queue(int size){
	data = new T[size];
	maxcapacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

template <class T>
void Queue<T>::omit(){
	if(is_empty()){
		cout<<"Queue is empty!";
		exit(1);
	}
	cout<<"Removing "<<data[front]<<endl;
	front = (front+1)%maxcapacity;
	count--;
}

template <class T>
void Queue<T>::add(T item[]){
	for(int i=0;i<maxcapacity;i++){
	cin>>*item;
	cout<<"Inputing "<<*item<<endl;
	rear = (rear+1)%maxcapacity;
	data[rear]=*item;
	count++;}
	cout<<"\n"<<"--------------------"<<"\n"<<"The queue's 'rear' element is "<<*item<<endl;
}

template <class T>
T Queue<T>::summit(){
	if(is_empty()){
		cout<<"Queue is empty!";
		exit(1);
	}
	return data[front];
}

template <class T>
int Queue<T>::size(){
	return count;
}

template <class T>
bool Queue<T>::is_empty(){
	return (size() == 0);
}

template <class T>
bool Queue<T>::is_full(){
	return (size() == maxcapacity);
}

int main(){
	int arr[10];
	Queue<int> q(10);
	cout<<"Enter 10 data of integer:";
	q.add(arr);
	cout<<"\n"<<"The queue's 'front' element is "<<q.summit()<<"\n"<<endl;
	cout<<"The queue's size is "<<q.size()<<"\n"<<endl;
	cout<<"The program automaticaly deletes elements:"<<"\n"<<endl;
	q.omit();     //This seccion deletes inputed data
	cout<<"\n"; 
	q.omit();
	cout<<"\n";
	q.omit();
	cout<<"\n";
	q.omit();
	cout<<"\n";
	q.omit();
	cout<<"\n";     
	q.omit();
	cout<<"\n";
	q.omit();
	cout<<"\n";           
	q.omit();
	cout<<"\n";       
	q.omit();       
	cout<<"\n";
	q.omit();
	cout<<"\n";
	cout<<"--------------------"<<"\n";;
//------------------------------------------------------This part works with char
char arr1[10];
	Queue<char> q1(10);
	cout<<"Enter 10 data of char:";
	q1.add(arr1);
	cout<<"\n"<<"The queue's 'front' element is "<<q1.summit()<<"\n"<<endl;
	cout<<"The queue's size is "<<q1.size()<<"\n"<<endl;
	cout<<"The program automaticaly deletes elements:"<<"\n"<<endl;
	q1.omit();     //This seccion deletes inputed data
	cout<<"\n"; 
	q1.omit();
	cout<<"\n";
	q1.omit();
	cout<<"\n";
	q1.omit();
	cout<<"\n";
	q1.omit();
	cout<<"\n";     
	q1.omit();
	cout<<"\n";
	q1.omit();
	cout<<"\n";           
	q1.omit();
	cout<<"\n";       
	q1.omit();       
	cout<<"\n";
	q1.omit();
	cout<<"\n";
	cout<<"--------------------"<<"\n";;
//-----------------------------------------------------------This part works with float
float arr2[10];
	Queue<float> q2(10);
	cout<<"Enter 10 data of float:";
	q2.add(arr2);
	cout<<"\n"<<"The queue's 'front' element is "<<q2.summit()<<"\n"<<endl;
	cout<<"The queue's size is "<<q2.size()<<"\n"<<endl;
	cout<<"The program automaticaly deletes elements:"<<"\n"<<endl;
	q2.omit();     //This seccion deletes inputed data
	cout<<"\n"; 
	q2.omit();
	cout<<"\n";
	q2.omit();
	cout<<"\n";
	q2.omit();
	cout<<"\n";
	q2.omit();
	cout<<"\n";     
	q2.omit();
	cout<<"\n";
	q2.omit();
	cout<<"\n";           
	q2.omit();
	cout<<"\n";       
	q2.omit();       
	cout<<"\n";
	q2.omit();
	cout<<"\n";
	cout<<"--------------------"<<"\n";;
//------------------------------------------------------------This part works with double
double arr3[10];
	Queue<double> q3(10);
	cout<<"Enter 10 data of double:";
	q3.add(arr3);
	cout<<"\n"<<"The queue's 'front' element is "<<q3.summit()<<"\n"<<endl;
	cout<<"The queue's size is "<<q3.size()<<"\n"<<endl;
	cout<<"The program automaticaly deletes elements:"<<"\n"<<endl;
	q3.omit();     //This seccion deletes inputed data
	cout<<"\n"; 
	q3.omit();
	cout<<"\n";
	q3.omit();
	cout<<"\n";
	q3.omit();
	cout<<"\n";
	q3.omit();
	cout<<"\n";     
	q3.omit();
	cout<<"\n";
	q3.omit();
	cout<<"\n";           
	q3.omit();
	cout<<"\n";       
	q3.omit();       
	cout<<"\n";
	q3.omit();
	cout<<"\n";
	getch();
	return 0;
}
