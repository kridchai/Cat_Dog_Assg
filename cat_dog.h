//
//  cat_dog.h
//  LLC1
//
//  Created by 6272 on 22/3/2562 BE.
//  Copyright © 2562 6272. All rights reserved.
//
#ifndef cat_dog_h
#define cat_dog_h

class cat:public NODE{
    int size;
public:
  
    cat(int x,int y):NODE(x)
    {
      size = y;
      cout<<"constructor cat "<<size<<endl;
    }
    ~cat(){
       cout<<"destructor cat "<<y<<endl;
    }
    void show_node(){
        cout<<"Meaw  ";
        NODE::show_node();
    }
};


class dog:public NODE{
    float height;
public:
    dog(int x,float y):NODE(x)
    {
        height = y;
        cout<<"constructor dog "<<height<<endl;
    }
    ~dog(){
       cout<<"destructor dog "<<y<<endl;
    }
    void show_node(){
        cout<<"Hong Hong  ";
        NODE::show_node();
    }
};
#endif /* cat_dog_h */
