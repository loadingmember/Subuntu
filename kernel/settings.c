#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void choice_display() {

	int display_choice;

	printf("### Settings :::: Display\n");
	printf("### 1. Display 1\n");
	printf("### 2. Brightness\n");
	printf("### 3. Back\n");

	printf("Enter your choice: ");
	scanf("%d", &display_choice);

	if(display_choice == 1) {
		printf("Name: Display 1");
		printf("Graphics: ?\n");
		printf("Monitor Type: Laptop\n");
		printf("Nothing more to show\n");
	} else if(display_choice == 2) {
		printf("-----o-----\n");
		printf("0    5    10\n");
	} else if(display_choice == 3) {
		main();
	}
}

void choice_sound() {

	printf("### Sound ###\n");
	printf("### Volume ----0--------\n");
	printf("### Sound Output: Speakers\n");

}

void chocie_mouse() {
	printf("Nothing Here yet!");
}

void choice_bluetooth() {
	
	printf("### Settings :::: Bluetooth\n");
	printf("### 1. View Connected Device ###\n"); 

	int bluetooth_choice;

	printf("Enter your choice: ");
	scanf("%d", &bluetooth_choice);

	if(bluetooth_choice == 1) {
		printf("### Settings :::: Bluetooth :::: Connected Devices ###\n");
		printf("### Nothing Connected ###\n");
		int main();
	} else {
		printf("Invalid Option!\n");
		scanf("%d", &bluetooth_choice);
	}
	
}

int main() {

	printf("### Settings ###\n");
	printf("### 1. Display ###\n");
	printf("### 2. Sound ###\n");
	printf("### 3. Mouse and Trackpad ###\n");
	printf("### 4. Bluetooth ###\n");

	int settings_choice;

	printf("Enter your choice: ");
	scanf("%d", &settings_choice);

	if(settings_choice == 1) {
		choice_display();
	} else if(settings_choice == 2) {
		choice_sound();
	}

}
