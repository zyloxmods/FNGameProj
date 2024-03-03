#pragma once
#include "CoreMinimal.h"
#include "ArgonFinishedPlayerInfo.h"
#include "ArgonWidgetBase.h"
#include "ArgonHUDAlertWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UArgonHUDAlertWidget : public UArgonWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayPlayerFinishedMessageTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArgonFinishedPlayerInfo> PlayerFinishedMessageQueue;
    
public:
    UArgonHUDAlertWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerFinished(const FArgonFinishedPlayerInfo& FinishedPlayerInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceHidePlayerFinishedMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayPlayerFinishedMessage(FArgonFinishedPlayerInfo FinishedInfo);
    
};

