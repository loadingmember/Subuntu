#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void installBootDrive() {

	printf("Boot Drive Detected...\n");
	sleep(2);
	printf("Creating Desktop\n");
	sleep(10);
	printf("Creating The Rest of the Stuff\n");
	sleep(20);
	printf("Installation Finished\n");
}

void installISO() {

	char isoDirectory[15];

	printf("Please type the directory in which the .iso file is located: ");
	scanf("%s", isoDirectory);

	sleep(3);

	printf(".iso File Detected...\n");
	sleep(2);
	printf("Creating Desktop\n");
	sleep(10);
	printf("Creating The Terminal\n");
	sleep(20);
	printf("Creating Spack Package Manager\n");
	sleep(10);
	printf("Creating Drivers\n");
	sleep(5);
	printf("Creating Basic Essesities\n");
	sleep(2);
	printf("Installation Finished\n");
}

void installDisk() {

	printf("Disk Detected...\n");
	sleep(2);
	printf("Creating Desktop\n");
	sleep(10);
	printf("Creating The Terminal\n");
	sleep(20);
	printf("Creating Spack Package Manager\n");
	sleep(10);
	printf("Creating Drivers\n");
	sleep(5);
	printf("Creating Basic Essesities\n");
	sleep(2);
	printf("Installation Finished\n");

}

void uninstall() {

	char uninstallDirectory[15];

	printf("Type bootcamp if It is installed on bootcamp. Type vmware if it is installed on a virtual machine\n");
	printf("Type the location of where Subuntu is installed: ");
	scanf("%s", uninstallDirectory);

	if(strcmp(uninstallDirectory, "bootcamp") == 0 || strcmp(uninstallDirectory, "Bootcamp") == 0) {	
		printf("Detected the Bootcamp File...\n");
		printf("This could take a while...\n");
		printf("Uninstalling...\n");
		sleep(30);
		printf("Uninstallation Finished!\n");
	} else if(strcmp(uninstallDirectory, "vmware") == 0 || strcmp(uninstallDirectory, "VmWare") == 0 || strcmp(uninstallDirectory, "Vmware") == 0) {
		printf("Detected the Vmware File...\n");
		printf("This could take a while...\n");
		printf("Uninstalling...\n");
		sleep(30);
		printf("Uninstallation Finished!\n");
	}

}

int main() {

	char *installationChoice = (char *) malloc(sizeof(installationChoice));

	int choice;

	printf("### Subuntu Install Menu ###\n");
	printf("### 1. Install with Bootable Drive ###\n");
	printf("### 2. Install with .iso File ###\n");
	printf("### 3. Install with Physical Disk ###\n");
	printf("### 4. Uninstall ###\n");


	printf("Please select installation option: ");

	scanf("%d", &choice);

	if(choice == 1) {
		installBootDrive();
	} else if(choice == 2) {
		installISO();
	} else if(choice == 3) {
		installDisk();
	} else if (choice == 4) {
		uninstall();
	} else {
		printf("Invalid Option!!\n");

		printf("Please select installation option: ");
		scanf("%d", &choice);
	}
}
