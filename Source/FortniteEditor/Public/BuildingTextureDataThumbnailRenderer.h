// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "ThumbnailRendering/TextureThumbnailRenderer.h"
#include "BuildingTextureDataThumbnailRenderer.generated.h"

UCLASS(config=Editor, MinimalAPI)
class UBuildingTextureDataThumbnailRenderer : public UTextureThumbnailRenderer
{
	GENERATED_UCLASS_BODY()
protected:
	virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas, bool bAdditionalViewFamily) override;
	virtual bool CanVisualizeAsset(UObject* Object) override;
};