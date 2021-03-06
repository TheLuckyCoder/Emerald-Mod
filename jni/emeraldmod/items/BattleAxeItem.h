#pragma once

#include "minecraftpe/world/item/Item.h"

class BattleAxeItem : public Item
{
public:
	BattleAxeItem(const std::string &name, short id);
	
	virtual int getAttackDamage() const { return 12; }
	virtual int getEnchantSlot() const { return 512; }
	virtual int getEnchantValue() const { return 10; }
	virtual void hurtEnemy(ItemInstance&, Mob*, Mob*) const;
	virtual float getDestroySpeed(ItemInstance&, const Block&) const;
	virtual bool canDestroySpecial(const Block&) const;
	virtual bool mineBlock(ItemInstance&, BlockID, int, int, int, Entity*) const;
};

