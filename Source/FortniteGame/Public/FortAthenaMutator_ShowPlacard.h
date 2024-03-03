#pragma once
#include "CoreMinimal.h"
#include "EShowPlacardPhase.h"
#include "FortAthenaMutator.h"
#include "OnShowPlacard_FinishedDelegate.h"
#include "OnShowPlacard_SetWidgetVisibilityDelegate.h"
#include "FortAthenaMutator_ShowPlacard.generated.h"

class AActor;

UCLASS(Blueprintable)
class AFortAthenaMutator_ShowPlacard : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowPlacard_Finished OnShowPlacard_Finished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowPlacard_SetWidgetVisibility OnShowPlacard_SetWidgetVisibility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShowPlacardPhase, meta=(AllowPrivateAccess=true))
    EShowPlacardPhase ShowPlacardPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitBeforeInitialFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowPlacardDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerWaitsOnBlackScreenDuration;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CameraActor;
    
public:
    AFortAthenaMutator_ShowPlacard();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShowPlacardPhase();
    
};

