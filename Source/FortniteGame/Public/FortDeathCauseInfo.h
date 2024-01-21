#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortDeathCauseInfoVariant.h"
#include "FortDeathCauseInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortDeathCauseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DeathCauseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SelfInflictedMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SelfInflictedDBNOMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> EliminatedMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> EliminatedDBNOMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDeathCauseInfoVariant> DeathCauseInfoVariants;
    
    FORTNITEGAME_API FFortDeathCauseInfo();
};

