// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ThumbnailRendering/SkeletalMeshThumbnailRenderer.h"
#include "CustomCharacterPart.h"
#include "CustomCharacterPartThumbnailRenderer.generated.h"


class FCanvas;
class FRenderTarget;

UCLASS(config=Editor, MinimalAPI)
class UCustomCharacterPartThumbnailRenderer : public USkeletalMeshThumbnailRenderer
{
	GENERATED_UCLASS_BODY()
	
	// Begin UThumbnailRenderer Object
	FORTNITEEDITOR_API virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget*, FCanvas* Canvas, bool bAdditionalViewFamily) override;
	// End UThumbnailRenderer Object
private:
	class FSkeletalMeshThumbnailScene* ThumbnailScene;
};
