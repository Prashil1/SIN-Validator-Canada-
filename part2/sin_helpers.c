// TODO: Implement populate_array
/*
 * Convert a 9 digit int to a 9 element int array.
 */
int populate_array(int sin, int *sin_array) {
	if (100000000 > sin || 999999999 < sin){
		return 1;
}
	else{
sin_array[0] = (sin/100000000);
sin_array[1] = (sin/10000000)%10;
sin_array[2] = (sin/1000000)%10;
sin_array[3] = (sin/100000)%10;
sin_array[4] = (sin/10000)%10;
sin_array[5] = (sin/1000)%10;
sin_array[6] = (sin/100)%10;
sin_array[7] = (sin/10)%10;
sin_array[8] = sin%10;
}
   return 0;
}

// TODO: Implement check_sin
/* 
 * Return 0 (true) iff the given sin_array is a valid SIN.
 */
int check_sin(int *sin_array) {
for(int a = 0; a <= 8; a++){
if(a%2 == 1){
sin_array[a] = sin_array[a] * 2;
if(sin_array[a] >= 10){
sin_array[a] = sin_array[a] %10;
sin_array[a] = sin_array[a]+1;
}
}
}
int total;
for(int h=0; h<=8; h++){
total = total + sin_array[h];
}
if(total%10 == 0){
return 0;
}
    return 1;
}

