// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/** @ FortItemDefinitionThumbnailRenderer implementation */


#include "FortItemDefinitionThumbnailRenderer.h"

#include "AthenaCharacterItemDefinition.h"
#include "AthenaMusicPackItemDefinition.h"
#include "AthenaPickaxeItemDefinition.h"
#include "FortniteGame/Public/FortItemDefinition.h"
#include "BatchedElements.h"
#include "CanvasTypes.h"
#include "CanvasItem.h"
#include "FortWeaponMeleeItemDefinition.h"
#include "FortHeroType.h"
#include "Engine/Engine.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "Engine/Texture2D.h"

void UFortItemDefinitionThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas)
{
	UFortItemDefinition* Item = Cast<UFortItemDefinition>(Object);
	UAthenaCharacterItemDefinition* CharItem = Cast<UAthenaCharacterItemDefinition>(Object);
	UAthenaPickaxeItemDefinition* PickaxeItem = Cast<UAthenaPickaxeItemDefinition>(Object);
	
	if (Item)
	{
		if (TSoftObjectPtr<UTexture2D> Texture2D = Item->LargePreviewImage)
		{
			Super::Draw(Item->LargePreviewImage.Get(), X, Y, Width, Height, Viewport, Canvas);
		}
	}
	if (CharItem)
	{
		if (TSoftObjectPtr<UTexture2D> Texture2D = CharItem->HeroDefinition->LargePreviewImage)
		{
			Super::Draw(CharItem->HeroDefinition->LargePreviewImage.Get(), X, Y, Width, Height, Viewport, Canvas);
		}
	}
	if (PickaxeItem)
	{
		if (TSoftObjectPtr<UTexture2D> Texture2D = PickaxeItem->WeaponDefinition->LargePreviewImage)
		{
			Super::Draw(PickaxeItem->WeaponDefinition->LargePreviewImage.Get(), X, Y, Width, Height, Viewport, Canvas);
		}
	}
}

bool UFortItemDefinitionThumbnailRenderer::CanVisualizeAsset(UObject* Object)
{
	UFortItemDefinition* Item = Cast<UFortItemDefinition>(Object);
	UAthenaCharacterItemDefinition* CharItem = Cast<UAthenaCharacterItemDefinition>(Object);
	UAthenaPickaxeItemDefinition* PickaxeItem = Cast<UAthenaPickaxeItemDefinition>(Object);
	
	if (Item && !CharItem)
	{
		if (Item->SmallPreviewImage != nullptr)
		{
			return true;
		}
	}
	if (CharItem)
	{
		if (CharItem->HeroDefinition !=nullptr)
		{
			if (CharItem->HeroDefinition->SmallPreviewImage !=nullptr)
			{
				return true;
			}
		}
	}
	if (PickaxeItem)
	{
		if (PickaxeItem->WeaponDefinition !=nullptr)
		{
			if (PickaxeItem->WeaponDefinition->SmallPreviewImage !=nullptr)
			{
				return true;
			}
		}
	}
	return false;
}
