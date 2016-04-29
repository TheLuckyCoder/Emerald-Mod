#include "SlabBlock.h"
#include "mcpe/world/material/Material.h"
#include "mcpe/CreativeItemCategory.h"

SlabBlock::SlabBlock(int blockId) : Block("emeraldSlab", blockId, "emerald_block", Material::getMaterial(MaterialType::METAL))
{
	setDestroyTime(2.0F);
	setExplodeable(8.0F);
	setMapColor(Color::GREEN);
	setSolid(false);
	setVisualShape({0.0F, 0.0F, 0.0F}, {1.0F, 0.5F, 1.0F});
	creativeCategory = CreativeItemCategory::BLOCKS;
}

bool SlabBlock::use(Player &player, const BlockPos &pos){	
	return Block::use(player, pos);
}