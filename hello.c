#include "stdio.h"
void iteOrder();
int main(void) {
	iteOrder();
	return 0;
}

void iteOrder() {
	int i = 10;
	while(i--) {
		if(i==0) continue;
		switch(i) {
			case 1: {
				printf("this is the %dst time\n",i);
			}
			break;
			case 2: {
			    printf("this is the %dnd time\n",i);
			}
			break;
			case 3: {
			    printf("this is the %drd time\n",i);
			}
			break;
			default: {
                printf("this is the %dth time\n",i);
			}
			break;
		}
	}
}