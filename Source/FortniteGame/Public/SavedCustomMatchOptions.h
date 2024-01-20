#pragma once
#include "CoreMinimal.h"
#include "SavedCustomMatchOptions.generated.h"

USTRUCT(BlueprintType)
struct FSavedCustomMatchOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> CustomMatchOptions;
    
    FORTNITEGAME_API FSavedCustomMatchOptions();
};

