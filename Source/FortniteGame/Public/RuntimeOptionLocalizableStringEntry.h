#pragma once
#include "CoreMinimal.h"
#include "RuntimeOptionLocalizableStringEntry.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeOptionLocalizableStringEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Culture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FORTNITEGAME_API FRuntimeOptionLocalizableStringEntry();
};

