package hw1;

//Hasan Hut 150119764

public class Dictionary extends Book{
	private int definitions;

	//Dictionary constructors and attributes
	public Dictionary(int id, String title, Author author, int definitions) {
		super(id, title, author);
		this.definitions = definitions;
	}
	
	public Dictionary(int id, String title,int definitions) {
		super(id, title);
		this.definitions = definitions;
	}

	// getter and sether methods
	public int getDefinitions() {
		return definitions;
	}

	public void setDefinitions(int definitions) {
		this.definitions = definitions;
	}

	@Override
	public String toString() {
		return "Dictionary Name is "+ title + ", definitions :"+ definitions;
	}
	
	
}
