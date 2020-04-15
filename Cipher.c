#include<stdio.h>
#include<string.h>

int main() {
	char arr[100]; int key; //declarations
	scanf("%s", arr, 100); scanf("%d", &key); //assignment
	int size = strlen(arr);
	for (int i = 0; i < size; i++) { 
		if ((arr[i] > 64 && arr[i] < 91)) {
			if (arr[i] + key > 90) {
				arr[i] = (((arr[i] - 65) + key) % 26) + 65;
				}			
			else {
				arr[i] = arr[i] + key;
			}			
		}

		else if (arr[i] > 96 && arr[i] < 123) {
			if (arr[i] + key > 122) {
				arr[i] = (((arr[i] - 97) + key) % 26) + 97;
			}
			else {
				arr[i] = arr[i] + key;
			}		
		}

		else if (arr[i] > 47 && arr[i] < 58) {
			if (arr[i] + key > 57) {
				arr[i] = (((arr[i] - 48) + key) % 10) + 48;
			}
			
			else {
				arr[i] = arr[i] + key;
			}		
		}
	}
	printf("%s", arr);
	return 0;
}
