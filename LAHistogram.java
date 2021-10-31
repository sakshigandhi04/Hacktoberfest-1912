import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] arr = new int[n];
    for(int i = 0; i < n; i++){
       arr[i] = Integer.parseInt(br.readLine());
    }

    Stack<Integer> st = new Stack<>();
    int[] nsr = new int[n];
    int[] nsl = new int[n];
    
    //nsr
    for(int i=n-1 ; i>=0 ;i--){
        int ele = arr[i];
        
        while(st.size()>0 && ele<=arr[st.peek()]) st.pop();
        if(st.size()==0) nsr[i]=n;
        else nsr[i]=st.peek();
        
        st.push(i);
        
    }
    st=new Stack<>();
    //nsl
    for(int i=0 ; i<n ;i++){
        int ele = arr[i];
        
        while(st.size()>0 && ele<=arr[st.peek()]) st.pop();
        if(st.size()==0) nsl[i]=-1;
        else nsl[i]=st.peek();
        st.push(i);
        
    }
    
    //area
    int area=Integer.MIN_VALUE;
    int[] ans = new int[n];
    for(int i=0; i<n ;i++){
        int w=nsr[i]-nsl[i]-1;
        int h=arr[i];
        area=Math.max(area,w*h);
    }
    System.out.println(area);
    
    
 }
}
