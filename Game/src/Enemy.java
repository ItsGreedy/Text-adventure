
public class Enemy extends Character{
	//creates enemy class to put enemies into
	public void setInitHealth() {
		currentHealth = rand.nextInt(maxHealth-1) + 1;
	}
}
