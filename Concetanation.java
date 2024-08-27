public class Concetanation {
    public static void main(String [] args){
       /* 
         -Type 1:
        String s1="piyush";
        String s2="piyush";
        String s3=new String("piyush");
        String s4=new String("piyush");
        
        System.out.println(s1==s2);
        System.out.println(s3==s4);

        System.out.println(s1.equals(s2));
        s1=s1.concat("Singh");
        s4=s4.concat("Singh");
        System.out.println(s1);
        System.out.println(s1.equals(s4));

        */

        //-Type 2

        String s1="P"+"S";
        String s2="P";
        String s3=s2+"S";
        String s4="P"+"S";

        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);
        System.out.println(s4);
        System.out.println(s1==s4);
        System.out.println(s1.equals(s3));



    }
}
