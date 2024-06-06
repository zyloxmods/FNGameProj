#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortPersonalVehicleItemDefinition.generated.h"

class UAnimInstance;
class UFortGameplayAbility;
class USkeletalMesh;
class USoundBase;

UCLASS(Blueprintable)
class UFortPersonalVehicleItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Vehicle", GetFName());
    }
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> PersonalVehicleAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MountTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ActivateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> DeactivateSound;
    
public:
    UFortPersonalVehicleItemDefinition(const FObjectInitializer& ObjectInitializer);
};

