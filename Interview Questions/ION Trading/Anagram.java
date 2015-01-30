package ionTrading;
import java.util.HashMap;
import java.util.Map;

public class Anagram {
	  //This solution will use a hashmap for O(n) runtime
	  public static boolean anagram(String str1, String str2){
		  
		  //Stripping the strings, and if lengths of strings differ, return false
		  String modStr1 = str1.replaceAll("\\s", "").toLowerCase();
		  String modStr2 = str2.replaceAll("\\s", "").toLowerCase();
		  if (modStr1.length()!= modStr2.length()){
		  	return false;
		  }
		  
		  //Map to hashmap with each entry being <Character, Count>
		  char[] charArray1 = modStr1.toCharArray();
		  char[] charArray2 = modStr2.toCharArray();
		  Map<Character, Integer> characterHash = new HashMap<Character, Integer>();
		  
		  //Populate the hashmap using string1
		  for (char c : charArray1){
		  	if (characterHash.get(c) != null){
		  		characterHash.put(c, characterHash.get(c)+1);
		  	}else{
		  		characterHash.put(c, 1);
		  	};
		  }
		  
		  //Subtract from the value of each key
		  for (char c: charArray2){
			if (characterHash.get(c)!=null){
				characterHash.put(c, characterHash.get(c)-1);
			}
		  }
		  
		  //False if any value in this hashmap is not 0
		  for (int charCount: characterHash.values()){
		  	if (charCount!= 0){
		  		return false;
		  	}
		  }
		  return true;
	  }
	  
	  public static void main(String[] args) {
	    System.out.println(anagram("glob", "blog"));
	    System.out.println(anagram("glob", "blag"));
	  }
}
