#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortGameplayAbility_SpyTech.h"
#include "SpyTechLevelUpgradeData.h"
#include "SpyTechUpgradeData.h"
#include "FortGameplayAbility_SpyTech_GrantItem.generated.h"

class AFortPlayerControllerAthena;
class AFortPlayerPawnAthena;

UCLASS(Blueprintable)
class UFortGameplayAbility_SpyTech_GrantItem : public UFortGameplayAbility_SpyTech {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ItemToGrantAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumberOfItemToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipUpgradeCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRechargeStackOnGrant;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* FortPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* FortPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpyTechUpgradeData> UpgradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpyTechLevelUpgradeData LevelUpgradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextItemSource;
    
public:
    UFortGameplayAbility_SpyTech_GrantItem();
protected:
    UFUNCTION(BlueprintCallable)
    void UpgradeTagApplied(const FGameplayTag InTag, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void LevelUpgradeTagApplied(const FGameplayTag InTag, int32 NewCount);
    
};

