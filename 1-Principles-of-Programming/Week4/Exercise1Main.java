
/*
 * Modify the code below so that 
 * 
 * 1. So that numbers less than 10 are padded when printed 
 * i.e. 01 : 59 : 59 rather than 1 : 59 : 59
 *
 * 2. So that the time includes miliseconds 
 * e.g. 01 : 59 : 59 : 999
*/

public class Main {

  public static void main(String[] args) {
		Counter hours = new Counter(24, 1);
		Counter mins = new Counter(60, 59);
		Counter sec = new Counter(60, 58);
    Counter mil = new Counter(1000);

		int i = 0;
		while(i < 10){
      System.out.println(hours.countFormat() + " : " + mins.countFormat() + " : " + sec.countFormat() + " : " + String.format("%03d", mil.getCount()));
      mil.tick(); //increase miliseconds by 1
      if(mil.getCount() == 0){ //if miliseconds is 0...
        sec.tick(); //...increase second by 1
			  if(sec.getCount() == 0){ //if seconds is 0...
				  mins.tick(); //...add 1 to minutes
          if(mins.getCount() == 0){ //if minutes is 0...
				    hours.tick(); //...add 1 to hours
			    }
        }
		  } i++;
    }
  }
}
