import java.util.Scanner;

public class arry {
  /*  public static void main(String[] args) {
        //Jagged Array
        int arr[][]=new int[3][];
        arr[0]=new int[5];
        arr[1]=new int[3];
        arr[2]=new int[2];
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<3;i++){
            for(int j=0;j<arr[i].length;j++){
                (arr[i][j])=sc.nextInt();
            }
            
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<arr[i].length;j++){
               System.out.print(arr[i][j]);
                
            }
            System.out.println();
        }

             //enhanced for loop:
         int arr[]=new int[3];
   
     for(int num:arr)
    {
        System.out.println(num);
    }
    }*/ 

   

   

    int arr[] = new int[] {0 , 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = 6;

      n = arr[arr[n] / 2];

             System.out.println(arr[n] / 2);
}
