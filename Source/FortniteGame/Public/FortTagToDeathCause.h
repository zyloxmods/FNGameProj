#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EDeathCause.h"
#include "FortTagToDeathCause.generated.h"

USTRUCT(BlueprintType)
struct FFortTagToDeathCause {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DeathTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeathCause DBNOCause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeathCause DeathCause;
    
    FORTNITEGAME_API FFortTagToDeathCause();
};

