#include <stdio.h>

int main(){
    if(rename("new.bin", "first.bin")) puts("Rename failed.");
    else puts("Rename successful.");
}
