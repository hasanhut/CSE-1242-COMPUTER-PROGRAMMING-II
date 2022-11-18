package hw1;

//Hasan Hut 150119764

import java.util.ArrayList;


public class Library {
	private String address;
	private ArrayList<Book> books = new ArrayList<>();
	private ArrayList<Customer> customers = new ArrayList<>();
	
	public Library(String address) {
		this.address = address;     
	}
	
	public static void printOpeningHours() {
		System.out.println("Libraries are open daily from 9 am to 5 pm.");
	}
	
	public void printAddress() {
		System.out.println(address);    // printing adress
	}
	
	public boolean addBook(Book book) {
		return books.add(book);	   // adding the books to library
	}
	
	public void addCustomer(Customer customer) {
		customers.add(customer);   // adding the customers to library
	}
	
	public void borrowBook(String bookName,String personName) {
		int foundabook = 0;
	    for (Book b : books) {
	    	if (b.getTitle().equals(bookName)){		//checks if the input is equal to the title of the book
        		foundabook = 1;
	 	        if (!b.isBorrowed()) {		//checks whether the book has been borrowed
	 	            b.borrowed=true;
	 	            foundabook = 2;
	 	            break;
	 	        }if(b.isBorrowed()) {
	 	        	foundabook = 3;
	 	        	break;
	 	        }
        	}  
	    }
	    
	    int foundacustomer = 0;
	  	for (Customer c : customers) {			//checks if the user's name is correct
	  		if(c.getName().equals(personName)) {
	  			foundacustomer = 1;
	  			if(!c.isBorrowABook()) {    //checks whether the user has borrowed a book.
	  				c.borrowABook = true;
	  				foundacustomer = 2;
	  				break;
	  			}if(c.isBorrowABook()) {
	  				foundacustomer = 3;
	  				break;
	  			}
	  		}
	  	}
	    
	  	
	  	
	  	//As a result of the above loops the outputs are suppressed.
	  	if (foundabook == 0) {
	        System.out.println("Sorry, this book is not in our catalog.");
	    } else if (foundabook == 0 || foundabook == 1 || foundabook == 2 & foundacustomer == 0) {
	        System.out.println("Sorry,"+ personName +" is not a customer.");
	    } else if (foundabook == 2 & foundacustomer == 2) {
	        System.out.println(personName +" successfully borrowed " + bookName);
	    }else if (foundabook == 3) {
	        System.out.println("Sorry,this book is already borrowed");
	    }else if (foundacustomer == 3) {
	        System.out.println("Sorry, "+personName +" is already borrowed");
	    }
	    
	  	
	  	
	 
				   
	}
	
	
	public void returnBook(String personName) {
		System.out.println("returnbook");
	}
	
	public void printAvailableBooks() {  // printing not borrowed book
		for(Book b:books){
			if(b.borrowed) {
				System.out.println(b);
			}
		}
		
	}
 
	// getter and setter methods
	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public ArrayList<Book> getBooks() {
		return books;
	}

	public void setBooks(ArrayList<Book> books) {
		this.books = books;
	}

	public ArrayList<Customer> getCustomers() {
		return customers;
	}

	public void setCustomers(ArrayList<Customer> customers) {
		this.customers = customers;
	}

	@Override
	public String toString() {
		return "Library [address=" + address + ", books=" + books + ", customers=" + customers + "]";
	}
	
	
	
	
	
	
	
}
