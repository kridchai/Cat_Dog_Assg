#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
       int i;
	NODE *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
             t->show_node();
	      t=t->move_next();    
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }
void LL::free_G(NODE*& A){
   NODE *t = hol,*previous = NULL;
   if(hol==A)
   {
     hol = hol->move_next();
     delete(t);
     size--;
   }
   else{
       while(t!=NULL)
   {
     previous = t;
     t = t->move_next();
     if(t==A&&t->move_next()==NULL)
     {
       delete(t);
       size--;
       previous->setNext(NULL);
     }
     if(t==A&&t->move_next()!=NULL)
     {
       NODE *f = t->move_next();
       delete(t);
       size--;
       previous->setNext(f);
     }

   }
  }
  
 }


void LL::snap_finger(){
 int kill;

  
  for(int i = 0;i<size/2;i++)
  {
    srand(time(NULL));
    kill=rand()%size; //สุ่มฆ่า
  }
 

      

}