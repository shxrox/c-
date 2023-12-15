#include <iostream>

using namespace std;
//clear Screen 
int clearScreen() {
    cout << "\033[2J\033[1;1H"; 
    return 0;
}
//display a heading
 int displayHeading() {
   cout<<"  ----------------------------"<<"\n";
     cout<<"  |   MASTER MIND INSTITUTE   |"<<"\n";
    cout<<"  _-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<"\n";
     cout<<"\n";
     
     return 0;

     }
//Functions

//Available Training Programs
int viewTrainingPrograms(){
    clearScreen();
    displayHeading();
    cout<<"\n";
    cout<< "  Available Training Programs  " <<"\n";
    cout<<"\n";
    cout<< " Training program 1 \n  * Web Development" <<"\n";
    cout<<"\n";
    cout<< " Training program 2 \n  * Java Programming" <<"\n";
    cout<<"\n";
    
    // Option to go back to the main menu
    cout << " Press any key to go back to the main menu: ";
    char choice;
    cin >> choice;
    return 0;
}

//Manage Course Details
int manageCourseDetails() {
    clearScreen();
    displayHeading();
    cout << " Manage Course Details" <<"\n";
    cout<<"\n";
    cout << " Press 'A' to add a new course" <<"\n";
    cout<<"\n";
    cout << " Press 'B' to update an existing course" <<"\n";
    cout<<"\n";
    char choice;
    cin >> choice;
    if (choice == 'A' || choice == 'a') {
        clearScreen();
        displayHeading();
        cout << " Add new course " <<"\n";
        cout<< "\n";
        cout << "  # Enter course name: ";
        string courseName;
        cin>>courseName;
        cout<< "\n";
    }
    else if (choice == 'B' || choice == 'b') {
        clearScreen();
        displayHeading();
        cout << " Update an existing course" <<"\n";
        cout<<"\n";
        cout << "  # Update an existing course : ";
        string ExistingCourse;
        cin>>ExistingCourse;
        cout<< "\n";
    }

    // Option to go back to the main menu
    cout << " Press any key to go back to the main menu: ";
    cin >> choice;
    return 0;
}

//Manage Student Registration Details
int manageStudentRegistrationDetails() {
    clearScreen();
    displayHeading();
    cout << " Manage Student Registration Details" <<"\n";
    cout<<"\n";
    cout << " Press '1' to view the list of registered students" <<"\n";
    cout<<"\n";
    cout << " Press '2' to add new students or edit existing student details" <<"\n";
    cout<<"\n";
    char choice;
    cin >> choice;
    if (choice == '1') {
        clearScreen();
        displayHeading();
        cout << " View the list of registered students" <<"\n";
        cout<<"\n";
        cout<< " # 01 student \n # 02 student \n # 03 student \n";
        cout<<"\n";
    }
    else if (choice == '2') {
        clearScreen();
        displayHeading();
        cout << " Add new students or edit existing student details" <<"\n";
        cout<<"\n";
        cout<< " # Add a new student or Edit : "<<"\n";
        string AddandEdit;
        cin>>AddandEdit;
        cout<<"\n";
    }

    // Option to go back to the main menu
    cout << " Press any key to go back to the main menu: ";
    cin >> choice;
    return 0;
}

//userLogin
int userLogin() {
    clearScreen();
    displayHeading();
    string un, pw;
    for (int x = 0; x <= 4; x++) {
        cout << " Input Username (un:username): ";//username is "username"
        cin >> un;
        cout << " Input Password (pw:password): ";//password is "password"
        cin >> pw;
        if (un == "username" && pw == "password") {
            clearScreen();
            displayHeading();
            cout << " Login successful" <<"\n";
            cout<<"\n";
            break;
        }
        else {
            clearScreen();
            displayHeading();
            cout << " Login failed" <<"\n";
            cout<<"\n";
        }
    }

    // Option to go back to the main menu
    char choice;
    cout << " Press any key to go back to the main menu: ";
    cin >> choice;
    return 0;
}

//logout
int logout() {
    clearScreen();
    displayHeading();
    char press;
    cout <<" Are you sure you want to logout? \n If yes, press 'Y'; If no, press 'N  : ";
    cin >> press;
    if (press == 'Y' || press == 'y') {
        clearScreen();
        displayHeading();
        cout << " Thank you!" <<"\n";
    }
    else if (press == 'N' || press == 'n') {
        clearScreen();
        displayHeading();
        cout << " Back to menu." <<"\n";
    }
    else {
        clearScreen();
        displayHeading();
        cout << " Invalid input." << "\n";
    }

    // Option to go back to the main menu
    char choice;
    cout << " Press any key to go back to the main menu: ";
    cin >> choice;
    return 0;
}

//exit
int exitProgram() {
    clearScreen();
    displayHeading();
    int press;
    cout << " Are you sure you want to exit?\n If yes, press '1'; if no, press '2': ";
    cin >> press;
    if (press == 1) {
        clearScreen();
        displayHeading();
        cout << " Thank you!" << "\n";
        cout<<"\n";
    
        exit(0);
    }
    else if (press == 2) {
        clearScreen();
        displayHeading();
        cout << " Back to menu." << "\n";
        cout<<"\n";
    
    }
    else {
        clearScreen();
        displayHeading();
        cout << " Invalid input." << "\n";
        cout<<"\n";
    
    }

    // Option to go back to the main menu
    char choice;
    cout << " Press any key to go back to the main menu: ";
    cin >> choice;
    return 0;
}

//View Company Details
int ViewCompanyDetails() {
    clearScreen();
    displayHeading();
    cout<<"\n";
    cout<< " View Company Details   " <<"\n";
    cout<<"\n";
    cout<< " * The Master Mind Institute is a famous educational organization with a distinguished past and a mission-driven mindset. "<<"\n";
    cout<<"\n";
    
    // Option to go back to the main menu
    cout << " Press any key to go back to the main menu: ";
    char choice;
    cin >> choice;
    return 0;
}


int main()
{
    displayHeading();
    cout<<"\n";
    cout<<"  MENU ";
    
     char choice;

    do {
        clearScreen();
        displayHeading();
        cout<<"\n";
        cout << " * Press 'A' to view training programs"<<"\n";
        cout<<"\n";
        cout << " * Press 'B' to manage course details" <<"\n";
        cout<<"\n";
        cout << " * Press 'C' to manage student registration details" <<"\n";
        cout<<"\n";
        cout << " * Press 'D' to login" <<"\n";
        cout<<"\n";
        cout << " * Press 'E' to logout" <<"\n";
        cout<<"\n";
        cout << " * Press 'X' to exit" <<"\n";
        cout<<"\n";
        cout<< " * Press 'Y' to View Company Details "<<"\n";
        cout<<"\n";
        cout << "   Enter your choice : ";
        cout<<"\n";
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                viewTrainingPrograms();
                break;

            case 'B':
            case 'b':
                manageCourseDetails();
                break;

            case 'C':
            case 'c':
                manageStudentRegistrationDetails();
                break;

            case 'D':
            case 'd':
                userLogin();
                break;

            case 'E':
            case 'e':
                logout();
                break;

            case 'X':
            case 'x':
                exitProgram();
                break;
            case 'Y':
            case 'y':
                ViewCompanyDetails();

            default:
                clearScreen();
                displayHeading();
                cout << " Invalid choice. Please try again." << endl;
        }

        cout<<"\n";
    } while (choice != 'X' && choice != 'x');


    return 0;
}

