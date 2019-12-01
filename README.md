# Binary
*Binary class with '>', '&lt;', '==', and abs() function defined*

### Comparators

* Comparators defined are '<' (i.e. less than), '>' (i.e. larger than), '==' (i.e. equal to).

### Functions

* abs() converts the binary number into decimal

## How to use

1. In git bash type `git clone https://github.com/sakenkyzyassem/Binary'
2. In your NAME.cpp file (NAME = name of your editing file) `#include <binary.h>
3. Initialize a binary
```
binary bin;             #default constructor makes bin = 0
OR
binary bin1 = 1111;     #constructor assigns 1111 to your variable bin1
```
4. Compare your binaries or convert you binary number to decimal
```
binary b1 = 0001;
binary b2 = 0010;

if (b1 > b2) { cout<<b1<<"is larger than"<<b2<<"\n"; }
else if (b1 < b2) { cout<<b1<<"is samller than"<<b2<<"\n";
else { cout<<b1<<"and"<<b2<<"are equal\n";    #if(b1 == b2)
```
--------------------------------------------------------------------
```
binary b3 = 0011, b4 = 0100;
cout<<b3.abs()<<"\n";     #output is 3
cout<<b4.abs()<<"\n";     #output is 4
```

#### Upcoming changes:
* Negative number detection (1st bit is 1)
* Negation
* Operations: '+', '-', '*', '/'
