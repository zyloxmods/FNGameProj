// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/** @ FortItemDefinitionThumbnailRenderer implementation */


#include "FortItemDefinitionThumbnailRenderer.h"

#include "AthenaCharacterItemDefinition.h"
#include "AthenaMusicPackItemDefinition.h"
#include "AthenaPickaxeItemDefinition.h"
#include "FortItemDefinition.h"
#include "BatchedElements.h"
#include "CanvasTypes.h"
#include "CanvasItem.h"
#include "EFortBrushSize.h"
#include "FortWeaponMeleeItemDefinition.h"
#include "FortHeroType.h"
#include "Engine/Engine.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "Engine/Texture2D.h"
#include "Serialization/JsonTypes.h"

void UFortItemDefinitionThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas, bool bAdditionalViewFamily)
{
	if (UFortItemDefinition* Item = Cast<UFortItemDefinition>(Object))
	{
		TSoftObjectPtr<UTexture2D> IconToDraw;
		TSoftObjectPtr<UTexture2D> LargePreviewImage  = Item->GetLargePreviewImage();
		TSoftObjectPtr<UTexture2D> SmallPreviewImage  = Item->GetSmallPreviewImage();
		TSoftObjectPtr<UTexture2D> WidePreviewImage  = Item->WidePreviewImage.LoadSynchronous();
		if (LargePreviewImage != nullptr)
		{
			IconToDraw = LargePreviewImage;
		}
		else if (SmallPreviewImage != nullptr)
		{
			IconToDraw = SmallPreviewImage;	
		}
		else if (WidePreviewImage != nullptr )
		{
			IconToDraw = WidePreviewImage;
		}
		Super::Draw(IconToDraw.Get(), X, Y, Width, Height, Viewport, Canvas, bAdditionalViewFamily);
	}
	if (UAthenaCharacterItemDefinition* CharItem = Cast<UAthenaCharacterItemDefinition>(Object))
	{
		TSoftObjectPtr<UTexture2D> IconToDraw;
		TSoftObjectPtr<UTexture2D> LargePreviewImageHero  = CharItem->HeroDefinition->GetLargePreviewImage();
		TSoftObjectPtr<UTexture2D> SmallPreviewImageHero  = CharItem->HeroDefinition->GetSmallPreviewImage();
		TSoftObjectPtr<UTexture2D> WidePreviewImageHero  = CharItem->HeroDefinition->WidePreviewImage.LoadSynchronous();
		TSoftObjectPtr<UTexture2D> LargePreviewImage  = CharItem->GetLargePreviewImage();
		TSoftObjectPtr<UTexture2D> SmallPreviewImage  = CharItem->GetSmallPreviewImage();
		TSoftObjectPtr<UTexture2D> WidePreviewImage  = CharItem->WidePreviewImage.LoadSynchronous();
		if (CharItem->HeroDefinition != nullptr)
		{
			if (LargePreviewImageHero != nullptr)
			{
				IconToDraw = LargePreviewImageHero;
			}
			else if (SmallPreviewImageHero != nullptr)
			{
				IconToDraw = SmallPreviewImageHero;
			}
			else if (WidePreviewImageHero != nullptr)
			{
				IconToDraw = WidePreviewImageHero;
			}
		}
		else if (LargePreviewImage != nullptr)
		{
			IconToDraw = LargePreviewImage;	
		}
		else if (SmallPreviewImage != nullptr)
		{
			IconToDraw = SmallPreviewImage;	
		}
		else if (WidePreviewImage != nullptr )
		{
			IconToDraw = WidePreviewImage;
		}
		else
		{
			IconToDraw = nullptr;
		}
		Super::Draw(IconToDraw.Get(), X, Y, Width, Height, Viewport, Canvas, bAdditionalViewFamily);
	}
	if (UAthenaPickaxeItemDefinition* PickaxeItem = Cast<UAthenaPickaxeItemDefinition>(Object))
	{
		TSoftObjectPtr<UTexture2D> IconToDraw;
		TSoftObjectPtr<UTexture2D> LargePreviewImageWID  = PickaxeItem->WeaponDefinition->GetLargePreviewImage();
		TSoftObjectPtr<UTexture2D> SmallPreviewImageWID  = PickaxeItem->WeaponDefinition->GetSmallPreviewImage();
		TSoftObjectPtr<UTexture2D> WidePreviewImageWID  = PickaxeItem->WeaponDefinition->WidePreviewImage.LoadSynchronous();
		TSoftObjectPtr<UTexture2D> LargePreviewImage  = PickaxeItem->GetLargePreviewImage();
		TSoftObjectPtr<UTexture2D> SmallPreviewImage  = PickaxeItem->GetSmallPreviewImage();
		TSoftObjectPtr<UTexture2D> WidePreviewImage  = PickaxeItem->WidePreviewImage.LoadSynchronous();
		if (PickaxeItem->WeaponDefinition != nullptr)
		{
			if (LargePreviewImageWID != nullptr)
			{
				IconToDraw = LargePreviewImageWID;
			}
			else if (SmallPreviewImageWID != nullptr)
			{
				IconToDraw = SmallPreviewImageWID;
			}
			else if (WidePreviewImageWID != nullptr)
			{
				IconToDraw = WidePreviewImageWID;
			}
		}
		else if (LargePreviewImage != nullptr)
		{
			IconToDraw = LargePreviewImage;	
		}
		else if (SmallPreviewImage != nullptr)
		{
			IconToDraw = SmallPreviewImage;	
		}
		else if (WidePreviewImage != nullptr )
		{
			IconToDraw = WidePreviewImage;
		}
		Super::Draw(IconToDraw.Get(), X, Y, Width, Height, Viewport, Canvas, bAdditionalViewFamily);
	}
}
bool UFortItemDefinitionThumbnailRenderer::CanVisualizeAsset(UObject* Object)
{
	UFortItemDefinition* Item = Cast<UFortItemDefinition>(Object);
	UAthenaCharacterItemDefinition* CharItem = Cast<UAthenaCharacterItemDefinition>(Object);
	UAthenaPickaxeItemDefinition* PickaxeItem = Cast<UAthenaPickaxeItemDefinition>(Object);

	if (Item && !CharItem && 
		(Item->SmallPreviewImage || Item->LargePreviewImage || Item->WidePreviewImage))
	{
		return true;
	}

	if (CharItem)
	{
		UFortHeroType* HeroDefinition = CharItem->HeroDefinition;

		if ((HeroDefinition && 
			 (HeroDefinition->SmallPreviewImage || HeroDefinition->LargePreviewImage || HeroDefinition->WidePreviewImage)) ||
			(!HeroDefinition && 
			 (CharItem->SmallPreviewImage || CharItem->LargePreviewImage || CharItem->WidePreviewImage)))
		{
			return true;
		}
	}

	if (PickaxeItem)
	{
		UFortWeaponMeleeItemDefinition* WeaponDefinition = PickaxeItem->WeaponDefinition;

		if ((WeaponDefinition && 
			 (WeaponDefinition->SmallPreviewImage || WeaponDefinition->LargePreviewImage || WeaponDefinition->WidePreviewImage)) ||
			(!WeaponDefinition && 
			 (PickaxeItem->SmallPreviewImage || PickaxeItem->LargePreviewImage || PickaxeItem->WidePreviewImage)))
		{
			return true;
		}
	}

	return false;
}
