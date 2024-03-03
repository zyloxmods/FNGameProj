#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AthenaGameMessageData.h"
#include "GameplayFeedbackEventInfo.h"
#include "GameplayFeedbackEventParams.h"
#include "FortGameplayFeedbackEventData.generated.h"

class AActor;

UCLASS(Blueprintable)
class UFortGameplayFeedbackEventData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayFeedbackEventInfo> FeedbackEventInfos;
    
public:
    UFortGameplayFeedbackEventData();
    UFUNCTION(BlueprintCallable)
    static void PostFeedbackEventMessage(AActor* EventSourceActor, const FGameplayFeedbackEventParams& EventParams, const TMap<FString, FText>& AdditionalArgs);
    
    UFUNCTION(BlueprintCallable)
    static void PostFeedbackEventFromGameMessage(AActor* EventSourceActor, const FAthenaGameMessageData& MsgData, const FUniqueNetIdRepl& InstigatorPlayerId, const TMap<FString, FText>& AdditionalArgs);
    
};

