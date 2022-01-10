#include "Student.h"
#include "Node.h"

#include <iostream>


int main(){
	Student* kevin = new Student((char*)"Kevin", (char*)"Yu", 123456, 0.1);

	Student* nihal = new Student((char*)"Nihal", (char*)"P", 13579, 1000);

	Node head = Node(kevin);
	
	Node next = Node(nihal);

	head.setNext(&next);



	std::cout << head.getStudent()->GPA << "\n";
	std::cout << head.getNext()->getStudent()->GPA << "\n";

}
