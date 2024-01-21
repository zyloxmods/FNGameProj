#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCharacter.h"
#include "FortWorker.generated.h"

class UFortItemIconDefinition;
class UFortWorkerType;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortWorker : public UFortCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString slotted_building_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 building_slot_used;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString personality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString set_bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Portrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PersonalityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SetBonusTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemIconDefinition> IconDefinition;
    
public:
    UFortWorker();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorkerType* GetWorkerTypeBP() const;
    
};

