#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// LinkedList class to manage the list of guesses
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        Node* nextNode = nullptr;
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    // Inserts a new guess at the end of the list
    void insert(int guess) {
        Node* newNode = new Node();
        newNode->data = guess;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Checks if a guess already exists in the list
    bool contains(int guess) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == guess) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Displays all previous guesses
    void display() {
        if (head == nullptr) {
            std::cout << "No guesses were made." << std::endl;
            return;
        }
        std::cout << "Your guesses were: ";
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Seed the random number generator
    srand(time(0));

    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess = 0;
    int attempts = 0;
    LinkedList guessHistory;

    std::cout << "--- Number Guessing Game ---" << std::endl;
    std::cout << "I've picked a number between 1 and 100. Can you guess it? 🎲" << std::endl;

    while (true) {
        std::cout << "\nEnter your guess: ";
        std::cin >> userGuess;
        
        // Basic input validation
        if (std::cin.fail() || userGuess < 1 || userGuess > 100) {
            std::cout << "Invalid input. Please enter a number between 1 and 100." << std::endl;
            std::cin.clear(); // Clear error flags
            std::cin.ignore(10000, '\n'); // Discard bad input
            continue;
        }

        // Check if the number has been guessed before
        if (guessHistory.contains(userGuess)) {
            std::cout << "You've already guessed that number! Try a different one." << std::endl;
            continue;
        }

        // Add valid, new guess to history
        guessHistory.insert(userGuess);
        attempts++;

        if (userGuess == secretNumber) {
            std::cout << "\nCongratulations! You guessed it right!" << std::endl;
            std::cout << "The secret number was " << secretNumber << "." << std::endl;
            std::cout << "It took you " << attempts << " attempts." << std::endl;
            guessHistory.display();
            break; // Exit the loop
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    return 0;
}