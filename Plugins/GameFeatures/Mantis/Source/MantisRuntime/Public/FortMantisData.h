#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortGameplayEffectContainer.h"
#include "FortMantisTechniqueBranch.h"
#include "FortMantisTechniqueData.h"
#include "Templates/SubclassOf.h"
#include "FortMantisData.generated.h"

class UFortGameplayAbility_Mantis;

UCLASS(Blueprintable)
class UFortMantisData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetachCharacterRotationFromCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReattachCharacterRotationBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReattachCharacterRotationBlendExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindupCharacterRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionCharacterRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryCharacterRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility_Mantis> TechniqueAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayEffectContainer> TechniqueAdditionEffectContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMantisTechniqueData> Techniques;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMantisTechniqueBranch> Branches;
    
    UFortMantisData();
};

