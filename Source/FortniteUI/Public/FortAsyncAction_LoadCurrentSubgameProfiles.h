#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortLoadCurrentSubgameProfilesCompleteDelegateDelegate.h"
#include "FortAsyncAction_LoadCurrentSubgameProfiles.generated.h"

class AFortPlayerController;
class UFortAsyncAction_LoadCurrentSubgameProfiles;

UCLASS(Blueprintable)
class UFortAsyncAction_LoadCurrentSubgameProfiles : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortLoadCurrentSubgameProfilesCompleteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortLoadCurrentSubgameProfilesCompleteDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
public:
    UFortAsyncAction_LoadCurrentSubgameProfiles();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_LoadCurrentSubgameProfiles* LoadCurrentSubgameProfiles(AFortPlayerController* NewPlayerController);
    
};

