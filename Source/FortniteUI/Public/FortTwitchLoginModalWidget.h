#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortTwitchLoginModalWidget.generated.h"

class UNativeWidgetHost;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTwitchLoginModalWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNativeWidgetHost* NativeHost;
    
public:
    UFortTwitchLoginModalWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNativeHostContentChanged();
    
};

