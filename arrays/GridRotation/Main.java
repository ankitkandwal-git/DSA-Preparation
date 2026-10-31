package arrays.GridRotation;
import java.util.*;

class Main{
    static int[][] gridRotation(int[][]matrix){
        int m = matrix.length;
        for(int i=0;i<m;i++){
            for(int j=0;j<i;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<m/2;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][m-j-1];
                matrix[i][m-j-1] = temp;
            }
        }
        return matrix;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            int m = sc.nextInt();
            int[][]matrix = new int[m][m];
            for(int i=0;i<m;i++){
                for(int j=0;j<m;j++){
                    matrix[i][j] = sc.nextInt();
                }
            }
            int[][]rotated = gridRotation(matrix);
            for(int i=0;i<m;i++){
                for(int j=0;j<m;j++){
                    System.out.print(rotated[i][j]+" ");
                }
                System.out.println();
            }
        }
    }
}