import java.util.Scanner;

class data{
    int pa;
    static float ri;
    float td;
    float si;

    static{
        ri=12f;
    }

    void input(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Principle Amount ");
        pa=sc.nextInt();
        System.out.println("Enter the Time Duration ");
        td=sc.nextFloat();
       
    }

    void calc(){
        si=(pa*ri*td)/100f;
    }

    void result(){
        System.out.println("The Simple Intrest for "+pa+ " amount is -> "+si);
    }
}


public class loan {
    public static void main(String[] args) {
        data d1=new data();
        d1.input();
        d1.calc();
        d1.result();

        data d2=new data();
        d2.input();
        d2.calc();
        d2.result();
        
    }
    
}
