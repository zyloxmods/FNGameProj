#pragma once
#include "CoreMinimal.h"
#include "FortAIPawnSkeletalMeshAsyncMaterialLoadData.h"
#include "FortAIPawnSkeletalMeshAsyncLoadData.generated.h"

class UAnimInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FFortAIPawnSkeletalMeshAsyncLoadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIPawnSkeletalMeshAsyncMaterialLoadData> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimationBP;
    
    FORTNITEGAME_API FFortAIPawnSkeletalMeshAsyncLoadData();
};

