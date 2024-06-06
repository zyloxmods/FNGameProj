#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortCustomGender.h"
#include "FortCharacterType.h"
#include "FortWorkerType.generated.h"

class UFortItemIconDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortWorkerType : public UFortCharacterType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemIconDefinition> FixedPortrait;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ManagerSynergyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FixedPersonalityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FixedSetBonusTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchingPersonalityBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MismatchingPersonalityPenalty;
    
public:
    UFortWorkerType(const FObjectInitializer& ObjectInitializer);
};

