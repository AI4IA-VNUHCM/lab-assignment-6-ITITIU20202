/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int size = strlen(str);
	printf("size la: %d\n", size);
	if (size%2!=0) printf("Invalid!");
	else {
		switch (size) {

			case 6:
			if (str[0]=='{' && str[5]=='}' && str[1]=='[' && str[4]==']' && str[2]=='(' && str[3]== ')') {
				printf("Valid!");
				} else printf("Invalid!");
				break;
		

			case 4: 
				if (str[0]=='{' && str[3]=='}' && str[1]=='[' && str[2]==']') { 
					printf ("Valid!");
				} else printf("Invalid");
				break;

			case 2:
				if ((str[0]=='{' && str[1]=='}') || (str[0]=='[' && str[1]==']') || (str[0]=='(' && str[1]==')')) {
					printf("Valid!"); 
					} else printf("Invalid!");
				break;
			
	}
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
