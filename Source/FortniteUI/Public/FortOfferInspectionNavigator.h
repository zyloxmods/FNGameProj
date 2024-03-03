#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortOfferInspectionNavigator.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortOfferInspectionNavigator : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Previous;
    
public:
    UFortOfferInspectionNavigator();
    UFUNCTION(BlueprintCallable)
    void RequestPreviousOffer();
    
    UFUNCTION(BlueprintCallable)
    void RequestNextOffer();
    
};

