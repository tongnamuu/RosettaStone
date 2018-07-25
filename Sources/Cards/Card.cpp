/*************************************************************************
> File Name: Card.cpp
> Project Name: Hearthstone++
> Author: Chan-Ho Chris Ohk
> Purpose: Card class that stores card information.
> Created Time: 2017/08/30
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <Cards/Card.h>

#include <algorithm>
#include <iostream>

namespace Hearthstonepp
{
void Card::Initialize()
{
    maxAllowedInDeck = (rarity == +Rarity::LEGENDARY) ? 1 : 2;
}
    
bool Card::HasMechanic(GameTag mechanic) const
{
    if (std::find(mechanics.begin(), mechanics.end(), mechanic) !=
        mechanics.end())
    {
        return true;
    }

    return false;
}

unsigned int Card::GetMaxAllowedInDeck() const
{
    return maxAllowedInDeck;
}

void Card::ShowBriefInfo() const
{
    std::cout << name.c_str() << " (" << id.c_str() << ") ";
}

void Card::ShowInfo() const
{
    std::cout << "ID: " << id.c_str() << '\n';
    std::cout << "Name: " << name.c_str() << '\n';
    std::cout << "Text: " << text.c_str() << '\n';
    std::cout << "Rarity: " << rarity._to_string() << '\n';
    std::cout << "Faction: " << faction._to_string() << '\n';
    std::cout << "CardSet: " << cardSet._to_string() << '\n';
    std::cout << "CardClass: " << cardClass._to_string() << '\n';
    std::cout << "CardType: " << cardType._to_string() << '\n';
    std::cout << "Race: " << race._to_string() << '\n';
}
}