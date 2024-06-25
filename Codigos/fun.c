int EPar (int a) {
	if (a%2)
	return 0;
	else
	return 1;
}

int main () {
	int num;
	printf("Digite com numero: ");
	scanf ("%d", &num);
	
	if (EPar(num)) 
	{
		printf ("O numero eh par. ");
	} 
	else
	{
		printf("O numero eh impar. ");
	}		
return 0;
}
