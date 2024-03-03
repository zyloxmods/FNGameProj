#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMessageReceiverList.generated.h"

class UFortGameplayReceiverMessageComponent;

USTRUCT(BlueprintType)
struct FFortGameplayMessageReceiverList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayReceiverMessageComponent*> Receivers;
    
    FORTNITEGAME_API FFortGameplayMessageReceiverList();
};

