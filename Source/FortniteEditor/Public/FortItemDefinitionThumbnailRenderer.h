// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
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
	virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas) override;
	virtual bool CanVisualizeAsset(UObject* Object) override;
};
