// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.


#include "CustomCharacterPartThumbnailRenderer.h"
#include "CustomCharacterPart.h"
#include "SceneView.h"
#include "Engine/SkeletalMesh.h"
#include "ThumbnailHelpers.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "Materials/MaterialInstanceDynamic.h"



UCustomCharacterPartThumbnailRenderer::UCustomCharacterPartThumbnailRenderer(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    ThumbnailScene = nullptr;
}

void UCustomCharacterPartThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* RenderTarget, FCanvas* Canvas)
{
    UCustomCharacterPart* Part = Cast<UCustomCharacterPart>(Object);
    if (Part->SkeletalMesh != nullptr)
    {
        if ( ThumbnailScene == nullptr )
        {
            ThumbnailScene = new FSkeletalMeshThumbnailScene();
        }
        USkeletalMesh* SkeletalMesh = Part->GetSkeletalMesh();
        ThumbnailScene->SetSkeletalMesh(SkeletalMesh);

        for (const FCustomPartMaterialOverrideData& OverrideData : Part->MaterialOverrides)
        {
            if (OverrideData.MaterialOverrideIndex >= 0 && OverrideData.MaterialOverrideIndex < SkeletalMesh->Materials.Num())
            {
                UMaterialInterface* OverrideMaterial = OverrideData.OverrideMaterial.LoadSynchronous();
                if (OverrideMaterial)
                {
                    // Create a dynamic material instance
                    UMaterialInstanceDynamic* MID = UMaterialInstanceDynamic::Create(OverrideMaterial, NULL);

                    // Assign the dynamic material instance
                    if (MID)
                    {
                        SkeletalMesh->Materials[OverrideData.MaterialOverrideIndex].MaterialInterface = MID;
                    }
                }
            }
        }

        
        FSceneViewFamilyContext ViewFamily( FSceneViewFamily::ConstructionValues( RenderTarget, ThumbnailScene->GetScene(), FEngineShowFlags(ESFIM_Game) )
            .SetWorldTimes(FApp::GetCurrentTime() - GStartTime, FApp::GetDeltaTime(), FApp::GetCurrentTime() - GStartTime));

        ViewFamily.EngineShowFlags.DisableAdvancedFeatures();
        ViewFamily.EngineShowFlags.MotionBlur = 0;
        ViewFamily.EngineShowFlags.LOD = 0;

        ThumbnailScene->GetView(&ViewFamily, X, Y, Width, Height);
        RenderViewFamily(Canvas,&ViewFamily);
    }
}

void UCustomCharacterPartThumbnailRenderer::BeginDestroy()
{
    if ( ThumbnailScene != nullptr )
    {
        delete ThumbnailScene;
        ThumbnailScene = nullptr;
    }

    Super::BeginDestroy();
}