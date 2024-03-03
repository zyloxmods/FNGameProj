#pragma once
#include "CoreMinimal.h"
#include "EDeathCause.h"
#include "VictimGameplayInfoPayload.generated.h"

USTRUCT(BlueprintType)
struct FVictimGameplayInfoPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EDeathCause> UCRN_DeathCauses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> UCRN_VictimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> UCRN_KillerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> UCRN_DeathTags;
    
    FORTNITEGAME_API FVictimGameplayInfoPayload();
};

