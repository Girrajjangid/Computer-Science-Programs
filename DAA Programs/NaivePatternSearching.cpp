#include<iostream>
using namespace std;

void naivePatternSearch(string mainString, string pattern) {
   int patLen = pattern.size();
   int strLen = mainString.size();
	int i , j;
	
   for(i = 0; i <= (strLen - patLen); i++) {
      for(j = 0; j<patLen; j++) {      //check for each character of pattern if it is matched
         if(mainString[i+j] != pattern[j])
            break;
      }

      if(j == patLen) {     //the pattern is found
      cout << "Pattern found at position: " << i << endl ; 
	  }
   }
}
int main() {
   string mainString = "ABAAABCDBBABCDDEBCABC";
   string pattern = "ABC";
   naivePatternSearch(mainString, pattern);
}
