#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/EngineTypes.h"
#include "FortAllClientsReadyDelegate.h"
#include "FortAsyncAction_WaitForClientAnnouncement.generated.h"

class AFortClientAnnouncement;
class UFortAsyncAction_WaitForClientAnnouncement;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_WaitForClientAnnouncement : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAllClientsReady OnAllClientsReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAllClientsReady OnCanceled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid AnnouncementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckAllPlayersReadyTimerHandle;
    
public:
    UFortAsyncAction_WaitForClientAnnouncement();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_WaitForClientAnnouncement* WaitForClientAnnouncement(UObject* InWorldContextObject, AFortClientAnnouncement* AnnouncementToWaitFor);
    
};

