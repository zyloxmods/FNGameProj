#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaSpectatorNameplateLayerBase.generated.h"

class UAthenaRemotePlayerViewData;
class UAthenaSpectatorNameplateBase;
class UFortActorCanvas;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorNameplateLayerBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaSpectatorNameplateBase> NameplateWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, UAthenaSpectatorNameplateBase*> NameplateWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActorCanvas* Canvas_NameplateIndicators;
    
public:
    UAthenaSpectatorNameplateLayerBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnTeamColorVisibleChanged(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDataAdded(UAthenaRemotePlayerViewData* InPlayerData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnArrowTeamColorVisibleChanged(bool bVisible);
    
};

