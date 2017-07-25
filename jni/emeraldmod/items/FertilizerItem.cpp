#include "FertilizerItem.h"
#include "minecraftpe/world/item/ItemInstance.h"
#include "minecraftpe/world/level/BlockSource.h"
#include "minecraftpe/world/entity/Entity.h"
#include "emeraldmod/Emerald.h"

FertilizerItem::FertilizerItem(const std::string &name, short id) : Item(name, id) {}

bool FertilizerItem::_useOn(ItemInstance &item, Entity &entity, BlockPos pos, signed char, float, float, float) const
{
	BlockSource& region = entity.getRegion();
	if (region.getBlock(pos) == Block::mSapling) {
		region.setBlockAndData({pos.x, pos.y + 1, pos.x}, FullBlock(237, 0), 3, 0); // not working
		item.remove(1);
	}
	return true;
}
