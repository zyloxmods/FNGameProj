#pragma once
#include "CoreMinimal.h"
#include "MeshVariant.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FMeshVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> MeshToSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> OverrideMesh;
    
    FORTNITEGAME_API FMeshVariant();
};

