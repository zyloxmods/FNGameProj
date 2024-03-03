#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortRarity.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Titanium.generated.h"

class UDataTable;
class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Titanium : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UpgradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ValidWeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity HighestUpgradeTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> UpgradedGameplayEffect;
    
public:
    AFortAthenaMutator_Titanium();
};

