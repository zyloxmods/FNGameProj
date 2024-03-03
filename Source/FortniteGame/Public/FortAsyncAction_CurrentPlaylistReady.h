#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "PlaylistReadyAsyncDelegateDelegate.h"
#include "FortAsyncAction_CurrentPlaylistReady.generated.h"

class UFortAsyncAction_CurrentPlaylistReady;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_CurrentPlaylistReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaylistReadyAsyncDelegate OnReady;
    
    UFortAsyncAction_CurrentPlaylistReady();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_CurrentPlaylistReady* PlaylistDataReadyAsync(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
};

