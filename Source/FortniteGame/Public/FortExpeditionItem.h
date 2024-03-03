#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortAccountItem.h"
#include "FortCriteriaRequirementData.h"
#include "FortExpeditionItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortExpeditionItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 expedition_max_target_power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 expedition_min_target_power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime expedition_start_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime expedition_end_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime expedition_expiration_start_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime expedition_expiration_end_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString expedition_squad_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString expedition_slot_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> expedition_criteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float expedition_success_chance;
    
    UFortExpeditionItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExpeditionInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExpeditionCompleted(FDateTime UtcNow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasExpeditionExpired(FDateTime UtcNow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetPowerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetRemainingExpeditionExpirationDuration(FDateTime UtcNow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetRemainingExpeditionDuration(FDateTime UtcNow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinTargetPowerLevelToBegin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpeditionSuccessChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetExpeditionSquadId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBonusCriteriaTags(TArray<FGameplayTag>& OutBonusCriteria) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBonusCriteriaBP(TArray<FFortCriteriaRequirementData>& OutBonusCriteria) const;
    
};

