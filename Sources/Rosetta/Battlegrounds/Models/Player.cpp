// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Rosetta/Battlegrounds/Cards/Cards.hpp>
#include <Rosetta/Battlegrounds/Models/Player.hpp>

namespace RosettaStone::Battlegrounds
{
void Player::SelectHero(std::size_t idx)
{
    const auto heroCard = Cards::FindCardByDbfID(heroChoices.at(idx));
    hero.Initialize(heroCard);

    selectHeroCallback();
}

void Player::FillTavernMinions()
{
    fillTavernMinionCallback(*this);
}

void Player::PurchaseMinion(std::size_t idx)
{
    if (remainCoin < NUM_COIN_PURCHASE_MINION)
    {
        return;
    }

    handZone.Add(tavernMinions.Remove(tavernMinions[idx]), -1);
    remainCoin -= NUM_COIN_PURCHASE_MINION;
}

void Player::SellMinion(std::size_t idx)
{
    auto minion = handZone.Remove(handZone[idx]);
    returnMinionCallback(std::get<Minion>(minion).GetPoolIndex());

    remainCoin += 1;
}

void Player::RefreshTavern()
{
    if (remainCoin < NUM_COIN_REFRESH_TAVERN)
    {
        return;
    }

    refreshTavernCallback(tavernMinions);
    remainCoin -= NUM_COIN_REFRESH_TAVERN;

    fillTavernMinionCallback(*this);
}

void Player::RearrangeMinion(std::size_t curIdx, std::size_t newIdx)
{
    if (curIdx == newIdx || static_cast<int>(curIdx) >= minions.GetCount() ||
        static_cast<int>(newIdx) >= minions.GetCount())
    {
        return;
    }

    minions.Move(static_cast<int>(curIdx), static_cast<int>(newIdx));
}
}  // namespace RosettaStone::Battlegrounds
