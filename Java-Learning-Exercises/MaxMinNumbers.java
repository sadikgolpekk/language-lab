class hesapla{
    int min,max;
    
    public hesapla(){ 
   int a[]={2,1,90,10};
    min=a[0];
    max=a[0];
   for(int x=0;x<4;x++){
       if(max<a[x]){
           max=a[x];
       }
       if(min>a[x]){
           min=a[x];
       }
   }
    
    
}
}

public class HelloWorld{
  public static void main(String args[]) {
  hesapla a=new hesapla();
   System.out.println("Max "+a.max+" Min "+a.min);
      
}
}
