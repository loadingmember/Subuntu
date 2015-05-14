#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nboot() {

	print("Booting Subuntu Normaly...\n");
	sleep(2);
	printf("Starting Up\n");
	sleep(2);
	printf("Starting 3...\n")
	sleep(2);
	printf("Starting 2...\n");
	sleep(2);
	printf("Starting 1...\n");
	printf("Subuntu Now Started\n");
}

int main() {

	int boot_choice;

	printf("### Boot Options Menu ###\n");
	printf("### 1. Boot Normaly ###\n");
	printf("### 2. Cancel Boot ###\n");

	printf("Enter your boot choice: ");
	scanf("%d", &boot_choice);

	if(boot_choice == 1) {
		nboot();
	} else if(boot_choice == 2) {
		exit(0);
	}

}