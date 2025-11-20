   int isVowel(char c){
    c = (c >= 'A' && c <= 'Z') ? c + 32 : c;

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}
char* reverseVowels(char* s){
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right){
        if(!isVowel(s[left])){
            left++;
        }
        else if(!isVowel(s[right])){
            right--;
        }
        else {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }

    return s;
}