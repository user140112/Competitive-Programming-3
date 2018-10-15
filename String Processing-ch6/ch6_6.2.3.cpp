#include<bits/stdc++.h>
using namespace std;

int isvowel(char ch) {
  char vowel[6] = "aeiou";
  for (int j = 0; vowel[j]; j++)
    if (vowel[j] == ch)
      return 1;
  return 0;
}

int main()
{

    char str[]="I love competitive programming. My roll number is 140112 in CSE.";
    int i,digits,alphas,vowels,consonants;
    for (i = digits = alphas = vowels = consonants = 0; str[i]; i++) { // we can use str[i] as terminating condition as string in C++ is also terminated with NULL (0)
    str[i] = tolower(str[i]);
    digits += isdigit(str[i]) ? 1 : 0;
    alphas += isalpha(str[i]) ? 1 : 0;
    vowels += isvowel(str[i]);
    }
    consonants = alphas - vowels;
    printf("%s\n",str);
    printf("digits : %d\n",digits);
    printf("vowels : %d\n",vowels);
    printf("consonants : %d\n",consonants);
    return 0;
}
/**
Output:
-------
i love competitive programming. my roll number is 140112 in cse.
digits : 6
vowels : 17
consonants : 29
**/
