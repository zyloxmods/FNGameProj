#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "WaxPlacementData.h"
#include "WaxPlacementWidgetBase.generated.h"

class AFortAthenaMutator_Wax;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UWaxPlacementWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Wax* WaxMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxPlacementData FirstPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxPlacementData SecondPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxPlacementData ThirdPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxPlacementData FourthPlacement;
    
public:
    UWaxPlacementWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWaxPlacements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPodiumChangeOccured(const TArray<AFortPlayerStateAthena*>& Leaders);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyTokenChange();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnPodiumChangeOccured();
    
};

