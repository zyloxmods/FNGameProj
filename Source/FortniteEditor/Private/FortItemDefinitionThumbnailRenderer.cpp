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


void UFortItemDefinitionThumbnailRenderer::GetThumbnailSize(UObject* Object, float Zoom, uint32& OutWidth, uint32& OutHeight) const
{
	UFortItemDefinition* Item = Cast<UFortItemDefinition>(Object);
	UAthenaCharacterItemDefinition* CharItem = Cast<UAthenaCharacterItemDefinition>(Object);
	UAthenaPickaxeItemDefinition* PickaxeItem = Cast<UAthenaPickaxeItemDefinition>(Object);
	UAthenaMusicPackItemDefinition* MusicItem = Cast<UAthenaMusicPackItemDefinition>(Object);

	if (Item)
	{
		if (TSoftObjectPtr<UTexture> Texture = Item->LargePreviewImage)
		{
			OutWidth = FMath::TruncToInt(Zoom * (float)Texture->GetSurfaceWidth());
			OutHeight = FMath::TruncToInt(Zoom * (float)Texture->GetSurfaceHeight());
		}
	}
	else if (CharItem)
	{
		if (TSoftObjectPtr<UTexture> Texture = CharItem->HeroDefinition->LargePreviewImage)
		{
			OutWidth = FMath::TruncToInt(Zoom * (float)Texture->GetSurfaceWidth());
			OutHeight = FMath::TruncToInt(Zoom * (float)Texture->GetSurfaceHeight());
		}
	}
	else if (PickaxeItem)
	{
		if (TSoftObjectPtr<UTexture> Texture = PickaxeItem->WeaponDefinition->LargePreviewImage)
		{
			OutWidth = FMath::TruncToInt(Zoom * (float)Texture->GetSurfaceWidth());
			OutHeight = FMath::TruncToInt(Zoom * (float)Texture->GetSurfaceHeight());
		}
	}
	Super::GetThumbnailSize(Object, Zoom, OutWidth, OutHeight);
}

void UFortItemDefinitionThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas)
{
	UFortItemDefinition* Item = Cast<UFortItemDefinition>(Object);
	UAthenaCharacterItemDefinition* CharItem = Cast<UAthenaCharacterItemDefinition>(Object);
	UAthenaPickaxeItemDefinition* PickaxeItem = Cast<UAthenaPickaxeItemDefinition>(Object);
	
	if (Item)
	{
		if (TSoftObjectPtr<UTexture2D> Texture2D = Item->LargePreviewImage)
		{
			const bool bUseTranslucentBlend = Texture2D && Texture2D->HasAlphaChannel() && ((Texture2D->LODGroup == TEXTUREGROUP_UI) || (Texture2D->LODGroup == TEXTUREGROUP_Pixels2D));
			TRefCountPtr<FBatchedElementParameters> BatchedElementParameters;
			if (bUseTranslucentBlend)
			{
				// If using alpha, draw a checkerboard underneath first.
				const int32 CheckerDensity = 8;
				auto* Checker = UThumbnailManager::Get().CheckerboardTexture;
				Canvas->DrawTile(
					0.0f, 0.0f, Width, Height, // Dimensions
					0.0f, 0.0f, CheckerDensity, CheckerDensity, // UVs
					FLinearColor::White, Checker->Resource); // Tint & Texture*/
			}

			// Use A canvas tile item to draw
			FCanvasTileItem CanvasTile(FVector2D(X, Y), Texture2D->Resource, FVector2D(Width, Height), FLinearColor::White);

			// Alpha
			CanvasTile.BlendMode = bUseTranslucentBlend ? SE_BLEND_Translucent : SE_BLEND_Opaque;
			CanvasTile.BatchedElementParameters = BatchedElementParameters;
			CanvasTile.Draw(Canvas);

			if (Texture2D != nullptr)
			{
				/* Additional String Note Start */
				auto AdditionalNote = TEXT("");

				int32 AdditionalNoteWidth = 0;
				int32 AdditionalNoteHeight = 0;
				StringSize(GEngine->GetLargeFont(), AdditionalNoteWidth, AdditionalNoteHeight, AdditionalNote);

				float PaddingX = Width / 128.0f;
				float PaddingY = Height / 128.0f;
				float ScaleX = Width / 64.0f; //Text is 1/64'th of the size of the thumbnails
				float ScaleY = Height / 64.0f;

				FCanvasTextItem TextItem(FVector2D(Width - PaddingX - AdditionalNoteWidth * ScaleX, Height - PaddingY - AdditionalNoteHeight * ScaleY), FText::FromString(AdditionalNote), GEngine->GetLargeFont(), FLinearColor::White);
				TextItem.EnableShadow(FLinearColor::Black);
				TextItem.Scale = FVector2D(ScaleX, ScaleY);
				// Uncomment if you want the editor to write a text on our FortItem
				TextItem.Draw(Canvas);
				/* Additional String Note End */
			}
			return;
		}
	}
	if (CharItem)
	{
		if (TSoftObjectPtr<UTexture2D> Texture2D = CharItem->HeroDefinition->LargePreviewImage)
		{
			const bool bUseTranslucentBlend = Texture2D && Texture2D->HasAlphaChannel() && ((Texture2D->LODGroup == TEXTUREGROUP_UI) || (Texture2D->LODGroup == TEXTUREGROUP_Pixels2D));
			TRefCountPtr<FBatchedElementParameters> BatchedElementParameters;
			if (bUseTranslucentBlend)
			{
				// If using alpha, draw a checkerboard underneath first.
				const int32 CheckerDensity = 8;
				auto* Checker = UThumbnailManager::Get().CheckerboardTexture;
				Canvas->DrawTile(
					0.0f, 0.0f, Width, Height, // Dimensions
					0.0f, 0.0f, CheckerDensity, CheckerDensity, // UVs
					FLinearColor::White, Checker->Resource); // Tint & Texture*/
			}

			// Use A canvas tile item to draw
			FCanvasTileItem CanvasTile(FVector2D(X, Y), Texture2D->Resource, FVector2D(Width, Height), FLinearColor::White);

			// Alpha
			CanvasTile.BlendMode = bUseTranslucentBlend ? SE_BLEND_Translucent : SE_BLEND_Opaque;
			CanvasTile.BatchedElementParameters = BatchedElementParameters;
			CanvasTile.Draw(Canvas);

			if (Texture2D != nullptr)
			{
				/* Additional String Note Start */
				auto AdditionalNote = TEXT("");

				int32 AdditionalNoteWidth = 0;
				int32 AdditionalNoteHeight = 0;
				StringSize(GEngine->GetLargeFont(), AdditionalNoteWidth, AdditionalNoteHeight, AdditionalNote);

				float PaddingX = Width / 128.0f;
				float PaddingY = Height / 128.0f;
				float ScaleX = Width / 64.0f; //Text is 1/64'th of the size of the thumbnails
				float ScaleY = Height / 64.0f;

				FCanvasTextItem TextItem(FVector2D(Width - PaddingX - AdditionalNoteWidth * ScaleX, Height - PaddingY - AdditionalNoteHeight * ScaleY), FText::FromString(AdditionalNote), GEngine->GetLargeFont(), FLinearColor::White);
				TextItem.EnableShadow(FLinearColor::Black);
				TextItem.Scale = FVector2D(ScaleX, ScaleY);
				// Uncomment if you want the editor to write a text on our FortItem
				TextItem.Draw(Canvas);
				/* Additional String Note End */
			}
			return;
		}
	}
	if (PickaxeItem)
	{
		if (TSoftObjectPtr<UTexture2D> Texture2D = PickaxeItem->WeaponDefinition->SmallPreviewImage)
		{
			const bool bUseTranslucentBlend = Texture2D && Texture2D->HasAlphaChannel() && ((Texture2D->LODGroup == TEXTUREGROUP_UI) || (Texture2D->LODGroup == TEXTUREGROUP_Pixels2D));
			TRefCountPtr<FBatchedElementParameters> BatchedElementParameters;
			if (bUseTranslucentBlend)
			{
				// If using alpha, draw a checkerboard underneath first.
				const int32 CheckerDensity = 8;
				auto* Checker = UThumbnailManager::Get().CheckerboardTexture;
				Canvas->DrawTile(
					0.0f, 0.0f, Width, Height, // Dimensions
					0.0f, 0.0f, CheckerDensity, CheckerDensity, // UVs
					FLinearColor::White, Checker->Resource); // Tint & Texture*/
			}

			// Use A canvas tile item to draw
			FCanvasTileItem CanvasTile(FVector2D(X, Y), Texture2D->Resource, FVector2D(Width, Height), FLinearColor::White);

			// Alpha
			CanvasTile.BlendMode = bUseTranslucentBlend ? SE_BLEND_Translucent : SE_BLEND_Opaque;
			CanvasTile.BatchedElementParameters = BatchedElementParameters;
			CanvasTile.Draw(Canvas);

			if (Texture2D != nullptr)
			{
				/* Additional String Note Start */
				auto AdditionalNote = TEXT("");

				int32 AdditionalNoteWidth = 0;
				int32 AdditionalNoteHeight = 0;
				StringSize(GEngine->GetLargeFont(), AdditionalNoteWidth, AdditionalNoteHeight, AdditionalNote);

				float PaddingX = Width / 128.0f;
				float PaddingY = Height / 128.0f;
				float ScaleX = Width / 64.0f; //Text is 1/64'th of the size of the thumbnails
				float ScaleY = Height / 64.0f;

				FCanvasTextItem TextItem(FVector2D(Width - PaddingX - AdditionalNoteWidth * ScaleX, Height - PaddingY - AdditionalNoteHeight * ScaleY), FText::FromString(AdditionalNote), GEngine->GetLargeFont(), FLinearColor::White);
				TextItem.EnableShadow(FLinearColor::Black);
				TextItem.Scale = FVector2D(ScaleX, ScaleY);
				// Uncomment if you want the editor to write a text on our FortItem
				TextItem.Draw(Canvas);
				/* Additional String Note End */
			}
			return;
		}
	}
	Super::Draw(Object, X, Y, Width, Height, Viewport, Canvas);
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