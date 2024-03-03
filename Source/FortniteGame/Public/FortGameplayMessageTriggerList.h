#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMessageTriggerList.generated.h"

class UFortGameplayTriggerMessageComponent;

USTRUCT(BlueprintType)
struct FFortGameplayMessageTriggerList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayTriggerMessageComponent*> Triggers;
    
    FORTNITEGAME_API FFortGameplayMessageTriggerList();
};

