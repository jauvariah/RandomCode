package ionTrading;
import java.util.Map;
import java.util.Hashtable;
import java.util.HashMap;

public class UniqueHashMap extends HashMap{
	
	//Using a doubly mapped hashmap makes the runtime constant
	private Map<Object, Object> forward = new Hashtable<Object,Object>();
	private Map<Object, Object> backward = new Hashtable<Object, Object>();
	@Override
	public void put(Object key, Object value){
		if (backward.get(value)!=null){
			forward.remove(key);
			backward.remove(value);
		}
		
		forward.put(key, value);
		backward.put(value, key);
	}
	public static void main(){
		
	}
}
