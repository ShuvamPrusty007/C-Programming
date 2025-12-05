#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "Shuvam keep going";

    // char *ptr = &str[0]; //ptr now points to str[0]
    //       ||
    //       ||same
    //       ||
    char* ptr = str; // ptr now points to str[0]

    printf("%p\n", &str[0]);//0000000a2afff990
    printf("%p\n", str);//0000000a2afff990

    // int i = 0;
    // while(str[i] != '\0'){
    //     printf("%c", str[i]);//Shuvam kep going
    //     i++;
    // }

    while(*ptr != '\0'){
        printf("%c", *ptr);//Shuvam kep going
        ptr++;
    }
    printf("\n");

    char* ptr1 = "Shuvam, you are just one step away.";
    //can store address of a string, but
    //Such direct initialization using poimters results in a
    //read-only memory allocation of character arrays and hence,
    //causes undefined behaviour when we try to change 
    // indivisual characters.

    // ptr1[0] = 'A';//----- wont change

    printf("%c\n", *ptr1);//S
    //we use *ptr for a character but for a whole string we
    //use ptr
    printf("%s\n", ptr1);//Shuvam, you are just one step away.
 
    //In normal initialization, we can modify indivisual 
    //characters but not the Entire string.

    char str1[] = "Shuvam you are champion";
    str1[0] = 'A';
    printf("%s\n", str1);//Ahuvam you are champion

    // str1 = "Shuvam you are winner";// --->it will show error
   

    //But in Pointer initialization, we can modify the entire
    // string but not the indivisual characters

    char* ptr2 = "Shuvam this is your chance to prove your self";

    // ptr2[0] = 'A';//--->will throw error
    // printf("%s\n", ptr2);//Segmentation fault

    ptr2 = "Prove it then.";
    printf("%s\n", ptr2);//Prove it then.

    //This here means that 1st the pointer ptr2 was pointing
    //to "Shuvam this is your chance to prove your self"
    //but now ptr2 has changed its pointer to "Prove it then."
    //So it has lost it's previous memory

    char str2[] = "This is your opportunity.";
    char* ptr3 = str2;
    printf("%s\n", str2);//This is your opportunity.
    printf("%s\n", ptr3);//This is your opportunity.
    ptr3 = "Don't miss it.";
    printf("%s\n", str2);//This is your opportunity.
    printf("%s\n", ptr3);//Don't miss it.

    //Now above what happened is 1st str2 was created
    //and it has memory "This is your opportunity."
    //Then a pointer was created ptr3, which is
    //pointing to "This is your opportunity."
    //Then modified the pointer ptr3 
    //So it leaves its last memory address and points
    //to "Don't miss it."

    char str3[] = "You can do it.";
    char *ptr4 = str3;//str3[0]
    *ptr4 = 'W';
    printf("%s\n", str3);
    printf("%s\n", ptr4);

    //Now here above what happened is 
    //str3 was created and it has a memory
    //then ptr4 was created
    //and now ptr4 points to the 1st character of str3
    //so when this is done *ptr4 = 'W' 
    //it changes the charcter not the address as it 
    //was doing in the previous case

    return 0;
}