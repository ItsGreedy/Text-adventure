import java.util.Random;

abstract class Character { // my abstract class
	String name;
	// creates class to put the player into this one
	int maxHealth = 0;
	int currentHealth;
	int attackDamage ;
	
	Random rand = new Random();
	
	int generateDamage() { // allows damage to be taken
		return rand.nextInt (attackDamage);
	}

	
	public void takeDamage(int damage)
	{
		currentHealth -= damage;
		//allows player to take dmg
	}

}
