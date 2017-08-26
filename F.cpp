/*
	Todd Larson
	8/26/2017
	FizzBuzz Program
*/
int F(n){
	unsigned int num = 0;//The nth fibonacci number
	
	if(n == 0){//F(1) = F(1-2) + F(1-1) = F(-1) + F(0) = 1 + 0 = 1
		return 0;//Base case part 1
	}
	else if(n == -1){ //F(2) = F(0) + F(1) = F(0) + F(0) + F(-1) = 0+ 0 + 1 = 1
		return 1;//Base case part 2
	}
	//F(3) = F(1) + F(2) = 1 + 1 = 2
	else{
		num = F(n-2) + F(n-1);//Adds the two previous numbers together
		if(num%3 == 0 && num%5 != 0)//if the nth number is divisible by 3 and prints Buzz
			cout<<"Buzz ";
		else if(num%3 != 0 && num%5 == 0)//if the nth number is divisible by 5 and prints Fizz
			cout<<"Fizz ";
		else if(num%3 == 0 && num%5 == 0)//if the nth number is divisible by 15 and pritns FizzBuzz
			cout<<"FizzBuzz ";
		else if(num%2 != 0)// if the nth number is prime and prints BuzzFizz
			cout<<"BuzzFizz ";
		else //Else it just prints the number
			cout<<num<<" ";
			
		return num; //Returns the nth Fibonacci number using recursion
	}
}