#ifndef MEUBEL_HPP
#define MEUBEL_HPP
#include<iostream>
using namespace std;
class stool
{
    private:
         int n_legs;
         int n_seats;
         
         void print_n_legs();
         void print_n_seats();
    public:
         stool(
             const int & n_legs,
             const int & n_seats
         ):
             n_legs(n_legs),
             n_seats(n_seats)
         {}
         void print();
        void makeMoreHipster();
};

class table
{
    private:
        int n_legs;
        int width;
        int length;
        
        void print_n_legs();
        void print_width();
        void print_length();
    public:
         table(
            const int & n_legs,
            const int &  width,
            const int &  length
         ):
         n_legs(n_legs),
         width(width),
         length(length)
         {}
         void print();
         void makeMoreHipster();
};
class furniture
{
    private:
        table   table1;
        stool   stool1;
        stool   stool2;  
        stool   stool3; 
        stool   stool4;
public:
    furniture():
            table1(6,6,6),
            stool1(2,2),
            stool2(3,3),
            stool3(3,5),
            stool4(5,5)
        {}
       void print();
       void makeMoreHipster();
       
};



#endif // MEUBEL_HPP
