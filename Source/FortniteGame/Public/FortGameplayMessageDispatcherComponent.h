#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EVolumeState.h"
#include "FortGameplayMessageReceiverList.h"
#include "FortGameplayMessageTriggerList.h"
#include "FortTriggeredGameplayMessage.h"
#include "FortGameplayMessageDispatcherComponent.generated.h"

class AFortVolume;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class UFortGameplayMessageDispatcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBoundReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFortGameplayMessageReceiverList> ReceiverChannelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBoundTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFortGameplayMessageTriggerList> TriggersChannelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTriggeredGameplayMessage> EnqueuedMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTriggeredGameplayMessage ActiveMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayMessageReceiverList ActiveMessageReceivers;
    
public:
    UFortGameplayMessageDispatcherComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnVolumeStateChanged(EVolumeState NewState, AFortVolume* ChangedVolume);
    
};

