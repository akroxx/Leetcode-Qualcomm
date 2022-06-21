import java.util.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
// 		String[] wordSet = new String[]{"the", "bats", "tabs", "in", "cat", "act"};
// 		String[] sentences = new String[]{"cat the bats", "in the act", "act tabs in"};
        String[] wordSet = new String[]{"star", "tars", "stay", "tay", "seed", "dees", "eesd", "rast", "date", "ate"};
		String[] sentences = new String[]{"ate date stay", "rast tay star", "tay stay tars", "seed dees star", "are seed rast"};
		ArrayList<Integer> sol = new ArrayList<>();
		sol = count(wordSet, sentences);
		System.out.println(sol.toString());
	}
	
	public static ArrayList<Integer> count(String[] wordSet, String[] sentences){
	    HashMap<String, ArrayList<String>> map = new HashMap<>();
	    for(String str : wordSet){
	        char[] strarr = str.toCharArray();
	        Arrays.sort(strarr);
	        String anagram = String.valueOf(strarr);
	        if(!map.containsKey(anagram)){
	            ArrayList<String> li = new ArrayList();
	            li.add(str);
	            map.put(anagram, li);
	        }
	        else{
	            ArrayList<String> li = map.get(anagram);
	            li.add(str);
	        }
	    }
	    int res = 1;
	    ArrayList<Integer> ans = new ArrayList<>();
	    for(String sentence : sentences){
	        String[] starr = sentence.split("\\s+");
	        for(String s : starr){
	            char[] temparr = s.toCharArray();
	            Arrays.sort(temparr);
	            String temp = String.valueOf(temparr);
	            if(map.containsKey(temp)){
	                res = res * map.get(temp).size();
	            }
	        }
	        ans.add(res);
	        res =1;
	    }
	    return ans;
	}
}