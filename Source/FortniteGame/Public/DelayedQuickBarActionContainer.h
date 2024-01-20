#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "DelayedQuickBarAction.h"
#include "DelayedQuickBarActionContainer.generated.h"

USTRUCT(BlueprintType)
struct FDelayedQuickBarActionContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDelayedQuickBarAction> Items;
    
public:
    FORTNITEGAME_API FDelayedQuickBarActionContainer();
};

