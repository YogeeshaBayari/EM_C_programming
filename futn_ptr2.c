#include<stdio.h>

void print(char *name){
	printf("Hello %s !! ",name);
}


int main(){
	
	void (*ptr)(char*);

	ptr = print;

	ptr("Yogeesh");
}

// void fun(int a) 
// { 
//     printf("Value of a is %d\n", a); 
// } 
  
// int main() 
// { 
//     // fun_ptr is a pointer to function fun()  
//     void (*fun_ptr)(int) = &fun; 
  
  
//     // Invoking fun() using fun_ptr 
//     (*fun_ptr)(10); 
  
//     return 0; 
// }
