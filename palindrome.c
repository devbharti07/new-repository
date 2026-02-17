// 7. Palindrome Check
void stringPalindrome() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("Not a Palindrome\n");
    else
        printf("Palindrome\n");
}
