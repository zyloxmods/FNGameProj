#pragma once
#include "CoreMinimal.h"
#include "ETeamMemberState.h"
#include "FortActorIndicatorWidget.h"
#include "AthenaPlayerIndicatorBase.generated.h"

class AFortPlayerStateAthena;
class UAthenaPlayerViewModel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPlayerIndicatorBase : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerVM;
    
public:
    UAthenaPlayerIndicatorBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TalkingStateChanged(AFortPlayerStateAthena* PS, bool bTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCallout(ETeamMemberState Callout);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetViewModel(UAthenaPlayerViewModel* InPlayerVM);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshCurrentPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerNameChanged(AFortPlayerStateAthena* PS, const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DBNOStateChanged(AFortPlayerStateAthena* PS, bool bDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeingRevivedStateChanged(AFortPlayerStateAthena* PS, bool bReviving);
    
};

