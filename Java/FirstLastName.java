import java.util.Scanner;


public class FirstLastName
{
        public static void main(String[] args)
        {
	    Scanner input = new Scanner(System.in);
	    System.out.print("Enter in first name and last name or \"xxx\" to quit program: ");
	    String firstAndLast = input.nextLine();
	    while(!firstAndLast.equalsIgnoreCase("xxx"))
		{
		    String trimmedName = firstAndLast.trim();
		    int index = trimmedName.indexOf(" ");
		    if (index == -1)
			{
			    System.out.println("error");
			}
		    else
                        System.out.println(firstAndLast.substring(index+1,firstAndLast.length()) + ", " + firstAndLast.substring(0, index));

		    System.out.print("Enter in first name and last name or \"xxx\" to quit program: ");
		    firstAndLast = input.nextLine();
		    
                } // end while 
	    
	}// main method
}// class

// not sure if it should keep looping or end after 1 input.
// Therefore, I am assuming that it keeps looping until sentinel is called.
