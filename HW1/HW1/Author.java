package hw1;

//Hasan Hut 150119764
public class Author extends Person{
	private String publisher;
 
	//Author constructors and attributes
	public Author(String name,String publisher,int birthDate) {
		super(name, birthDate);
		this.publisher = publisher;
	}

	//getter and setter methods
	public String getPublisher() {
		return publisher;
	}

	public void setPublisher(String publisher) {
		this.publisher = publisher;
	}

	@Override
	public String toString() {
		return "Author [publisher=" + publisher + "]";
	}
	
	
	
}
