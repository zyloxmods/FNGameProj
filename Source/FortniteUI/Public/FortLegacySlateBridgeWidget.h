#pragma once
#include "CoreMinimal.h"
#include "Components/NativeWidgetHost.h"
#include "EFortLegacySlateWidget.h"
#include "OnCloseLegacyWidgetDelegate.h"
#include "FortLegacySlateBridgeWidget.generated.h"

UCLASS(Blueprintable)
class UFortLegacySlateBridgeWidget : public UNativeWidgetHost {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortLegacySlateWidget ContainedWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DPIScaleFactor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnCloseLegacyWidget OnClose;
    
public:
    UFortLegacySlateBridgeWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateSlateWidget(EFortLegacySlateWidget SlateWidgetType);
    
    UFUNCTION(BlueprintCallable)
    void SetOnCloseHandler(const FOnCloseLegacyWidget& OnCloseHandler);
    
};

