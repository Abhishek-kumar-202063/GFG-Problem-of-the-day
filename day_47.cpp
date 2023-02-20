class Solution{
	public static int countPaths(int n){
		//code here
		 if(n==1)
         return 0;

  long mod=1000000007;
  long curr=3, prev=0;
  for(int i=3;i<=n;i++)
  {

      long temp=curr;
      curr=(curr*2+prev*3) %mod;
      prev=temp;
  }
  return (int)(curr);
	}
}