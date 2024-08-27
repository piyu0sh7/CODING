 class sum{
    int s(int a,int b){
        return a+b;
    }

    int s(int a,int b,int c){
        return a+b+c;
    }

    double s(double a,double b){
        double ans=a+b;
        return ans;
    }
}



public class overload {

    

    public static void main(String[] args) {
        
        sum a=new sum();
        sum b=new sum();
        
        System.out.println(a.s(1,2));
        System.out.println(a.s(3,4,5));
        
        System.out.println(b.s(1.23, 3.99));
    }
    
}
