import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }
    int k = Integer.parseInt(br.readLine());

    Stack<Integer> st = new Stack<>();
    int[] ngr = new int[n];
    
    for(int i=n-1; i>=0 ;i--){
        int ele = a[i];
        
        while(st.size()!=0 && ele>=a[st.peek()]) st.pop();
        if(st.size()==0) ngr[i]=n;
        else ngr[i]=st.peek();
        
        st.push(i);
    }
    
    int pbl=0;
    int[] ans = new int[n-k+1];
    
    for(int i=0 ;i<n-k+1; i++){
        int lim=i+k;
        pbl=i;
        while(ngr[pbl]<lim){
            pbl=ngr[pbl];
        }
        ans[i]=a[pbl];
    }
    for(int i=0 ;i<n-k+1; i++){
        System.out.println(ans[i]);
    }

 }
}
