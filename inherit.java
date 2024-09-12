class human{
    public human(){
        System.out.println("Call from Human");
    }

    int age;
    void sleep(){
        age=18;
        System.out.println("Human sleeps -->Human class method");
        System.out.println(" age is "+age);
    }

}
class student extends human{
    void disp(){
        System.out.println("The age is : "+age);

    }
    student(){
        
        System.out.println("This called");
    }
    student(int age){
    this();
    }
    
}


public class inherit {

    public static void main(String[] args) {
     student s1=new student();
        s1.sleep();   
        s1.disp();
    }
    
}
