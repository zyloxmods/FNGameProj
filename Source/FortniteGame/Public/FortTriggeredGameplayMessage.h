#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTriggeredGameplayMessage.generated.h"

class AController;
class UFortGameplayTriggerMessageComponent;

USTRUCT(BlueprintType)
struct FFortTriggeredGameplayMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayTriggerMessageComponent* Sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChannelId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> TriggerInstigator;
    
    FORTNITEGAME_API FFortTriggeredGameplayMessage();
};

