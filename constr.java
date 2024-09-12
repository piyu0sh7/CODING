 class rec{
    private String name;
    private int age;
    private String surname;
     public void prin(){
        System.out.println(name + " "+surname +" "+ age);
     } 

     rec(String name,int age){
      this.name=name;
      this.age=age;
     }
 
}


public class constr {
    public static void main(String[] args) {
       rec r=new rec("piyush",21);
       r.prin();
        
    }
    
}
