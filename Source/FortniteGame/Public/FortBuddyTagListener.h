#pragma once
#include "CoreMinimal.h"
#include "FortBuddyTagListener.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortBuddyTagListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FORTNITEGAME_API FFortBuddyTagListener();
};

