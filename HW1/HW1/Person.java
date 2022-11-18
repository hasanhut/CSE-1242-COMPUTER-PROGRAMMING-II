package hw1;

//Hasan Hut 150119764
public class Person {
	private String name;
	private int birthDate;
	private String birthPlace = "-";  //I wrote "-" so that it doesn't write null
	
	
	//PErson constructors and attributes
	public Person(String name, int birthDate, String birthPlace) {
		super();
		this.name = name;
		this.birthDate = birthDate;
		this.birthPlace = birthPlace;
	}

	public Person(String name, int birthDate) {
		super();
		this.name = name;
		this.birthDate = birthDate;
	}
	

	public Person(String name) {
		super();
		this.name = name;
	}

	// getter and setter methods
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getBirthDate() {
		return birthDate;
	}

	public void setBirthDate(int birthDate) {
		this.birthDate = birthDate;
	}

	public String getBirthPlace() {
		return birthPlace;
	}

	public void setBirthPlace(String birthPlace) {
		this.birthPlace = birthPlace;
	}

	@Override
	public String toString() {
		return "Person [name=" + name + ", birthDate=" + birthDate + ", birthPlace=" + birthPlace + "]";
	}
	
	
}
