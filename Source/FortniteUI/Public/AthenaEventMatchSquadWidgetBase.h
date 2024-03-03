#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortHUDElementWidget.h"
#include "AthenaEventMatchSquadWidgetBase.generated.h"

class UAthenaRemotePlayerViewData;
class UAthenaRemoteSquadViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAthenaEventMatchSquadWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAthenaRemoteSquadViewData> SquadData;
    
public:
    UAthenaEventMatchSquadWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadIdVisible(bool bSquadIdVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadPlaceChanged(UAthenaRemoteSquadViewData* InSquadData, int32 InSquadPlace);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadKillscoreChanged(UAthenaRemoteSquadViewData* InSquadData, int32 InSquadKills);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadIdChanged(UAthenaRemoteSquadViewData* InSquadData, uint8 InSquadId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadColorChanged(UAthenaRemoteSquadViewData* InSquadData, FLinearColor InSquadColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerAdded(UAthenaRemoteSquadViewData* InSquadData, UAthenaRemotePlayerViewData* InPlayerData);
    
};

