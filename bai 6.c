#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char longest[1000];

    printf("Nhap mot chuoi bat ky: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  

    int maxlen = 0;
    int len = strlen(s);

    int i = 0;
    while (i < len) {
        while (i < len && s[i] == ' ')
            i++;
            
        if (i >= len) break;

        
        int start = i;

        
        while (i < len && s[i] != ' ')
            i++;

        int wordlen = i - start;

        
        if (wordlen > maxlen) {
            maxlen = wordlen;

            
            for (int k = 0; k < wordlen; k++) {
                longest[k] = s[start + k];
            }
            longest[wordlen] = '\0'; 
        }
    }

    if (maxlen == 0) {
        printf("Chuoi khong chua tu nao.\n");
    } else {
        printf("Tu dai nhat: %s\n", longest);
        printf("Do dai: %d\n", maxlen);
    }

    return 0;
}