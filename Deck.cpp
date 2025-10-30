#include <iostream>

#include "Creature.h"
#include "Deck.h"
#include "Land.h"

int Deck::totalDecks = 0;

Deck::Deck() {
    // Initialize an empty deck
    totalDecks++;
}

Deck::Deck(const Deck& other) {
    totalDecks++;
    // Deep copy each card using its virtual clone() method
    for (Card* c : other.cards) {
        cards.push_back(c->clone());
    }
}

Deck::~Deck() {
    // Delete all cards to avoid memory leaks
    for (Card* c : cards) {
        delete c;
    }
    cards.clear();
    totalDecks--;
}

void Deck::addCard(Card* card) {
    cards.push_back(card);
    // Card counter is automatically updated in each Card constructor
}

int Deck::size() const {
    // Return number of cards in the deck
    return static_cast<int>(cards.size());
}

int Deck::countCreatures() const {
    int count = 0;
    for (Card* c : cards) {
        // Check if this card is a creature
        if (c->getType() == Card::Type::CREATURE) {
            count++;
        }
    }
    return count;
}

void Deck::printDeck() const {
    std::cout << "Deck contains " << cards.size() << " cards:" << std::endl;
    for (Card* c : cards) {
        // Use the polymorphic printInfo() function of each Card type
        c->printInfo();
    }
}

int Deck::getTotalDecks() {
    return totalDecks;
}
