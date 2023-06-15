public class Palindrom_String{
    public static void main(String args[])
    {
        String str="RadaR", revStr=" " ;
        int strL = str.length();
        
        for(int i=(strL-1); i>=0; --i)
        {
            revStr = revStr + str.charAt(i);
        }
        if(str.toLowerCase().equals(revStr.toLowerCase())){
            System.out.print(str+ "  is Palindrom");
        }

        else
        {
            System.out.print(str + " is not Palindrom");
        }
    }
}