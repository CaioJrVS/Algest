import java.util.Scanner;

public class Average{
	public static void main (String[] args){
		float average;
		average = Average();
		System.out.printf("\nThe average of the numbers you have just entered is " + average);
		System.out.printf("\n");
	}

	public static float Average(){
		float sum =0,num;
		int i=0;
		Scanner input = new Scanner(System.in);
		System.out.printf("\nEnter 0 to the end of numbers");
		System.out.printf("\nEnter the number to sum ");
		num = input.nextFloat();
		while (num != 0.0){
			sum += num;
			i++;
			System.out.printf("\nEnter the number to sum ");
			num = input.nextFloat();
		}
		float avg = sum/i;
		return avg;
	}
}
