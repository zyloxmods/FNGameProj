#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFrontEndCamera.h"
#include "FortFrontendPendingAsyncLevel.generated.h"

class UFortGameStateComponent_FrontEndFlow;
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortFrontendPendingAsyncLevel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* SubgameStreamingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_FrontEndFlow* FrontEndFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFrontEndCamera CameraOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CameraName;
    
    UFortFrontendPendingAsyncLevel();
    UFUNCTION(BlueprintCallable)
    void HandleLevelLoadedAsync();
    
};

