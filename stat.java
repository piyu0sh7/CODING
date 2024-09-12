class demo{

    static int a;
    int b;

    static{
        a=10;
        System.out.println("Static");

    }

    {
        b=11;
        System.out.println("Non static");
    }

    static void disp(){
        System.out.println(a);
    }

    void disp2(){
        System.out.println(b);
    }
}



public class stat {
   /*  static int a;
    static{
        a=10;   
        System.out.println("Hello static");
    }

    public static void main(String[] args) {
        System.out.println("Hello main");
    }
*/

public static void main(String[] args) {
    System.out.println("Main called");

    demo d1=new demo();
    demo.disp();
    d1.disp2();
}



}