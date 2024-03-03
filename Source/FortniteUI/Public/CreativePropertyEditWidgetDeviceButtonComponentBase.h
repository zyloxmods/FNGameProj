#pragma once
#include "CoreMinimal.h"
#include "CreativePropertyEditWidgetBase.h"
#include "CreativePropertyEditWidgetDeviceButtonComponentBase.generated.h"

class UFortCreativeDeviceButtonComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyEditWidgetDeviceButtonComponentBase : public UCreativePropertyEditWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeDeviceButtonComponent* DeviceButtonComponent;
    
public:
    UCreativePropertyEditWidgetDeviceButtonComponentBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCreativeDeviceButtonComponent* GetDeviceButtonComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetButtonLabel() const;
    
};

