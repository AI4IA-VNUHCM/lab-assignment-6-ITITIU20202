/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	
	int size =strlen(str);

	for (int i =0;i<size;i++) {

        if (str[i]==' ') { 
            if (str[i+1]==' ' || i==0 || i==size-1) {
                for (int j=i;j<size;j++)
                str[j]=str[j+1];
				i--;
				size--;
			}
		}
	}
	printf("%s",str);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}