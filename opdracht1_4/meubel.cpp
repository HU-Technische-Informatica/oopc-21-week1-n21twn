#include "meubel.hpp"



void table::print(){
    cout<<"print table variable"<< endl;
    print_n_legs();
    print_width();
    print_length();
}
void table::print_n_legs(){
    cout<<n_legs<<endl;
}
void table::print_width(){
     cout<<width<<endl;
}
void table::print_length(){
     cout<<length<<endl;
}

void stool::print(){
     cout<<"print stool variable"<< endl;
    print_n_legs();
    print_n_seats();
}
void stool::print_n_legs(){
    cout<<n_legs<<endl;
}
void stool::print_n_seats(){
     cout<<n_seats<<endl;
}

void furniture::print(){
    table1.print();
    stool1.print();
    stool2.print();
    stool3.print();
    stool4.print();
}

void table::makeMoreHipster(){
   n_legs = n_legs +4;
}
void stool::makeMoreHipster(){
   n_legs = n_legs -1;
}

void furniture::makeMoreHipster(){
    table1.makeMoreHipster();
    stool1.makeMoreHipster();
    stool2.makeMoreHipster();
    stool3.makeMoreHipster();
    stool4.makeMoreHipster();
}