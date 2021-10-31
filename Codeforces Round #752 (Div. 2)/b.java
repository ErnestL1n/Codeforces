import java.util.Scanner;
public class main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int t = scanner.nextInt();
    while (t-- > 0) {
      int n = scanner.nextInt();
      boolean flag = true;
      int pre = 0, x = 0;
      for (int i = 0; i < n; ++i) {
        x = scanner.nextInt();
        if (i == 0) {
          pre = x;
          continue;
        }
        if (pre >= x) {
          flag = false;
        }
        pre = x;
      }
      if (!flag || n % 2 == 0) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }
    }
  }
}