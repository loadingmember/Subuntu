#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

#include "Terminal.h"

char username[15];
char password[15];
char command[15];

char new_password[15];

char desktop_directory[15] = "~/Desktop/";
char docs_directory[15] = "~/Documents/";
char code_directory[15] = "~/code/";
char download_directory[15] = "~/Downloads/";

void spack_update() {

	printf("latest version\n");
	printf("%s $ ", username );
	scanf("%s", command);

}

void install_wget() {

	printf("Packages Found :::: WGET\n");

	printf("Please enter your password: ");
	scanf("%s", password);

	if(strcmp(password, "admin") == 0) {

		printf("Getting Packages...\n");
		sleep(2);
		printf("Unpacking wget...\n");
		sleep(4);
		printf("wget installed\n");
		printf("%s $ ", username);
		scanf("%s", command);
	} else {
		printf("Wrong Password. Please Try Again.\n");

		printf("Please enter your password: ");
		scanf("%s", password);
	}

}

void install_kdevelop() {

	printf("Packages Found :::: KDEVELOP\n");

	printf("Please enter your password: ");
	scanf("%s", password);

	if(strcmp(password, "admin") == 0) {

		printf("Getting Packages...\n");
		sleep(2);
		printf("Unpacking Packages...\n");
		sleep(4);
		printf("Installing Templates...\n");
		sleep(2);
		printf("Installing Core Updates...\n");
		sleep(5);
		printf("Installing Color Schemes...\n");
		sleep(2);
		printf("KDevelop Now Installed");
		printf("%s $ ", username);
		scanf("%s", command);
	} else {
		printf("Wrong Password. Try Again.");
		printf("Please enter your password: ");
		scanf("%s", password);
	}

}

void install_jdk() {

	printf("Packages Found :::: JDK\n");

	printf("Please enter your password: ");
	scanf("%s", password);

	if(strcmp(password, "admin") == 0) {

		printf("Getting Packages...\n");
		sleep(2);
		printf("Unpacking Packages...\n");
		sleep(4);
		printf("Installing Java 1.8...\n");
		printf("Installing JVM...\n");
		sleep(4);
		printf("Installing Intellij IDEA...\n");
		printf("Finishing Up...\n");
		sleep(5);
		printf("Java Now Installed!");
		printf("%s $ ", username);
		scanf("%s", command);
	} else {
		printf("Wrong Password. Try Again.");
		printf("Please enter your password: ");
		scanf("%s", password);
	}

}

void install_sublime() {

	int sublime_choice;

	printf("### Sublime Text Installer Menu ###\n");
	printf("### 1. Sublime Text 2 ###\n");
	printf("### 2. Sublime Text 3 Beta ###\n");
	printf("### 3. Cancel ###\n");

	printf("Please type the version you would like to install: ");
	scanf("%d", &sublime_choice);

	if(sublime_choice == 1) {
		printf("Packages Found :::: SBLM TXT 2\n");

		printf("Getting Pacakges...\n");
		sleep(2);
		printf("Unpacking Packages...\n");
		sleep(3);
		printf("Creating Package Control from :::: www.packagecontrol.io\n");
		sleep(4);
		printf("Creating Color Scheme's...\n");
		sleep(2);
		printf("Creating Syntax and Builds...\n");
		sleep(2);
		printf("Sublime Text 2 Now Installed\n");
	} else if(sublime_choice == 2) {
		printf("Packages Found :::: SBLM TXT 3 BETA\n");

		printf("Getting Pacakges...\n");
		sleep(2);
		printf("Unpacking Packages...\n");
		sleep(3);
		printf("Creating Package Control from :::: www.packagecontrol.io\n");
		sleep(4);
		printf("Creating Color Scheme's...\n");
		sleep(2);
		printf("Creating Syntax and Builds...\n");
		sleep(2);
		printf("Sublime Text 3 Beta Now Installed\n");
	} else if(sublime_choice == 3) {
		exit(0);
	}

}

void cd_desktop() {

	printf("Changed Directory to Desktop\n");
	printf("%s %s $ ", username, desktop_directory);
	scanf("%s", command);

}

void cd_documents() {

	printf("Changed Directory to Documents\n");
	printf("%s %s $ ", username, docs_directory);
	scanf("%s", command); 

}

void ll() {

	printf("drwxr-xr-x  7 szaluk  staff   238 May  7 20:17 .\n");
	printf("drwxr-xr-x  3 szaluk  staff   102 May  6 18:27 ..\n");
	printf("rrw-r--rw-r--r--@ 1 szaluk  staff  6148 May  6 20:45 .DS_Store\n");
	printf("rrw-r--rw-r--r--  1 szaluk  staff  1103 May  6 19:41 Installer.c\n");
    printf("rrw-r--rw-r--r--  1 szaluk  staff  2402 May  7 20:17 Terminal.c\n");
	printf("rrw-r--rw-r--r--  1 szaluk  staff    84 May  6 19:41 Terminal.h\n");
	printf("%s ~ $ ", username);
	scanf("%s", command);

}

void ls() {

	printf(".DS_Store Installer.c Terminal.c Terminal.h\n");
	printf("%s $ ", username);
	scanf("%s", command);

}

void install_vim() {

	printf("Packages Found :::: VIM");

	printf("Please enter your password: ");
	scanf("%s", password);

	if(strcmp(password, "admin") == 0) {

		printf("Getting Packages...\n");
		sleep(2);
		printf("Unpacking Packages...\n");
		sleep(4);
		printf("Getting Bug Fixes from VI...\n");
		sleep(2);
		printf("Getting Color Scheme's...\n");
		sleep(3);
		printf("Vi Improved is now installed\n");
		printf("%s $ ", username);
		scanf("%s", command);
	} else {
		printf("Wrong Password. Try Again.");
		printf("Please enter your password: ");
		scanf("%s", password);
	}
}

void install_jython() {

	printf("Packages Found :::: JYTHON");

	printf("Please enter your password: ");
	scanf("%s", password);

	if(strcmp(password, "admin") == 0) {

		printf("Getting Packages...\n");
		sleep(2);
		printf("Unpacking Packages...\n");
		sleep(4);
		printf("Searching for JVM...JVM Found.\n");
		sleep(2);
		printf("Creating Dependencies...\n");
		sleep(3);
		printf("Download Files...\n");
		sleep(2);
		printf("Finishing Up...\n");
		sleep(2);
		printf("Jython is now Installed\n");
		printf("%s $ ", username);
		scanf("%s", command);

	} else {
		printf("Wrong Password. Try Again.");
		printf("Please enter your password: ");
		scanf("%s", password);
	}

}

void install_cython() {

	printf("Packages Found :::: CYTHON");

	printf("Please enter your password: ");
	scanf("%s", password);

	if(strcmp(password, "admin") == 0) {
		printf("Getting Packages...\n");
		sleep(2);
		printf("Unpacking Packages...\n");
		sleep(4);
		printf("Searching for GCC Compiler...Compiler Found\n");
		sleep(2);
		printf("Creating Dependencies...\n");
		sleep(2);
		printf("Creating Header Files...\n");
		sleep(2);
		printf("Cython is now Installed\n");
		printf("%s $ ", username);
		scanf("%s", command);
	} else {
		printf("Wrong Password. Try Again.");
		printf("Please enter your password: ");
		scanf("%s", password);
	}
}

void install_zsh() {

	printf("Packages Found :::: ZSH & OH-MY-ZSH");

	printf("Please enter your password: ");
	scanf("%s", password);

	if(strcmp(password, "admin") == 0) {
		printf("Getting Packages...\n");
		sleep(2);
		printf("Unpacking Packages...\n");
		sleep(4);
		printf("Searching for Terminal...");
		sleep(3);
		printf("Terminal Found. Getting Color Scheme's...\n");
		sleep(2);
		printf("Getting Background Color's...\n");
		sleep(2);
		printf("ZSH is now Installed\n");
		printf("Do chsh -s `which zsh` to change shells");
		printf("%s $ ", username);
		scanf("%s", command);
	} else {
		printf("Wrong Password. Try Again.");
		printf("Please enter your password: ");
		scanf("%s", password);
	}
}

void cd_code() {

	printf("Changed Directory to Code\n");
	printf("%s %s $ ", username, code_directory);
	scanf("%s", command); 

}

void wget_google() {

	printf("Wget completed...\n");
	printf("%s $ ", username);
	scanf("%s", command);

}

void cd_downloads() {

	printf("Changed Directory to Downloads\n");
	printf("%s %s $ ", username, download_directory);
	scanf("%s", command); 

}

void update_subuntu() {
	
	printf("Update Found :::: V1.1\n");

	printf("Please enter your password: ");
	scanf("%s", password);


	printf("Getting Packages...\n");
	sleep(2);
	printf("Unpacking Packages...\n");
	sleep(4);
	printf("Creating Core Updates...\n");
	sleep(6);
	printf("Applying Core Updates...\n");
	sleep(8);
	printf("Updating Desktop Security...\n");
	sleep(4);
	printf("Subuntu Update Finished\n");

	printf("%s $ ", username);
	scanf("%s", command);
}

void install_emacs() {
	
	printf("Packages Found :::: EMACS\n");

	printf("Please enter your password: ");
	scanf("%s", password);

	printf("Getting Packages\n");
	sleep(2);
	printf("Unpacking Packages...\n");
	sleep(4);
	printf("Applying Color Scheme's...\n");
	sleep(3);
	printf("Emacs is now installed\n");

	printf("%s $ ", username);
	scanf("%s", command);
}

void install_chrome() {

	printf("Packages Found ::::  GOOGLE-CHROME\n");

	printf("Please enter your password: ");
	scanf("%s", password);

	printf("Getting Packages...\n");
	sleep(2);
	printf("Unpacking Packages...\n");
	sleep(4);
	printf("Getting Core Updates...\n");
	sleep(3);
	printf("Applying Core Updates...\n");
	sleep(5);
	printf("Getting Extensions, Bookmarks, and Store...\n");
	sleep(3);
	printf("Google Chrome now installed\n");

	printf("%s $ ", username);
	scanf("%s", command);
}

void install_android_studio() {
	
	printf("Packages Found :::: ANDROID-STUDIO\n");

	printf("Please enter your password: \n");
	scanf("%s", password);

	printf("Getting Packages...\n");
	sleep(2);
	printf("Unpacking Packages...\n");
	sleep(4);
	printf("Getting Android Emulator & Applying...\n");
	sleep(4);
	printf("Getting Color Schemes...\n");
	sleep(3);
	printf("Applying Core Updates...\n");
	sleep(6);
	printf("Android Studio is Now Installed\n");

	printf("%s $", username);
	scanf("%s", command);	
}

void install_vmtools() {
	
	printf("Packages Found :::: VMTOOLS\n");

	printf("Getting Packages\n");
	sleep(2);
	printf("Unpacking Packages\n");
	sleep(4);
	printf("Getting & Applying Resulution Effects\n");
	sleep(5);
	printf("VMTOOLS Now Installed. NOTE: RESTART VMWARE TO LET THE EFFECTS APPLY\n");

}

void install_gitcore() {

	char *github_username = (char *) malloc(sizeof(github_username));
	char *github_password = (char *) malloc(sizeof(github_password));

	printf("Packages Found :::: GITCORE\n");

	printf("Getting Packages...\n");
	sleep(2);
	printf("Unpacking Packages...\n");
	sleep(4);
	printf("Getting & Applying Console Commands...\n");
	sleep(3);
	printf("Enter your GitHub Username: ");
	scanf("%s", github_username);
	printf("Enter your GitHub Password: ");
	struct termios term, term_orig;
	tcgetattr(STDIN_FILENO, &term);
	term_orig = term;
	term.c_lflag &= ~ECHO;
	tcsetattr(STDIN_FILENO, TCSANOW, &term);
	scanf("%s", github_password);

	printf("Git Core now Installed and Profile now setup with a username of %s", github_username);

}

int main() {

	printf("Please enter your username: ");
	scanf("%s", username);

	printf("Please enter your password: ");
	scanf("%s", password);

	printf("Welcome to the Subuntu Terminal!\n");
	printf("%s $ ", username);
	scanf(" %[^\n]s", command);

	if(strcmp(command, "spack update") == 0) {
		spack_update();
	} else if(strcmp(command, "spack install wget") == 0) {
		install_wget();
	} else if(strcmp(command, "wget www.google.com") == 0) {
		wget_google();
	} else if(strcmp(command, "spack install kdevelop") == 0) {
		install_kdevelop();
	} else if(strcmp(command, "spack install java && spack install jdk") == 0) {
		install_jdk();
	} else if(strcmp(command, "cd ~/Desktop") == 0 || strcmp(command, "cd Desktop/") == 0) {
		cd_desktop();
	} else if(strcmp(command, "cd ~/Documents") == 0 || strcmp(command, "cd Documents/") == 0) {
		cd_documents();
	} else if(strcmp(command, "ll") == 0) {
		ll();
	} else if(strcmp(command, "ls") == 0) {
		ls();
	} else if(strcmp(command, "spack install vim") == 0) {
		install_vim();
	} else if(strcmp(command, "spack install jython") == 0) {
		install_jython();
	} else if(strcmp(command, "jython -v") == 0) {
		printf("Jython 1.8 to the Latest Version\n");
		printf("%s $ ", username);
		scanf("%s", command);
	} else if(strcmp(command, "spack install cython") == 0) {
		install_cython();
	} else if(strcmp(command, "cd ~/code") == 0 || strcmp(command, "cd code/") == 0) {
		cd_code();
	} else if(strcmp(command, "pwrd -change") == 0) {
		printf("Please Enter new Password: ");
		scanf("%s", new_password);
		printf("Password Changed\n");
		printf("%s $ ", username);
		scanf("%s", command);
	} else if(strcmp(command, "spack install zsh") == 0) {
		install_zsh();
	} else if(strcmp(command, "chsh -s `which zsh`") == 0) {
		printf("Shell Changed to zsh\n");
		printf("%s $ ", username);
		scanf("%s", command);
	} else if(strcmp(command, "cd ~/Downloads") == 0 || strcmp(command, "cd Downloads/") == 0) {
		cd_downloads();
	} else if(strcmp(command, "spack update subuntu") == 0) {
		update_subuntu();
	} else if(strcmp(command, "spack install sublime-text") == 0) {
		install_sublime();
	} else if(strcmp(command, "spack install emacs") == 0) {
		install_emacs();
	} else if(strcmp(command, "spack install google-chrome") == 0) {
		install_chrome();
	} else if(strcmp(command, "spack install android-studio") == 0) {
		install_android_studio();
	} else if(strcmp(command, "spack install vmtools") == 0) {
		install_vmtools();
	} else if(strcmp(command, "spack install gitcore") == 0) {
		install_gitcore();
	} 
}
