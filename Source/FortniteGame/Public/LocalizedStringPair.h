#pragma once
#include "CoreMinimal.h"
#include "LocalizedStringPair.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedStringPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Locale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLiteral;
    
    FORTNITEGAME_API FLocalizedStringPair();
};

