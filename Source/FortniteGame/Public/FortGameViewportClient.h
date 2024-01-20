#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "FortGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText NetworkFailureMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString NetworkFailureMessageAdditionalAnalyticsString;
    
public:
    UFortGameViewportClient();
};

