
public class Player extends Character {

	int numHealthPotions= 0;
	int healthPotionHealAmount = 30;
	//how many health potions you start with and how much they heal
	
	public Player(String playerName) {
		name = playerName;
		maxHealth = 100;
		currentHealth = 100;
		attackDamage = 50;
		//player stats
	}
	
	void useHealthPotion() //allows the use of health potions
	{
		if(numHealthPotions > 0) {
			currentHealth += healthPotionHealAmount;
			numHealthPotions--;
			System.out.println("\t> You drink a health potion, healing yourself for " + healthPotionHealAmount + "."
							 + "\n\t> You now have" + currentHealth + "HP"
							 + "\n\t> Yoou have " + numHealthPotions + " health potions left.\n");
		}
		else {
			System.out.println("\t> You have no health potions left! Defeat enemies for a chance to receive one!"); //continues the game
		}
	}
	
	
	void giveHealthPotion()
	{
		numHealthPotions ++;
		System.out.println(" * You now have " + numHealthPotions + " health potion(s). *");
	}
}
