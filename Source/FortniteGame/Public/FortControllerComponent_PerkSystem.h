#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "FortAbilitySetHandle.h"
#include "FortControllerComponent.h"
#include "PerkAccoladeInfo.h"
#include "PerkItemSet.h"
#include "PerkMutatorData.h"
#include "RoundTechDataCache.h"
#include "FortControllerComponent_PerkSystem.generated.h"

class UFortSpyTechItemDefinition;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_PerkSystem : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerTimeToRelease, meta=(AllowPrivateAccess=true))
    float ServerTimeToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RerollCount, meta=(AllowPrivateAccess=true))
    int32 RerollCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AllSelectedPerks, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> AllSelectedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> DefaultPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PerkSelection, meta=(AllowPrivateAccess=true))
    TArray<FPerkItemSet> PerkSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpyTechArray, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> SpyTechArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkAccoladeInfo> AllPerkAccolades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MutatorData, meta=(AllowPrivateAccess=true))
    FPerkMutatorData MutatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag CachedFactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoundTechDataCache RoundStartCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> AbilitySetHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> GEHandles;
    
public:
    UFortControllerComponent_PerkSystem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpyTechArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerTimeToRelease();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RerollCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PerkSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MutatorData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllSelectedPerks();
    
};

