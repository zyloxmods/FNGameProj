#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortUINotificationManager.generated.h"

class UFortLocalPlayer;
class UFortUINotificationQueue;

UCLASS(Blueprintable)
class UFortUINotificationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortUINotificationQueue*> UINotificationQueues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* LocalPlayer;
    
public:
    UFortUINotificationManager();
};

