#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AthenaEventMatchTeamWidgetBase.generated.h"

class UAthenaEventMatchPlayerWidgetBase;
class UAthenaRemotePlayerViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventMatchTeamWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaEventMatchPlayerWidgetBase*> PlayerWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TeamColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaEventMatchPlayerWidgetBase> PlayerWidgetClass;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UAthenaRemotePlayerViewData>> PlayerDatas;
    
public:
    UAthenaEventMatchTeamWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerWidgetAdded();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDisconnectedChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeadStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDead);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamKills() const;
    
};

