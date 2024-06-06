// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CustomCharacterPartThumbnailRenderer.h"
#include "CustomCharacterPart.h"
#include "Engine/SkeletalMesh.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"

UCustomCharacterPartThumbnailRenderer::UCustomCharacterPartThumbnailRenderer(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UCustomCharacterPartThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* RenderTarget, FCanvas* Canvas, bool bAdditionalViewFamily)
{
    UCustomCharacterPart* Part = Cast<UCustomCharacterPart>(Object);
    if (Part && Part->SkeletalMesh)
    {
        Super::Draw(Part->SkeletalMesh.LoadSynchronous(), X, Y, Width, Height, RenderTarget, Canvas, bAdditionalViewFamily);
    }
}
