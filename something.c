#include<stdio.h>

class Dog{
	int id;
	char* name;
	public: 
	        Dog() { printf("bla bla"); }
		Dog(int i,char* n){
			i = id;
			name = n;
		}
		bark(){
			printf("woof, woof, baby moma, stop!");
			
		}
}
