#ifndef BINARY_INCLUDED 
#define BINARY_INCLUDED  1

#include <iostream>
#include <string>
#include <cmath>

class binary
{

public: 

   long data; 

   binary( )
   : data{ 0 } 
{}            
      // Constructs as 0. 

   binary( long d )
      : data{ d }
{}

   binary( int d )
      : data{ (long) d}
{}

   const long abs() const
   {
      long int decimal = 0;
      long bin = data;
      int i = 0;

      while( bin != 0 )
      {
         decimal += (  bin %  2 ) * pow(2, i);
         i++;
         bin =  bin /  10;
      }

      return decimal;
   }

   friend bool operator==( const binary&, const binary&);

   friend bool operator<( const  binary&, const binary&);

   friend bool operator>( const binary&, const binary&);
}; 

bool operator==( const binary& left, const binary& right) {
   return left.abs() == right.abs();
}

bool operator<( const  binary& left, const binary& right){
   return left.abs() < right.abs();
}

bool operator>( const binary& left, const binary& right){
   return left.abs() > right.abs();
}


#endif