import java.util.Scanner;
import java.util.Random;

//imports scanner and random functions

public class main {
	//public class

	static Random rand = new Random();

	public static Enemy pickRandomEnemy() { // random enemy function
		
		Enemy[] enemies = {new Snailington(), new Worm(), new Sam(), new Ladybug()};  //brings enemies from the enemy class
		Enemy enemy = enemies[rand.nextInt(enemies.length)];
		return enemy;
	}
	
	public static void main(String[] args)  {
		
		
		
		Scanner in = new Scanner (System.in); //allows input
		
		Player player = new Player("Bob the Bird"); //brings player from player class
				
		boolean running = true;
		
		System.out.println("Welcome to Bob the Bird's Journey");
		
		GAME: //game starts
		while(running)  { //initiates while loop to continue what happens in this loop until it is broken or ended
			Enemy enemy = pickRandomEnemy(); //picks a random enemy
			
			
			System.out.println("-----------------------------------------------");
			
			
			System.out.println("\t* " + enemy.name + " appeared! *\n");
			
			while(enemy.currentHealth > 0) {
				System.out.println("\tYour Hp: " + player.currentHealth);//displays HP after battle
				System.out.println("\t" + enemy.name + "'s HP " +enemy.currentHealth);
				System.out.println("\n\tWhat would you like to do?");
				System.out.println("\t1. Attack");
				System.out.println("\t2. Drink health potion");
				System.out.println("\t3. Run!");
				
				String input = in.nextLine();
				if(input.equals("1")) {
					int playerDamageDone = player.generateDamage();
					int enemyDamageDone = enemy.generateDamage();
					//generates damage done to both player and enemy
					
					enemy.takeDamage(playerDamageDone);
					player.takeDamage(enemyDamageDone);
					
					System.out.println("\t> You slap " + enemy.name + " for " + playerDamageDone + " damage.");
					System.out.println("\t> You take " + enemyDamageDone + " damage!");
					//player damage and enemy damage
					if (player.currentHealth < 1) {
						System.out.println("\t> You have taken too much damage, you are too weak to flap on!");
						break; // breaks the loop
					}
					//decides what the player chooses
				}
				else if (input.equals("2")) {
					player.useHealthPotion(); //using health potion from player class
				}
				else if (input.equals("3")) {
					System.out.println("\tYou run away from " + enemy.name + "!");
					continue GAME;
				}
				else {
					System.out.println("\tInvalid command!");
				}
			}
			
			if(player.currentHealth < 1) { //exits dungeon if player "dies"
				System.out.println("You manage to flap away, weak from the horrors of the dungeon.");
				break;
			}
			
			System.out.println("-----------------------------------------------");
			System.out.println(" * " + enemy.name + " was defeated! * ");
			System.out.println(" * You have " + player.currentHealth + " HP left. * ");
			if (rand.nextInt(100) < 50) {
				System.out.println(" * " + enemy.name + " dropped a health potion! * ");
				
				player.giveHealthPotion();
				// health potion drops
				
			}
			System.out.println("-----------------------------------------------");
			System.out.println("What would you like to do now?");
			System.out.println("1. Continue fighting");
			System.out.println("2. Exit Dungeon");
			
			String input = in.nextLine();
			
			while(!input.equals("1") && !input.equals("2")) {
				System.out.println("Invalid Commance!");
				input = in.nextLine();
				
			}
			
			if (input.equals("1")) {
				System.out.println("You continue on your adventure");
					
			}
			else if(input.equals("2")) { // game ends when player wants to
				System.out.println("You exit the dungeon knowing you're the coolest bird alive!");
				break;
			}
		}
			
		//game over
		System.out.println("***********************");
		System.out.println("* THANKS FOR PLAYING! *");
		System.out.println("***********************");

	}

	

}
