class Solution {
    String removeDups(String S) {
        // code here
          String S1="";
        ArrayList<Character> al=new ArrayList<>();
        for(int i=0;i<S.length();i++)
        {
            if(!(al.contains(S.charAt(i))))
            al.add(S.charAt(i));
        }
        for(int i=0;i<al.size();i++)
        S1=S1+al.get(i);
        return(S1);
    }
}
