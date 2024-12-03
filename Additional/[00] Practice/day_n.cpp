#include <iostream>
#include <string.h>
using namespace std;


void zygote()   {
    char string1[] = "Fuck yoku!";
    char string2[] = {'I', ' ', 'h', 'a', 't', 'e', ' ', 'C', '+', '+', '!', '\0'};
    cout << strlen(string2) << endl;
    //cout << strcat(string1, string2) << endl;
    //cout << strncat(string1, string2, 5) << endl;
    //cout << strcpy(string1, string2) << endl;
    cout << string1 << endl;
    char string3[] = {'I', ' ', 'h', 'a', 't', 'e', ' ', 'c', '+', '+', '!', '\0'};
    //cout << strcmp(string3, string1) << endl;
    cout << strchr(string1, 'k') << endl;
    cout << strrchr(string1, 'k') << endl;
    cout << strstr(string1, "yo") << endl;
    //cout << string2 << endl;
}

void armstrong()    {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int originalNum = number;
    int sum = 0;
    int digits = 0;

    // Calculate the number of digits
    int temp = number;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of digits raised to the power of the number of digits
    temp = number;
    while (temp > 0) {
        int digit = temp % 10;

        // Compute digit^digits manually
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    // Check and print if the number is an Armstrong number
    if (sum == originalNum) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
}

void armstrong_new()    {
    int i, j, digits = 0;
    char input[100];
    cin >> input;
    digits = strlen(input);
    int number[digits];
    for (i = 0; i < digits; i++)    {
        number[i] = (int)input[i];
    }

    //int originalNum = (int)input;
    int sum = 0;

    // Compute digit^digits manually

    for (int i = 0; i < digits; i++) {
        int power = 1;
        for (j = 0; j < digits; j++)    {
            power *= number[i];
        }

    }

        //sum += power;
        //temp /= 10;
    }

    // Check and print if the number is an Armstrong number
    //if (sum == originalNum) {
        //cout << number << " is an Armstrong number." << endl;
    //} //else {
        //cout << number << " is not an Armstrong number." << endl;
    //}
//}

void test_wtf_is_this()    {
    const char baseDigits[] = "0123456789ABCDEF";  // Digits for bases up to 16
    char convertedNumber[64];                      // To store the result
    long numberToConvert;                          // Number to convert
    int base;                                      // Target base
    int index = 0;

    // Get the number and base from the user
    cout << "Enter the number to convert: ";
    cin >> numberToConvert;
    cout << "Enter the base (2 to 16): ";
    cin >> base;

    // Validate the base
    if (base < 2 || base > 16) {
        cout << "Invalid base! Please enter a base between 2 and 16. Exiting!" << endl;
        exit(1); // Exit the program
    }

    // Perform the conversion
    do {
        convertedNumber[index++] = baseDigits[numberToConvert % base];
        numberToConvert /= base;
    } while (numberToConvert > 0);

    // Display the result in reverse order
    cout << "Converted number: ";
    for (int i = index - 1; i >= 0; --i) {
        cout << convertedNumber[i];
    }
    cout << endl;
}

void temporary()    {
    char str1[32] = "to Programming";
    char str2[] = {'I', 'n', 't', 'c', 'o', 'd', 'u', 'c', 't', 'i', 'o', '\0'};
    cout << str2 << endl;
    cout << " " << endl;

}

void output_tracing()   {
    char str1[]="JACKFRUIT";
    char str2[]= {'W', 'a', 't', 'e', 'r', '\0', 'M', 'E', 'L', 'O', 'N'};
    char str3[]= "BlueBerry";
    char str4[]="MulBerry";
    char str5[26]={};
    cout<<strlen(str2)<<" "<<strlen(str5)<<endl;
    cout<<sizeof(str2)<<" "<<sizeof(str5)<<endl;
    cout<< strcat(str2," ")<<endl;
    cout<< strncat(str2, str3,4)<<endl;
    cout<< strchr(str4,'B')<<" "<<strstr(str1, "FR")<<endl;
    strcpy(str1,str2);
    cout<< str1<<endl;
    cout<<strncpy(str4,str3,3)<<endl;
    cout<<strncmp(str3,str4,3)<<endl;
}


int main()  {
    //zygote();
    //temporary();
    //armstrong();
    //armstrong_new();
    //test_wtf_is_this();
    output_tracing();
	cout << "" << endl;
    return 0;
}
