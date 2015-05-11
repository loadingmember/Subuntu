#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void desktopDirView() {
	printf("### DIR NAME ### FILE ###\n");
	printf("### Desktop ### View.txt ###\n");
	printf("### Desktop ### Other.txt ###\n");
}

void docsDirView() {
	printf("### DIR NAME ### FILE ###\n");
	printf("### Documents ### SomeFile.txt ###\n");
}

void downloadDirView() {
	printf("### DIR NAME ### FILE ###\n");
	printf("### Downloads ### File.tar.gz ###\n");
}

void musicDirView() {
	printf("### DIR NAME ### FILE ###\n");
	printf("### Music ### MySong.mp3 ###\n");
}

void picsDirView() {
	printf("### DIR NAME ### FILE ###\n");
	printf("### Pictures ### Test.png ###\n");
}

void rootDirView() {
	printf("Error: Cannot View. Folder Protected\n");
}

void selectDir() {

	char desktopDir[30] = "Desktop";
	char docsDir[30] = "Documents";
	char downloadsDir[30] = "Downloads";
	char musicDir[30] = "Music";
	char picsDir[30] = "Pictures";
	char rootDir[30] = "/root/";

	int selectChoice;

	printf("### Select Directory ###\n");
	printf("### 1. %s ###\n", desktopDir);
	printf("### 2. %s ###\n", docsDir);
	printf("### 3. %s ###\n", downloadsDir);
	printf("### 4. %s ###\n", musicDir);
	printf("### 5. %s ###\n", picsDir);
	printf("### 6. %s ###\n", rootDir);

	printf("Please enter the directory you would like to view: ");
	scanf("%d", &selectChoice);

	if(selectChoice == 1) {
		desktopDirView();
	} else if(selectChoice == 2) {
		docsDirView();
	} else if(selectChoice == 3) {
		downloadDirView();
	} else if(selectChoice == 4) {
		musicDirView();
	} else if(selectChoice == 5) {
		picsDirView();
	} else if(selectChoice == 6) {
		rootDirView();
	}
}

void createDir() {

	char *new_dir = (char *) malloc(sizeof(new_dir));

	printf("Enter the name of your new directory: ");
	scanf("%s", new_dir);

	printf(" 	### Directory List ###	\n");
	printf("		### Desktop ###		\n");
	printf("		### Documents ###	\n");
	printf("		### Downloads ###	\n");
	printf("		### Music ###		\n");
	printf("		### Pictures ###	\n");
	printf("		###	%s ###			\n", new_dir);

}

void listDir() {
	printf(" 	### Directory List ###	\n");
	printf("		### Desktop ###		\n");
	printf("		### Documents ###	\n");
	printf("		### Downloads ###	\n");
	printf("		### Music ###		\n");
	printf("		### Pictures ###	\n");
	printf("		### /root/ ###		\n");
}

int main() {

	int file_choice;

	printf("### Subuntu File Manager ###\n");
	printf("### 1. Select Directory ###\n");
	printf("### 2. Create new Directory ###\n");

	printf("Please enter your choice: ");
	scanf("%d", &file_choice);

	if(file_choice == 1) {
		selectDir();
	} else if(file_choice = 2) {
		createDir();
	}

}