#pragma once
#include "CoreMinimal.h"
#include "XPEventEntryHotfix.generated.h"

USTRUCT(BlueprintType)
struct FXPEventEntryHotfix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountThreshhold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    FORTNITEGAME_API FXPEventEntryHotfix();
};

