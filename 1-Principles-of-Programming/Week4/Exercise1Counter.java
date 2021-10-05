public class Counter {
	private int limit;
	private int count;
	
	//constructor
	public Counter(int limit, int count){
		this.limit = limit;
		this.count = count;
	}
  
  //second constructor
  public Counter(int limit){
		this.limit = limit;
		count = 0;
	}
	
	//method to return the current count
  public int getCount(){
		return count;
	}

  public String countFormat(){
    if(count < 10){
      return "0" + count;
    }
    else{
      return "" + count;
    }
  }
	
	//if the count is 1 less than the limit e.g. 59 out of 60, instead of the next count being 60, make it 0 to reset. 
  //else increase the count by 1
  public void tick(){
		if(count == (limit-1)){
			count = 0;
		}
		else{
			count ++;
		}
	}
	
}
