#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "FortHeroClassGameplayDefinition.generated.h"

class AFortPlayerPawn;
class UFortAbilityKit;
class UFortHeroType;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHeroClassGameplayDefinition : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortPlayerPawn> OverridePawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HeroClassTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LegacyStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAbilityKit>> ClassAbilityKits;
    
public:
    UFortHeroClassGameplayDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UFortAbilityKit*> GetAbilityKitsForClassPerks(const UFortHeroType* HeroDefinition);
    
};

