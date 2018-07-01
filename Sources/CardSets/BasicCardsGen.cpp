/*************************************************************************
> File Name: BasicCardsGen.cpp
> Project Name: Hearthstone++
> Author: Chan-Ho Chris Ohk
> Purpose: BasicCardsGen class that stores the power of basic cards.
> Created Time: 2018/06/23
> Copyright (c) 2018, Chan-Ho Chris Ohk
*************************************************************************/
#include <CardSets/BasicCardsGen.h>
#include <Tasks/PowerTask.h>

namespace Hearthstonepp
{
void BasicCardsGen::AddHeroes(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddHeroPowers(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddDruid(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddDruidNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddHunter(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddHunterNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddMage(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddMageNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddPaladin(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddPaladinNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddPriest(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddPriestNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddRogue(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddRogueNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddShaman(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddShamanNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddWarlock(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddWarlockNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddWarrior(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddWarriorNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddNeutral(std::map<std::string, Power>& cards)
{
    // --------------------------------------- MINION - NEUTRAL
    // [EX1_066] Acidic Swamp Ooze - COST:2 [ATK:3/HP:2]
    // - Fac: alliance, Set: core, Rarity: free
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Destroy your opponent's weapon.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    Power p;
    p.powerTask = PowerTaskType::DESTROY_OPPONENT_WEAPON;
    cards.emplace("EX1_066", p);
}

void BasicCardsGen::AddNeutralNonCollect(std::map<std::string, Power>& cards)
{
    (void)cards;
}

void BasicCardsGen::AddAll(std::map<std::string, Power>& cards)
{
    AddNeutral(cards);
}
}