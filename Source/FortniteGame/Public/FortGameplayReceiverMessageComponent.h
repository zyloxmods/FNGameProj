#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMessageComponentBase.h"
#include "OnGameplayMessageReceivedDelegate.h"
#include "FortGameplayReceiverMessageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameplayReceiverMessageComponent : public UFortGameplayMessageComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayMessageReceived OnGameplayMessageReceived;
    
    UFortGameplayReceiverMessageComponent();
};

