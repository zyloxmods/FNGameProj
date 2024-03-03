#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AthenaMemoryBudgetInterface.h"
#include "FortAIPawnMaterialDefinition.h"
#include "FortAIPawnCustomizationDefinition.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS(Blueprintable)
class UFortAIPawnCustomizationDefinition : public UPrimaryDataAsset, public IAthenaMemoryBudgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIPawnMaterialDefinition> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimationBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UFortAIPawnCustomizationDefinition();
    
    // Fix for true pure virtual functions not being implemented
};

