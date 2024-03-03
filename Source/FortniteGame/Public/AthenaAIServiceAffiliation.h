#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AthenaAIService.h"
#include "FactionData.h"
#include "FactionInfo.h"
#include "AthenaAIServiceAffiliation.generated.h"

class UFortFactionMapping;

UCLASS(Blueprintable)
class UAthenaAIServiceAffiliation : public UAthenaAIService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionData GameParticipantFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFactionMapping> FactionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFactionInfo> FactionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFactionData> CachedFactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CachedFactionTags;
    
public:
    UAthenaAIServiceAffiliation();
};

