package hw1;


// Hasan Hut 150119764

public class Book {                  
	private int id;
	protected String title;
	private Author author;
	public boolean borrowed;
	
	//Book constructors and attributes
	public Book(int id, String title, Author author) {
		super();
		this.id = id;
		this.title = title;
		this.author = author;
	}

	//Book constructors and attributes
	public Book(int id, String title) {
		super();
		this.id = id;
		this.title = title;
	}
	
	public boolean isBorrowed() {
		return borrowed;
	}
	
	public boolean borrowed() {
		return borrowed;
	}
	
	public boolean returned() {
		return true;
	}
	
    // getter and setter methods
	public int getId() {
		return id;
	}


	public void setId(int id) {
		this.id = id;
	}

    
	public String getTitle() {
		return title;
	}


	public void setTitle(String title) {
		this.title = title;
	}


	public Author getAuthor() {
		return author;
	}


	public void setAuthor(Author author) {
		this.author = author;
	}


	@Override    // toString method
	public String toString() {
		return "Book Name is :" + title + ", Author is :" + author.getName();
	}


	


	
	
	
	
	
	
	
	
	
	
}
