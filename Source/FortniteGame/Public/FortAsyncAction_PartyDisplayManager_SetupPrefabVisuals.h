#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortAsyncAction_PartyDisplayManager_SetupPrefabVisuals.generated.h"

class AFortPlayerPawn;
class APartyDisplayManager;
class UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals;
class UFortItem;

UCLASS(Blueprintable)
class UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDelegate, UFortItem*, Item, FGuid, RequestID);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* Item;
    
public:
    UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals* SetupPrefabVisuals(const APartyDisplayManager* Target, const UFortItem* NewItem, const FGuid& RequestID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRequestedCustomizationComplete(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPreviousCustomizationComplete(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnItemDisplayReady(AFortPlayerPawn* Pawn);
    
};

