#pragma once
#include "CoreMinimal.h"
#include "RuntimeOptionLocalizableStringEntry.h"
#include "RuntimeOptionLocalizableString.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FRuntimeOptionLocalizableString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeOptionLocalizableStringEntry> Entries;
    
    FRuntimeOptionLocalizableString();
};

