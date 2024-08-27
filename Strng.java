public class Strng {
    public static void main(String []args){
        String abc="Piyush ";//immuutable String
        System.out.println(abc);
        abc.concat("singh");
        System.out.println(abc);
        StringBuilder abcd =new StringBuilder("Piyush ");//mutable String
        System.out.println(abcd);
        abcd.append("singh");
        System.out.println(abcd);

    }
    
}
