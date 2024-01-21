#pragma once
#include "CoreMinimal.h"
#include "GoosePickupDisplayData.h"
#include "LTMWidgetBase.h"
#include "GoosePlanePickupWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGoosePlanePickupWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGoosePickupDisplayData> DisplayData;
    
public:
    UGoosePlanePickupWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWidget(int32 DisplayIndex, FName ChestName, const FText& DisplayText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWidget();
    
};

