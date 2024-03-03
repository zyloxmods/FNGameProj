#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaBroadcastPlayerEventScoreWidget.generated.h"

class UCommonTextBlock;
class UCommonWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastPlayerEventScoreWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PlayerEventScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* PlayerEventScoreSwitcher;
    
public:
    UAthenaBroadcastPlayerEventScoreWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnRemoteClientEventScoreChanged(int32 NewEventScore);
    
};

