// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/** @ BuildingTextureDataThumbnailRenderer implementation */

#include "BuildingTextureDataThumbnailRenderer.h"
#include "CanvasTypes.h"
#include "CanvasItem.h"
#include "FortHeroType.h"
#include "BuildingTextureData.h"
#include "Engine/Engine.h"
#include "Engine/Texture2D.h"


UBuildingTextureDataThumbnailRenderer::UBuildingTextureDataThumbnailRenderer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UBuildingTextureDataThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas, bool bAdditionalViewFamily)
{
	UBuildingTextureData* BuildingTextureData = Cast<UBuildingTextureData>(Object);

	
	if (BuildingTextureData)
	{
		if (TSoftObjectPtr<UTexture2D> Texture2D = BuildingTextureData->Diffuse)
		{
			Super::Draw(BuildingTextureData->Diffuse, X, Y, Width, Height, Viewport, Canvas, bAdditionalViewFamily);
		}
	}
}
bool UBuildingTextureDataThumbnailRenderer::CanVisualizeAsset(UObject* Object)
{
	UBuildingTextureData* BuildingTextureData = Cast<UBuildingTextureData>(Object);
	
	if (BuildingTextureData)
	{
		if (BuildingTextureData->Diffuse != nullptr)
		{
			return true;
		}
	}
	return false;
}