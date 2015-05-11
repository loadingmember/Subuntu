#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>


#include "Login.h"

char login_username[15];
char login_password[15];

char user_one[15] = "Steven Zaluk";
char user_two[15] = "Default User";

void user_stevezaluk() {

	printf("%s", user_one);

	printf("\n");
	printf("\n");

	struct termios term, term_orig;
    tcgetattr(STDIN_FILENO, &term);
    term_orig = term;
    term.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
 
    char buf[1000];
	
	printf("Please enter your password: ");
	scanf("%s", login_password);

	if(strcmp(login_password, "admin") == 0) {
		printf("Login Correct\n!");
		printf("User Steven Zaluk Unlocked!!\n");
	} else {
		printf("Error! Wrong password. Try Again!\n");
		printf("Please enter your password: ");
		scanf("%s", login_password);
	}
}

void user_default() {

	printf("%s", user_two);

	printf("\n");
	printf("\n");

	struct termios term, term_orig;
    tcgetattr(STDIN_FILENO, &term);
    term_orig = term;
    term.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
 
    char buf[1000];

	printf("Please enter your password: ");
	scanf("%s", login_password);

	if(strcmp(login_password, "admin2") == 0) {
		printf("Login Correct!\n");
		printf("User Default Unlocked\n");
	} else {
		printf("Error! Wrong password. Try Again!\n");
		printf("Please enter your password: ");
		scanf("%s", login_password);
	}

}

void not_listed() {

	char *notlisted_username = (char *) malloc(sizeof(notlisted_username));
	char *notlisted_password = (char *) malloc(sizeof(notlisted_password));

	printf("Username: ");
	scanf("%s", notlisted_username);

	if(strcmp(notlisted_username, "Steven Zaluk") == 0 || strcmp(notlisted_username, "szaluk") == 0 || strcmp(notlisted_username, "Default User") == 0 || strcmp(notlisted_username, "default_user") == 0) {
		printf("Password: ");
		scanf("%s", notlisted_password);
		if(strcmp(notlisted_password, "admin")) {
			printf("Access Granted\n");
		} else {
			printf("Error: Wrong Password");
			printf("Password: ");
			scanf("%s", notlisted_password);
		}
	} else {
		printf("User Does Not Exist!\n");
		printf("Username: ");
		scanf("%s", notlisted_username);
	}

}

void login_diffuser() {

	int diff_choice;

	printf("### Subuntu Login Menu ###\n");
	printf("### 1. Steven Zaluk ###\n");
	printf("### 2. Default User ###\n");
	printf("### 3. Not Listed? ###\n");

	printf("Please choose the profile you want: ");
	scanf("%d", &diff_choice);

	if(diff_choice == 1) {
		user_stevezaluk();
	} else if(diff_choice == 2) {
		user_default();
	} else if(diff_choice == 3) {
		not_listed();
	}

}

void add_user() {

	char *new_user_username = (char *) malloc(sizeof(new_user_username));
	char *new_user_password = (char *) malloc(sizeof(new_user_password));
	char *repeat_password = (char *) malloc(sizeof(repeat_password));

	printf("Username: \n");
	scanf("%s", new_user_username);

	struct termios term, term_orig;
	tcgetattr(STDIN_FILENO, &term);
	term_orig = term;
	term.c_lflag &= ~ECHO;
	tcsetattr(STDIN_FILENO, TCSANOW, &term);
 
    char buf[1000];

	printf("Password: \n");
	scanf("%s", new_user_password);

	printf("Repeat Password: \n");
	scanf("%s", repeat_password);

	printf("User added!!\n");
}

void delete_user() {

	char *delete_password = (char *) malloc(sizeof(delete_password));
	int delete_choice;

	printf("### Subuntu Delete User Menu ###\n");
	printf("### 1. Steven Zaluk ###\n");
	printf("### 2. Default User ###\n");
	printf("### 3. Cancel ###\n");

	printf("Please chose the profile you want to delete: ");
	scanf("%d", &delete_choice);

	if(delete_choice == 1) {
		printf("Password [szaluk]: ");
		struct termios term, term_orig;
		tcgetattr(STDIN_FILENO, &term);
		term_orig = term;
		term.c_lflag &= ~ECHO;
		tcsetattr(STDIN_FILENO, TCSANOW, &term);
		scanf("%s", delete_password);
		if(strcmp(delete_password, "admin") == 0) {
			printf("User deleted\n");
		} else {
			printf("Wrong Password!\n");
		}
	} else if(delete_choice == 2) {
		printf("Password [default_user]: ");
		struct termios term, term_orig;
		tcgetattr(STDIN_FILENO, &term);
		term_orig = term;
		term.c_lflag &= ~ECHO;
		tcsetattr(STDIN_FILENO, TCSANOW, &term);
		scanf("%s", delete_password);
		if(strcmp(delete_password, "admin") == 0) {
			printf("User deleted\n");
		} else {
			printf("Wrong Password!\n");
		}
	} else if(delete_choice == 3) {
		main();
	} 
}

void log_out() {

	printf("### Logout: Confirm? ###\n");
	printf("### 1. Yes ###\n");
	printf("### 2. No ###\n");

	int logoutChoice;

	printf("Confirm? ");
	scanf("%d", &logoutChoice);

	if(logoutChoice == 1) {
		login_diffuser();
	} else if(logoutChoice == 2) {
		main();
	} else {
		printf("Error: Invalid Option!!");
	}
}

int main() {

	char *installationChoice = (char *) malloc(sizeof(installationChoice));

	int choice;
	
	printf("### Subuntu Login Menu ###\n");
	printf("### 1. Unlock System ###\n");
	printf("### 2. Add New User ###\n");
	printf("### 3. Delete User ###\n");
	printf("### 4. Cancel ###\n");
	
	printf("Please enter your choice: ");
	scanf("%d", &choice);

	if(choice == 1) {
		login_diffuser();
	} else if(choice == 2) {
		add_user();
	} else if(choice == 3) {
		delete_user();
	} else if(choice == 4) {
		exit(0);
	} else {
		printf("Invalid Option!\n");
		printf("Please enter your choice: ");
		scanf("%d", &choice);
	}
}