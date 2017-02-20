#include "HoeItem.h"
#include "minecraftpe/world/item/ItemInstance.h"
#include "minecraftpe/world/entity/Mob.h"

HoeItem::HoeItem(short itemId) : Item("emeraldHoe", itemId)
{
	setCategory(CreativeItemCategory::Tools);
	setIcon("emerald_hoe", 0);
	setMaxStackSize(1);
	setMaxDamage(1800);
	setHandEquipped();
}

bool HoeItem::useOn(ItemInstance &item, Entity& entity, int x, int y, int z, signed char side, float xx, float yy, float zz)
{
	Item::mItems[293]->useOn(item, entity, x, y, z, side, xx, yy, zz);
}

void HoeItem::hurtEnemy(ItemInstance *item, Mob*, Mob *victim)
{
	item->hurtAndBreak(2, victim);
}

bool HoeItem::mineBlock(ItemInstance *item, BlockID, int, int, int, Entity *entity)
{
	item->hurtAndBreak(2, entity);
}

