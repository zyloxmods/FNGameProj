#pragma once
#include "CoreMinimal.h"
#include "FortCreativeClassInstanceTracker.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeClassInstanceTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ChildClassesAtLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ParentClassesAtLimit;
    
public:
    FORTNITEGAME_API FFortCreativeClassInstanceTracker();
};

