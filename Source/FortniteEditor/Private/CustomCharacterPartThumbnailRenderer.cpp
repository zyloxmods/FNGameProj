// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.


#include "CustomCharacterPartThumbnailRenderer.h"
#include "CustomCharacterPart.h"
#include "SceneView.h"
#include "Engine/SkeletalMesh.h"
#include "ThumbnailHelpers.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "Engine/Engine.h"



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

        USkeletalMesh* SkeletalMesh = Part->SkeletalMesh.Get();
        ThumbnailScene->SetSkeletalMesh(SkeletalMesh);

        // !Atm will overwrite any exisitning Mesh so if a cp overwrites it will also overwrite the other cp didnt find a fix yet
        // Apply material overrides to the thumbnail mesh
        /*for (const FCustomPartMaterialOverrideData& OverrideData : Part->MaterialOverrides)
        {
            if (OverrideData.MaterialOverrideIndex >= 0 && OverrideData.MaterialOverrideIndex < SkeletalMesh->Materials.Num())
            {
                UMaterialInterface* NewMaterial = OverrideData.OverrideMaterial.LoadSynchronous();
                if (NewMaterial)
                {
                    SkeletalMesh->Materials[OverrideData.MaterialOverrideIndex].MaterialInterface = NewMaterial;
                }
            }
        }*/
        
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