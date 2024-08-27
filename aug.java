class student{
    int roll;
    String name;
   
    student(){
        name="piyush";
        roll=2;
      System.out.println(name+roll+" this called" );
    }
    student(int roll,String name){
    this();
        this.roll=roll;
        this.name=name;

    }

    public void studentDetail(){
        System.out.println(name+" "+roll);
    }
    
}

public class aug {
    public static void main(String[] args) {
        student s1=new student();
        student s2=new student(1, "Jhanvee");
        s1.studentDetail();
        s2.studentDetail();
    }
}
