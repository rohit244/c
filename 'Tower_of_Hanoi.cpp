#include <stdio.h> 
void towerOfHanoi(int a, char from_rod, char to_rod, char aux_rod) { 
	if (a == 1){ 
	    printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod); 
		return; 
	} 
	towerOfHanoi(a-1, from_rod, aux_rod, to_rod); 
	printf("Move disk %d from rod %c to rod %c\n", a, from_rod, to_rod); 
	towerOfHanoi(a-1, aux_rod, to_rod, from_rod); 
} 
 main(){
	int a;
    printf("Enter number of disks:");
    scanf("%d",&a);
	towerOfHanoi(a, 'A', 'C', 'B');
}
