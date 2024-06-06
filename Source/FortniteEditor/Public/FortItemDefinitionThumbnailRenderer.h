// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCharacterItemDefinition.h"
#include "AthenaPickaxeItemDefinition.h"
#include "FortItemDefinition.h"
#include "ThumbnailRendering/ThumbnailRenderer.h"
#include "Engine/Texture2D.h"
#include "ThumbnailRendering/TextureThumbnailRenderer.h"
#include "FortItemDefinitionThumbnailRenderer.generated.h"

/** Fortnite Item Definition Editor Thumbnail Renderer implemention.*/
UCLASS()
class FORTNITEEDITOR_API UFortItemDefinitionThumbnailRenderer : public UTextureThumbnailRenderer
{
	GENERATED_BODY()
protected:
	virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas, bool bAdditionalViewFamily) override;

	virtual bool CanVisualizeAsset(UObject* Object) override;
private:
	TSoftObjectPtr<UTexture2D> GetItemPreviewIcon(UFortItemDefinition* Item) const;
	TSoftObjectPtr<UTexture2D> GetCharacterPreviewIcon(UAthenaCharacterItemDefinition* CharItem) const;
	TSoftObjectPtr<UTexture2D> GetPickaxePreviewIcon(UAthenaPickaxeItemDefinition* PickaxeItem) const;
};