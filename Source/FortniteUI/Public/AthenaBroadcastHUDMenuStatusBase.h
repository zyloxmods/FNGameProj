#pragma once
#include "CoreMinimal.h"
#include "FortActorIndicatorWidget.h"
#include "AthenaBroadcastHUDMenuStatusBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastHUDMenuStatusBase : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZOffset;
    
public:
    UAthenaBroadcastHUDMenuStatusBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MapActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InventoryActivated();
    
};

