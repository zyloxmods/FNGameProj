#pragma once
#include "CoreMinimal.h"
#include "LocalizedStringPair.h"
#include "ReplicatedTranslatedStrings.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedTranslatedStrings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocalizedStringPair> Translations;
    
    FORTNITEGAME_API FReplicatedTranslatedStrings();
};

