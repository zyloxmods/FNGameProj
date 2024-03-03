#pragma once
#include "CoreMinimal.h"
#include "ReplicatedTranslatedString.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedTranslatedString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Locale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Literal;
    
    FORTNITEGAME_API FReplicatedTranslatedString();
};

