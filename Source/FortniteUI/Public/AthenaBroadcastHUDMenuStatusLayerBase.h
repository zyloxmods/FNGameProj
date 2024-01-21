#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaBroadcastHUDMenuStatusLayerBase.generated.h"

class UAthenaBroadcastHUDMenuStatusBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastHUDMenuStatusLayerBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaBroadcastHUDMenuStatusBase> HUDMenuStatusWidgetClass;
    
public:
    UAthenaBroadcastHUDMenuStatusLayerBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveHUDMenuStatus(UAthenaBroadcastHUDMenuStatusBase* HUDMenuStatusWidget);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateHudMenuWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHUDMenuStatus(UAthenaBroadcastHUDMenuStatusBase* HUDMenuStatusWidget);
    
};

