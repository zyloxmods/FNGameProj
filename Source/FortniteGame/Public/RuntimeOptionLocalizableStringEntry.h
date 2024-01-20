#pragma once
#include "CoreMinimal.h"
#include "RuntimeOptionLocalizableStringEntry.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FRuntimeOptionLocalizableStringEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Culture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FRuntimeOptionLocalizableStringEntry();
};

