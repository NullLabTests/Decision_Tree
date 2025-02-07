#include 
#include 

// Function to make an AI decision based on health levels
std::string decideAction(int playerHealth, int aiHealth) {
    if (playerHealth > aiHealth) {
        return "retreat"; // If player has more health, AI decides to retreat
    } else {
        return "attack";  // Otherwise, AI decides to attack
    }
}

int main() {
    // Example health values
    int playerHealth = 50;
    int aiHealth = 75;

    // Get the AI's decision
    std::string decision = decideAction(playerHealth, aiHealth);

    // Output the decision
    std::cout << "AI decides to: " << decision << std::endl;

    return 0;
}
