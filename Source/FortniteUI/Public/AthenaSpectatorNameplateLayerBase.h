#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaSpectatorNameplateLayerBase.generated.h"

class UAthenaRemotePlayerViewData;
class UAthenaSpectatorNameplateBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorNameplateLayerBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaSpectatorNameplateBase> NameplateWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaSpectatorNameplateBase> BroadcastNameplateWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, UAthenaSpectatorNameplateBase*> NameplateWidgetMap;
    
public:
    UAthenaSpectatorNameplateLayerBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveNameplate(UAthenaSpectatorNameplateBase* NameplateWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTeamColorVisibleChanged(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadIdsVisibilityChanged(bool bSquadIdsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDataAdded(UAthenaRemotePlayerViewData* InPlayerData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNameplate(UAthenaSpectatorNameplateBase* NameplateWidget);
    
};

