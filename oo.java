class student{
    private int roll;
    private String name;
   
    public void setter(int roll,String name){
        this.roll=roll;
        this.name=name;
    }
    public void getter(){
        System.out.println(name+ "  "+ roll);
    }
    //given below are the correct Getters !
    public int geRoll(){
        return roll;
    }
    public String getName(){
        return name;
    }
}

public class oo {

    public static void main(String[] args) {
       student s1=new student(); 
       s1.setter(10,"piyush");
       s1.getter();
       student s2=new student();
       s2.setter(20, "Ayush");
       s2.getter();

       System.out.println(s1.getName());
    }
}
