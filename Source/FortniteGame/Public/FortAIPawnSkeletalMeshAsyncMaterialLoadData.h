#pragma once
#include "CoreMinimal.h"
#include "FortAIPawnSkeletalMeshAsyncMaterialLoadData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FFortAIPawnSkeletalMeshAsyncMaterialLoadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireDynamicInstance;
    
    FORTNITEGAME_API FFortAIPawnSkeletalMeshAsyncMaterialLoadData();
};

