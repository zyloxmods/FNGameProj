#include "FortAnimNotifyState_SpawnProp.h"

UFortAnimNotifyState_SpawnProp::UFortAnimNotifyState_SpawnProp() {
    ActorProp = NULL;
    SkeletalMeshProp = NULL;
    SkeletalMeshPropAnimation = NULL;
    SkeletalMeshPropAnimClass = NULL;
    bInheritScale = true;
    bAbsoluteScale = false;
    bPropAnimLooping = true;
    bPrestreamTextures = true;
    PrestreamTextureDuration = 1;
    StaticMeshProp = NULL;
    PropId = 0;
    bApplyVariantsToSpawnedItems = false;
    bTrackComponentPropInGC = true;
}

void UFortAnimNotifyState_SpawnProp::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
    if (MeshComp && SkeletalMeshProp)
    {
        // Spawn and attach the new skeletal mesh component
        USkeletalMeshComponent* NewMeshComp = NewObject<USkeletalMeshComponent>(MeshComp->GetOwner(), NAME_None, RF_Transient);
        NewMeshComp->RegisterComponent();
        NewMeshComp->SetSkeletalMesh(SkeletalMeshProp);
        NewMeshComp->AttachToComponent(MeshComp, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true), SocketName);

        if (SkeletalMeshPropAnimation != nullptr)
        {
            NewMeshComp->PlayAnimation(SkeletalMeshPropAnimation, bPropAnimLooping);
        }

        if (bInheritScale) // Check if inheritance of scale is desired
        {
            // Inherit scale from the parent component
            NewMeshComp->SetRelativeScale3D(MeshComp->GetComponentScale());
        }
        else
        {
            // Set the custom scale
            NewMeshComp->SetRelativeScale3D(Scale);
        }

        // Set Rotation Offset
        NewMeshComp->SetRelativeRotation(RotationOffset);

        // Set Location Offset
        NewMeshComp->SetRelativeLocation(LocationOffset);
    }
    if (StaticMeshProp != nullptr)
    {
        UStaticMeshComponent* NewStaticMeshComp = NewObject<UStaticMeshComponent>(MeshComp->GetOwner(), NAME_None, RF_Transient);

        NewStaticMeshComp->RegisterComponent();
        NewStaticMeshComp->AttachToComponent(MeshComp, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true), SocketName);
        NewStaticMeshComp->SetStaticMesh(StaticMeshProp);

        if (bInheritScale) // Check if inheritance of scale is desired
        {
            // Inherit scale from the parent component
            NewStaticMeshComp->SetRelativeScale3D(MeshComp->GetComponentScale());
        }
        else
        {
            // Set the custom scale
            NewStaticMeshComp->SetRelativeScale3D(Scale);
        }

        // Set Rotation Offset
        NewStaticMeshComp->SetRelativeRotation(RotationOffset);

        // Set Location Offset
        NewStaticMeshComp->SetRelativeLocation(LocationOffset);
    }
}