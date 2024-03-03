#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TeleportAndWaitForLevelStreamingDelegateDelegate.h"
#include "FortAsyncAction_TeleportAndWaitForLevelStreaming.generated.h"

class AFortPlayerPawn;
class UFortAsyncAction_TeleportAndWaitForLevelStreaming;

UCLASS(Blueprintable)
class UFortAsyncAction_TeleportAndWaitForLevelStreaming : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleportAndWaitForLevelStreamingDelegate OnComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator TeleportRotation;
    
public:
    UFortAsyncAction_TeleportAndWaitForLevelStreaming();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamingComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_TeleportAndWaitForLevelStreaming* CreateTeleportAndWaitForLevelStreaming(AFortPlayerPawn* InPlayerPawn, const FVector& InTeleportLocation, const FRotator& InTeleportRotation);
    
};

