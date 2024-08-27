import java.util.*;
public class odd {
    public static void even(int n){
        if(n%2==0){
            System.out.println(n+ " is even");
        }
        else{
            System.out.println(n+" is odd");
        }
    }
    public static void main(String[] args) {
        
    
    Scanner sc= new Scanner(System.in);
    System.out.println("Give the range :");
    int n=sc.nextInt();
    for(int i=1;i<=n;i++){
        even(i);
    }
     
    
    }
}