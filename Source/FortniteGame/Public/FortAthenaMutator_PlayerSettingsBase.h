#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "StatEventFilter.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_PlayerSettingsBase.generated.h"

class UCurveTable;
class UFortAbilitySet;
class UFortMinigameStatFilter;
class UFortPlayerSettingsComponentBase;
class UFortSharedGravityMovementData;
class UPlaylistUserOptions;

UCLASS(Blueprintable)
class AFortAthenaMutator_PlayerSettingsBase : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* AbilitySetToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptions* AbilitySetOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSharedGravityMovementData* GravityPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveTable*> ResourceRateOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagQuery> TargetQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagQuery> WeaponQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> EliminationStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatEventFilter EliminationScoreStatEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> AssistStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatEventFilter AssistScoreStatEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSettingsComponentBase* DefaultScopeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSettingsComponentBase* CurrentScopeSettings;
    
public:
    AFortAthenaMutator_PlayerSettingsBase();
};

