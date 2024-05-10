import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
public class Six {
    public static void main(String[] args) {
        int[][] arr=new int[1000][1000];
        try {
			Scanner scanner = new Scanner(new File("6.txt"));

			while (scanner.hasNextLine()) {
				String str=scanner.nextLine();
                String[] x=str.split(" ");
                if(x[0].equals("toggle")){
                    int a=Integer.parseInt(x[1].substring(0,x[1].indexOf(',')));
                    int b=Integer.parseInt(x[1].substring(x[1].indexOf(',')+1));
                    int c=Integer.parseInt(x[3].substring(0,x[3].indexOf(',')));
                    int d=Integer.parseInt(x[3].substring(x[3].indexOf(',')+1));
                    for(int i=a;i<=c;i++)
                        for(int j=b;j<=d;j++)
                            if(arr[i][j]==1) arr[i][j]=0;
                            else arr[i][j]=1;
                }
                else if(x[1].equals("on")){
                    int a=Integer.parseInt(x[2].substring(0,x[2].indexOf(',')));
                    int b=Integer.parseInt(x[2].substring(x[2].indexOf(',')+1));
                    int c=Integer.parseInt(x[4].substring(0,x[4].indexOf(',')));
                    int d=Integer.parseInt(x[4].substring(x[4].indexOf(',')+1));
                    for(int i=a;i<=c;i++)
                        for(int j=b;j<=d;j++)
                            arr[i][j]=1;
                }
                else{
                    int a=Integer.parseInt(x[2].substring(0,x[2].indexOf(',')));
                    int b=Integer.parseInt(x[2].substring(x[2].indexOf(',')+1));
                    int c=Integer.parseInt(x[4].substring(0,x[4].indexOf(',')));
                    int d=Integer.parseInt(x[4].substring(x[4].indexOf(',')+1));
                    for(int i=a;i<=c;i++)
                        for(int j=b;j<=d;j++)
                            arr[i][j]=0;
                }
			}

			scanner.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
        int count=0;
        for(int i=0;i<1000;i++)
            for(int j=0;j<1000;j++)
                if(arr[i][j]==1)count++;
        System.out.println(count);
    }
}
