Explain the difference between strcpy() and memcpy() function.
strcpy() copies a string until it comes across the termination character ‘\0’. With memcopy(), the programmer needs to specify the size of data to be copied. 
  strncpy() is similar to memcopy() in which the programmer specifies n bytes that need to be copied.

The following are the differences between strcpy() and memcpy():

- memcpy() copies specific number of bytes from source to destinatio in RAM, where as strcpy() copies a constant / string into another string.

- memcpy() works on fixed length of arbitrary data, where as strcpy() works on null-terminated strings and it has no length limitations.

- memcpy() is used to copy the exact amount of data, whereas strcpy() is used of copy variable-length null terminated strings.
  
  
  
 #include <stdio.h>
#include <string.h>
int main () {
   char a[] = "Firststring";
   const char b[] = "Secondstring";
   memcpy(a, b, 5);
   printf("New arrays : %s\t%s", a, b);
   return 0;
}
Output
New arrays : SeconstringSecondstring
  
  
  //memcpy() Implementation, name: myMemCpy()
void myMemCpy(void* target, void* source, size_t n){
	int i;
	//declare string and type casting 
	char *t = (char*)target;
	char *s = (char*)source;
	//copying "n" bytes of source to target
	for(i=0;i<n;i++)
		t[i]=s[i];
}
op"
  Before copying...
str1: Hello Wold!
str2: Nothing is impossible
After copying...
str1: Nothing is impossible
str2: Nothing is impossible
