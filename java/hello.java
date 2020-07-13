import java.util.Scanner;

public class Average{
	public static void main (String[] args){
		int average;
		average = Average();
		System.out.printf("The average of the numbers you have just entered is " + average);
	}

	public static int Average(){
		int sum=0 ; int num=1, int i=0;
		Scanner input = new Scanner(System.in);
		System.out.printf("Enter 0 to the end of numbers");
		while (num != 0){
			System.out.printf("Enter the number to sum ");
			num = input.nextInt();
			sum += num;
			i++;
		}
		int avg = sum/i;
		return avg;
	}
}
