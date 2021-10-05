class Main {

  public static void main(String[] args) {
    Main m = new Main();
    m.printCharsInString("This is an example string");
    m.printStringInReverse("This is an example string");
    m.printStringInUppercase("This is an example string");
    m.encryptText("DEF", 3);
    m.decryptText("DEF", 3);
  }

  /*
  * Modify the method below so that it prints out each character in the string
  * on a new line.
  */

  public void printCharsInString(String s){
    for(int i = 0; i < s.length(); i++){
      System.out.println(s.charAt(i));
    }
    System.out.print("\n");
  }

  /*
  * Modify the method below so that it prints out
  * the string in reverse order
  */

  public void printStringInReverse(String s){
    for(int i = (s.length() - 1); i >= 0; i--){
      System.out.print(s.charAt(i));
    }
    System.out.print("\n");
  }

  /*
  * Modify the method below so that it prints out
  * the string as all uppercase
  */

  public void printStringInUppercase(String s){
    System.out.print(s.toUpperCase());
    System.out.print("\n");
  }

  /*
  * Implement the method below which encrypts the
  * text passed in as an argument using a 
  * Ceaser cypher.  
  * 
  * https://en.wikipedia.org/wiki/Caesar_cipher
  * 
  * This is illustrated below 
  *
  * input string = "ABC"
  * shift by = 3
  * encrypted text = "DEF"
  */

  public String encryptText(String s, int shiftBy){
    String encryption = "";
    for(int i = 0; i < s.length(); i++){
      char letter = (char)(s.charAt(i) + shiftBy);
      encryption = encryption + letter;
    }
      System.out.print(encryption);
      System.out.print("\n");
      return encryption;
  }

  /*
  * Implement the method below which decrypts a
  * Ceaser cypher encrypted message
  *
  */

  public String decryptText(String s, int shiftBy){
    String decryption = "";
    for(int i = 0; i < s.length(); i++){
      char letter = (char)(s.charAt(i) - shiftBy);
      decryption = decryption + letter;
    }
      System.out.print(decryption);
      System.out.print("\n");
      return decryption;
  }

}
