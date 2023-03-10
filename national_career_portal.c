#include <stdio.h>
#include <string.h>

//function declarations
int infopage();
int login();
int menu();
int home();
int aboutus();
int portfolio();
int personaldetails();
int educationdetails();
int resume();

char admin_ncp[9], ncp_at_govt[11];
char first_name[25], middle_name[25], last_name[25], dob[10], age[2], gender[15], nationality[25], religion[20], caste[25], mother_tongue[20], profession[25], hobbies[50], mobile_number[10], email_id[50], address[200], ctv[25], state[20], pincode[10], country[50];
char edu_status[20], school_name[100], class[25], previous_school[100], dropout[3], college_name[100], course[100], class12_result[10], class10_result[10], other_course[100], learning_pi[25];

//information page function
int infopage()
{
    printf("\n\n\n=====================================================================================================\n");
    printf("                                         GANPAT UNIVERTSITY                                         \n");
    printf("                           BRANCH - COMPUTER SCIENCE AND ENGINEERING (CBA)                          \n");
    printf("                                             BATCH - 11                                             \n");
    printf("                                       ENROLLMENT NO. - CBA08                                       \n");
    printf("                                       PROJECT TITLE - PID049                                       \n");
    printf("                                           ESFP-I PROJECT                                           \n");
    printf("=====================================================================================================");
}

//login function
int login()
{
    printf("\n\n\n\n-----------------------------------------------------------------------------------------------------");

    printf("\nUsername : ");
    scanf("%s", &admin_ncp);

    printf("Password : ");
    scanf("%s", &ncp_at_govt);

    printf("\nForgot username or password?");
 
    if(strcmp(admin_ncp, "admin_ncp") == 0 && strcmp(ncp_at_govt, "ncp_at_govt") == 0)
    {
        printf("\n\nLogin Successful!\nWelcome to National Career Portal.\n");
        printf("-----------------------------------------------------------------------------------------------------");

        menu();
    }
    else
    {
        printf("\n\nWrong username or password!");
        printf("\n-----------------------------------------------------------------------------------------------------");

        login();
    }

    printf("\n\n\n*****************************************************************************************************");
    printf("\n                            N A T I O N A L    C A R E E R    P O R T A L");
    printf("\n*****************************************************************************************************");
}

//menu function
int menu()
{
    printf("\n\n\n\n------------------------------------------------ MENU -----------------------------------------------\n");
    printf("\n1. Home\n");
    printf("2. About Us\n");
    printf("3. My Portfolio\n");
    printf("4. Contact Us\n");
    printf("5. Help Desk\n");
    printf("6. Government Schemes\n");
    printf("7. Latest News\n");
    printf("8. Exit NCP\n");
    printf("\n-----------------------------------------------------------------------------------------------------");

    printf("\n\n\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\nEnter your choice: ");
    int menu_choice;
    scanf("%d", &menu_choice);
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");

    switch(menu_choice)
    {
        case 1:
            home();
            menu();
            break;

        case 2:
            aboutus();
            menu();
            break;

        case 3:
            portfolio();
            break;

        case 5:
            printf("\n\n\n\n-------------------------------------------- CONTACT US ---------------------------------------------");
            menu();
            break;

        case 6:
            printf("\n\n\n\n--------------------------------------------- HELP DESK ---------------------------------------------");
            menu();
            break;

        case 7:
            printf("\n\n\n\n---------------------------------------- GOVERNMENT SCHEMES -----------------------------------------");
            menu();
            break;

        case 8:
            printf("\n\n\n\n-------------------------------------------- LATEST NEWS --------------------------------------------");
            menu();
            break;

        case 9:
            printf("\n\n\n\nThank You!");
            break;

        default:
            printf("\nInvalid Choice!\n");
            printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    }
}

//home function
int home()
{
    printf("\n\n\n\n----------------------------------------------- HOME ------------------------------------------------\n");
    printf("\nNEWS HIGHLIGHTS -\n");
    printf("  1) Govt. of Telangana has recently introduced a scheme for higher secondary education for SC.\n");
    printf("  2) Application form for free studentship to SC/ST/OBC students of Meghalaya will resume on December\n     25.\n");
    printf("  3) Infosys, Byju's and Swiggy to soon start hiring freshers post college programme.\n");
    printf("  4) Department of Education of Bangalore to soon implement coding as compulsory subject for school\n     students.\n");
    printf("  5) PM Employment Yogna raises employment in Mechanical and Electrical sectors after pandemic.\n");
            
    printf("\nHELPFULL LINKS -\n");
    printf("  - ST/SC/OBC scholarship for college courses\n");
    printf("  - Portal for startup policy by govt. of India\n");
    printf("  - KVS Officers Teaching Non-Teaching Staff Recruitment 2022\n");
    printf("  - Online Siksha for class 1 to class 10\n");
    printf("  - Indian Railways current affairs\n");

    printf("\nUPCOMING SCHOLARSHIPS AND CAMPAIGNS BY GOVT.-\n");
    printf("  > National Doctoral Fellowship (NDF)\n");
    printf("  > Pragati Scholarship Scheme\n");
    printf("  > Smart India Hackathon\n");
    printf("  > Central Employment Campaign\n");
    printf("  > Aatmanirbhar Bharat Rojgar Yojana (ABRY)\n");
    printf("\n-----------------------------------------------------------------------------------------------------");
}

//about us function
int aboutus()
{
    printf("\n\n\n\n--------------------------------------------- ABOUT US ----------------------------------------------\n");
    printf("\nABOUT US -\n");
    printf("\nThis is the Official Portal of the Government of India, designed, developed and hosted by \nthe National Education and Informatics Centre (NEIC), a premier ICT organization of the Government \nof India under the aegis of the Ministry of Electronics & Information Technology.\n");
    printf("\n\n\nOBJECTIVE/VISION -\n");
    printf("\nThe objective behind the Portal is to information regarding school education, higher education and \ntechnical education at all levels throughout the country of the citizens and provide a single window \naccess of it to the Indian Government. An attempt has been made through this Portal to provide \ncomprehensive, accurate, reliable and one stop source of information about portfolio of citizen and \nits various facets.\n");
    printf("\n-----------------------------------------------------------------------------------------------------");
}

//portfolio function
int portfolio()
{
    printf("\n\n\n\n------------------------------------------- MY PORTFOLIO --------------------------------------------\n");
    printf("\n1. Personal Details\n");
    printf("2. Education Details\n");
    printf("3. Resume\n");
    printf("4. Return to Menu\n");
    printf("\n-----------------------------------------------------------------------------------------------------");

    printf("\n\n\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\nEnter your choice: ");
    int my_portfolio_choice;
    scanf("%d", &my_portfolio_choice);
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");

    switch(my_portfolio_choice)
    {
        case 1:
            personaldetails();
            portfolio();
            break;

        case 2:
            educationdetails();
            portfolio();
            break;

        case 3:
            resume();
            portfolio();
            break;

        case 4:
            menu();
            break;

        default:
            printf("\nInvalid Choice!\n");
            printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    }  
}

//personal details function
int personaldetails()
{
    printf("\n\n\n\n------------------------------------------- MY PORTFOLIO --------------------------------------------\n");

    printf("\nPERSONAL DETAILS\n");

                
    printf("\nFirst Name          : ");
    scanf("%s", &first_name);
                
    printf("\nMiddle Name         : ");
    scanf("%s", &middle_name);
                
    printf("\nLast Name           : ");
    scanf("%s", &last_name);
                
    printf("\nDate of Birth       : ");
    scanf("%s", &dob);

    printf("\nAge                 : ");
    scanf("%s", &age);

    printf("\nGender              : ");
    scanf("%s", &gender);
                
    printf("\nNationality         : ");
    scanf("%s", &nationality);
                
    printf("\nReligion            : ");
    scanf("%s", &religion);

    printf("\nCaste               : ");
    scanf("%s", &caste);

    printf("\nMother Tongue       : ");
    scanf("%s", &mother_tongue);

    printf("\nProfession          : ");
    scanf("%s", &profession);

    printf("\nHobbies             : ");
    scanf("%s", &hobbies);

    printf("\nMobile Number       : ");
    scanf("%s", &mobile_number);

    printf("\nEmail ID            : ");
    scanf("%s", &email_id);
                
    printf("\nAddress             : ");
    scanf("%s", &address);

    printf("\nCity/Town/Village   : ");
    scanf("%s", &ctv);

    printf("\nState               : ");
    scanf("%s", &state);

    printf("\nPincode             : ");
    scanf("%s", &pincode);

    printf("\nCountry             : ");
    scanf("%s", &country);

    printf("\n-----------------------------------------------------------------------------------------------------");
    
    portfolio();    
}

//educational details function
int educationdetails()
{
    printf("\n\n\n\n------------------------------------------- MY PORTFOLIO --------------------------------------------\n");

    printf("\nEDUCATION DETAILS\n");


    printf("\nCurrent Education Status (School/College/University Student) : ");
    scanf("%s", &edu_status);

    
    printf("\n\n\nFor School Student -\n");
    printf("\nSchool Name              : ");
    scanf("%s", &school_name);

    printf("\nClass                    : ");
    scanf("%s", &class);
                
    printf("\nName of Previous School  : ");
    scanf("%s", &previous_school);


    printf("\n\n\nFor College/University Student -\n");
    printf("\nAre you a dropout?                 : ");
    scanf("%s", &dropout);

    printf("\nCollege Name                       : ");
    scanf("%s", &college_name);

    printf("\nCourse Enrolled                    : ");
    scanf("%s", &course);

    printf("\nClass 12 Percentage/Grade/CGPA     : ");
    scanf("%s", &class12_result);

    printf("\nClass 10 Percentage/Grade/CGPA     : ");
    scanf("%s", &class10_result);


    printf("\n\n\nFor Other Online/Offline Course Student -\n");
    printf("\nCourse Name                   : ");
    scanf("%s", &other_course);

    printf("\nLearning Platform/Institute   : ");
    scanf("%s", &learning_pi);
    
    printf("\n-----------------------------------------------------------------------------------------------------");
    
    portfolio();           
}

//resume function
int resume()
{
    printf("\n\n\n\n------------------------------------------- MY PORTFOLIO --------------------------------------------\n");

    printf("\nRESUME\n");


    printf("\nPERSONAL DETAILS\n");

    printf("\nFirst Name          : %s", first_name);           
    printf("\nMiddle Name         : %s", middle_name);
    printf("\nLast Name           : %s", last_name);
    printf("\nDate of Birth       : %s", dob);
    printf("\nAge                 : %s", age);
    printf("\nGender              : %s", gender);
    printf("\nNationality         : %s", nationality);
    printf("\nReligion            : %s", religion);
    printf("\nCaste               : %s", caste);
    printf("\nMother Tongue       : %s", mother_tongue);
    printf("\nProfession          : %s", profession);
    printf("\nHobbies             : %s", hobbies);
    printf("\nMobile Number       : %s", mobile_number);
    printf("\nEmail ID            : %s", email_id);
    printf("\nAddress             : %s", address);
    printf("\nCity/Town/Village   : %s", ctv);
    printf("\nState               : %s", state);
    printf("\nPincode             : %s", pincode);
    printf("\nCountry             : %s", country);


    printf("\n\nEDUCATION DETAILS\n");

    printf("\nCurrent Education Status (School/College/University Student) : %s", edu_status);

    printf("\n\n\nFor School Student -\n");
    printf("\nSchool Name              : %s", school_name);
    printf("\nClass                    : %s", class);    
    printf("\nName of Previous School  : %s", previous_school);

    printf("\n\n\nFor College/University Student -\n");
    printf("\nAre you a dropout?                 : %s", dropout);
    printf("\nCollege Name                       : %s", college_name);
    printf("\nCourse Enrolled                    : %s", course);
    printf("\nClass 12 Percentage/Grade/CGPA     : %s", class12_result);
    printf("\nClass 10 Percentage/Grade/CGPA     : %s", class10_result);

    printf("\n\n\nFor Other Online/Offline Course Student -\n");
    printf("\nCourse Name                   : %s", other_course);
    printf("\nLearning Platform/Institute   : %s", learning_pi);

    portfolio();
}

//main function
int main()
{
    infopage();
    login();
    
    return 0;
}