#include <iostream>
#include <stdio.h> //printf, scanf, etc...
#include <stdlib.h> //srand, rand
#include <time.h> //function time
//#include <ctime.h> //get lock

void printList(int *numbers);

const int klist_size = 10;

//palabra servada de c, variable no cambia

int main()
{ 
	int numbers[klist_size];
	srand(time(NULL) );
	const int limit = 30;
	for(int idx=0; idx < klist_size ;idx++)
	{
		numbers[idx] = rand() %limit +1;
	}
	printList(numbers);
	return 0;
}

void printList(int *numbers)
{
	for(int idx=0; idx < klist_size ;idx++)
	{
	std::cout<<numbers[idx]<<" ";
	}
	std::cout<<std::endl;
}
