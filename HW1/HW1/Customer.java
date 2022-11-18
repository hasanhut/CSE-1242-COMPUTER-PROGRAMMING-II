package hw1;

//Hasan Hut 150119764

public class Customer extends Person{
	private String address = "-";  //I wrote "-" so that it doesn't write null
	public Book borrowedBook;
	public boolean borrowABook = false;
	
	//Customer constructors and attributes
	public Customer(String name, String birthPlace,int birthDate, String address) {
		super(name, birthDate, birthPlace);
		this.address = address;
		this.borrowedBook = borrowedBook;
		this.borrowABook = borrowABook;
	}

	public Customer(String name, int birthDate,String address) {
		super(name, birthDate);
		this.address = address;
	}

	public Customer(String name, String address) {
		super(name);
		this.address = address;
	}
	
	public Customer(String name, int birthDate) {
		super(name, birthDate);
	}

	// getter and setter methods
	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public Book getBorrowedBook() {
		return borrowedBook;
	}

	public void setBorrowedBook(Book borrowedBook) {
		this.borrowedBook = borrowedBook;
	}

	public boolean isBorrowABook() {
		return borrowABook;
	}

	public void setBorrowABook(boolean borrowABook) {
		this.borrowABook = borrowABook;
	}

	@Override
	public String toString() {
		return "Name :" + getName() + ", BirthDate :" + getBirthDate()
				+ ", BirthPlace:" + getBirthPlace() + ", Address :" + address ;
	}


	

	
	
	
}
