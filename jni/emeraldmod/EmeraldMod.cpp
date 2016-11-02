#include "EmeraldMod.h"

#include "items/EmeraldArmor.h"
#include "items/SwordItem.h"
#include "items/SuperSwordItem.h"
#include "items/PickaxeItem.h"
#include "items/AxeItem.h"
#include "items/PaxItem.h"
#include "items/ShovelItem.h"
#include "items/HoeItem.h"
#include "items/FlintAndEmerald.h"
#include "items/EmeraldBowItem.h"
#include "items/StickItem.h"

Item* EmeraldMod::mHelmet;
Item* EmeraldMod::mChestplate;
Item* EmeraldMod::mLeggings;
Item* EmeraldMod::mBoots;
Item* EmeraldMod::mSword;
Item* EmeraldMod::mSuperSword;
Item* EmeraldMod::mPickaxe;
Item* EmeraldMod::mAxe;
Item* EmeraldMod::mShovel;
Item* EmeraldMod::mHoe;
Item* EmeraldMod::mPax;
Item* EmeraldMod::mFlintAndEmerald;
Item* EmeraldMod::mBow;
Item* EmeraldMod::mStick;

void EmeraldMod::initItems()
{
	//Item::mItems[2000] =  mHelmet = new EmeraldHelmet(2000 - 256);
	//Item::mItems[2001] = mChestplate = new EmeraldChestplate(2001 - 256);
	//Item::mItems[2002] = mLeggings = new EmeraldLeggings(2002 - 256);
	//Item::mItems[2003] = mBoots = new EmeraldBoots(2003 - 256);
	Item::mItems[2004] = mSword = new SwordItem(2004 - 256);
	Item::mItems[2005] = mSuperSword = new SuperSwordItem(2005 - 256);
	Item::mItems[2006] = mPickaxe = new PickaxeItem(2006 - 256);
	Item::mItems[2007] = mAxe = new AxeItem(2007 - 256);
	Item::mItems[2008] = mPax = new PaxItem(2008 - 256);
	Item::mItems[2009] = mShovel = new ShovelItem(2009 - 256);
	Item::mItems[2010] = mHoe = new HoeItem(2010 - 256);
	Item::mItems[2011] = mFlintAndEmerald = new FlintAndEmerald(2011 - 256);
	Item::mItems[2012] = mBow = new EmeraldBowItem(2012 - 256);
	Item::mItems[2013] = mStick = new StickItem(2013 - 256);
} 

void EmeraldMod::initCreativeItems()
{
	//Item::addCreativeItem(mHelmet, 0);
	//Item::addCreativeItem(mChestplate, 0);
	//Item::addCreativeItem(mLeggings, 0);
	//Item::addCreativeItem(mBoots, 0);
	Item::addCreativeItem(mSword, 0);
	Item::addCreativeItem(mSuperSword, 0);
	Item::addCreativeItem(mPickaxe, 0);
	Item::addCreativeItem(mAxe, 0);
	Item::addCreativeItem(mPax, 0);
	Item::addCreativeItem(mShovel, 0);
	Item::addCreativeItem(mHoe, 0);
	Item::addCreativeItem(mFlintAndEmerald, 0);
	Item::addCreativeItem(mBow, 0);
	Item::addCreativeItem(mStick, 0);
}
